#ifndef CIRCLE_H
#define CIRCLE_H

#include "../Area/Area.h"

class Circle : public Area {
protected:
    float radius;
public:
    void set_radius(float);
    float get_radius();
    void cal_area();
    float get_area();
};

#endif