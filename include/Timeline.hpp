#ifndef TIMELIME_HPP
#define TIMELINE_HPP
struct TimelineStep
{
    short Time;
    short Temperature;
};


class Timeline{
public:
    TimelineStep* GetStep(int time){
        return nullptr;
    };
};


#endif