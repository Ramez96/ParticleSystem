#include "glm/vec2.hpp"

class Emitter {
public:
    glm::vec2 position;
    double velocity;
    double direction;
    double particleSize;
    double particleAmount;
/**
 * Sets the position of the emitter
 * @param newPosition is the x,y coordinates of the emitter
*/
    void setPosition(glm::vec2 newPosition);
/**
 * Set the direction of which the emitter shoots its particles
 * @param newDirection the angle.
*/
    void setDirection(double newDirection);

private:
};


class Uniform : public Emitter {
public:
    Uniform(glm::vec2 pos);

    ~Uniform();

private:
};

class Directional : public Emitter {
public:
/**
 * Constructor for a Directional emitter.
 * @param myPosition uses the glm library to define a 2D vector for the position of the emitter
 * @param myDirection angle
*/
    Directional(glm::vec2 pos, double dir);

    ~Directional();

private:
};

class Explosion : public Emitter {
public:
    Explosion(glm::vec2 pos);

    ~Explosion();

private:
};