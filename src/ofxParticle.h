/*
 *  Particle.h
 *  ParticleSystem
 *
 *  Created by nathan_laptop on 7/17/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#pragma once
#include "ofMain.h"

class ofxParticle {
public:
	
	// constructors
	ofxParticle();
	
	// methods
	void update();
	void addForce(ofVec2f force);
	void draw();
	void checkEdges();
	
	// properties
	ofVec2f loc;
	ofVec2f vel;
	ofVec2f accel;
	
	float mass;
	float topSpeed;
	float bounce;
	float radius;
	
	ofColor color;
};
