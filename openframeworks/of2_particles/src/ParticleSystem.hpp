//
//  ParticleSystem.hpp
//  HW_Particle
//
//  Created by Kim Misung on 2016. 11. 10..
//
//

#ifndef ParticleSystem_hpp
#define ParticleSystem_hpp

#include <stdio.h>
#include "ofMain.h"
#include "particle.hpp"

class ParticleSystem{
public:
    ParticleSystem(ofVec2f position);
    void update(ofVec2f force);
    void draw();
    
    vector<Particle> mParticleList;
    ofVec2f mPosition;
    int mEmitRate;
    const int SIZE_LIMIT=500;
    bool mIsAddingParticles;
};

#endif /* ParticleSystem_hpp */
