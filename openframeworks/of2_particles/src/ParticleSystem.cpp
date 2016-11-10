//
//  ParticleSystem.cpp
//  HW_Particle
//
//  Created by Kim Misung on 2016. 11. 10..
//
//

#include "ParticleSystem.hpp"

ParticleSystem::ParticleSystem(ofVec2f position){
    mPosition = position;
    mEmitRate = 20;
    mIsAddingParticles = true;
}

void ParticleSystem:: update(ofVec2f force){
    if(mParticleList.size() <SIZE_LIMIT){
        for(int i = 0; i<mEmitRate; i++){
            Particle newParticle(mPosition);
            mParticleList.push_back(newParticle);
        }
    }
    for(int i =0; i<mParticleList.size(); i++){
        if(mParticleList[i].mLifeSpan>0){
            float distance = (mParticleList[i].mPosition - mPosition+1).length();
            
            mParticleList[i].resetForces();
            mParticleList[i].applyForce(force);
            float velocityMultiplier = ofMap (distance, 0,200,13,1);
            mParticleList[i].update(velocityMultiplier);
        }
    }
}

void ParticleSystem:: draw(){
    for (int i =0; i<mParticleList.size(); i++){
        mParticleList[i].draw();
    }
}
