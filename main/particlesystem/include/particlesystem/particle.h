#include <vector>
#include "glm/vec2.hpp"

class Particle {
public:

    Particle();

    ~Particle();

	double lifeTime;
    glm::vec2 position = {0, 0};
    glm::vec2 velocity = {0, 0};
    glm::vec2 acceleration = {0, 0};

private:
};