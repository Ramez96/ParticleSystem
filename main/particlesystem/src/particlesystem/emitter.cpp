#include <particlesystem/emitter.h>


void Emitter::setPosition(glm::vec2 newPosition){
    position = newPosition;
}

void Emitter::setDirection(double newDirection){
    direction = newDirection;
}



Directional::Directional(glm::vec2 myPosition, double myDirection){
    setPosition(myPosition);
    setDirection(myDirection);
}