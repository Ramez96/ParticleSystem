#include "glm/vec2.hpp"


class Effect {
public:
    Effect();
    ~Effect();

    glm::vec2 position;
    double force;
    double direction;
    int effectSize;

    Effect createEffect();

    void setEffect();

private:

};



class Gravity : Effect {
public:
    Gravity();
    ~Gravity();

private:
};




class Wind : Effect{
public:
    Wind() {}

    ~Wind() {}

private:
};
