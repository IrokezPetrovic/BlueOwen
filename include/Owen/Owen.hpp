#pragma once
#ifndef OWEN_HPP
#define OWEN_HPP

#include "IOwen.hpp"
#include "../Thermistor/IThermistor.hpp"
#include "../Pid/IPid.hpp"
#include "../Timeline.hpp"

class Owen : public IOwen
{
  public:
    Owen(IThermistor *thermistor, IPid *pid);
    void Start(Timeline *Timelime, long time);
    void Stop();
    void Update(long time);

  private:
    bool _started;
    long _startTime;
    int _limit;
    int _currentTime;
    //Термодатчик
    IThermistor *_thermistor;
    //ПИД-регулятор
    IPid *_pid;
    //Таймлайн
    Timeline *_timeline;
};
#endif