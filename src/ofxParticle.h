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
#include "ofxVectorMath.h"

class ofxParticle {
public:
	
	// constructors
	ofxParticle();
	
	// methods
	void update();
	void addForce(ofxVec2f force);
	void draw();
	void checkEdges();
	
	// properties
	ofxVec2f loc;
	ofxVec2f vel;
	ofxVec2f accel;
	
	float mass;
	float topSpeed;
	float bounce;
	float radius;
	
	ofColor color;
};
