#include "Owen/Owen.hpp"

Owen::Owen(IThermistor *t, IPid *pid)
{
    _thermistor = t;
    _pid = pid;
    _started = false;
}

void Owen::Start(Timeline *timelime, long time)
{
    _timeline = timelime;
    _started = true;
    _startTime = time;
}

void Owen::Stop()
{
    _started = false;
    _pid->SetPower(0);
}
void Owen::Update(long time)
{
    if (!_started)
    {
        return;
    }
    int cycleTime = time - _startTime;
    _currentTime = cycleTime;
    int currentTemperature = _thermistor->GetTemperature();

    TimelineStep *_step = _timeline->GetStep(cycleTime);

    if (currentTemperature >= _step->Temperature)
    {
        _pid->SetPower(0);
        return;
    }

    int difference = _step->Temperature - currentTemperature;
    if (difference > _limit)
    {
        _pid->SetPower(100);
    }
    else
    {
        int power = (double)difference / (double)_limit * 100;
        _pid->SetPower(100);
    }
}