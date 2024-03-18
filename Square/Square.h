#ifndef SQUARE_H
#define SQUARE_H

#include "../Area/Area.h"

class Square : public Area {
private:
    float width;
public:
    Square();
    float get_width();
    void cal_area(float);
};

#endif