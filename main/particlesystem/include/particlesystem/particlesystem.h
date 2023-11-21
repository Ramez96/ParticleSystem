#pragma once
#include "particle.h"
#include "emitter.h"
#include "effect.h"
class particleSystem {
public:
    particleSystem() {}

    ~particleSystem() {}

    std::vector<Emitter> emitters;
    std::vector<Effect> effects;
    std::vector<Particle> particles;

    void createParticleSystem();
    void updateParticleSystem();
    void fetchParticleSystem();

private:
};




