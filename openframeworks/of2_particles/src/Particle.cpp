//
//  Particle.cpp
//  Firstparticlsystem
//
//  Created by Kim Misung on 2016. 11. 3..
//
//

#include "Particle.hpp"

Particle::Particle(ofVec2f pos){
    
    mPosition = pos;
    mVelocity = ofVec2f(ofRandom(-2.f,2.f), ofRandom(-2.f,2.f));
    mAcceleration = ofVec2f(0,0);
    mLifeSpan = INITIAL_LIFE_SPAN;
    
}

void Particle::resetForces(){
    
    mAcceleration *= 0;
}

void Particle::applyForce(ofVec2f force){
    
    mAcceleration *= force;
}
void Particle::update(float multiplier){
    

    mVelocity += mAcceleration;
    mPosition +=mVelocity + multiplier;
    

    if (mLifeSpan >0){
        mLifeSpan -=1.0f;
    }
    
}

void Particle::draw(){
    
    if(mLifeSpan > BLINKING_LIFE_SPAN){
  
        ofSetColor(25,164,134);
    }else{
        
        ofSetColor(ofRandom(2,mLifeSpan/INITIAL_LIFE_SPAN*25));
    }
    ofDrawCircle(mPosition, 40.0f*ofMap(mLifeSpan/7, 1, 125.f, 0, 1.f));
}
