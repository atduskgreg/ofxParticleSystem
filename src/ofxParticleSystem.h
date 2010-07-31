/*
 *  ofxParticleSystem.h
 *  ofxParticleSystem
 *
 *  Created by nathan_laptop on 7/17/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */
#pragma once
#include "ofxParticle.h"
#include "ofxVectorMath.h"

class ofxParticleSystem {
public:
	// constructors
	ofxParticleSystem();
	ofxParticleSystem(int initialAmount);
	
	// methods
	void update();
	void addForce(ofxVec2f force);
	void draw();
	
	void addParticles(int amount);
	void removeParticles(int amount);
	
	int numParticles();
	
	// properties
	std::list<ofxParticle> particles;
};