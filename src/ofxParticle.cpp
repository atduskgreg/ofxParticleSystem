/*
 *  Particle.cpp
 *  ParticleSystem
 *
 *  Created by nathan_laptop on 7/17/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "ofxParticle.h"

ofxParticle::ofxParticle() {
	loc = ofVec2f(ofRandom( 0, ofGetWidth()), ofRandom(0, ofGetHeight()));
	vel = ofVec2f(0, 0 );
	accel = ofVec2f(0, 0 );
	mass = 1.0;
	bounce = 1.0;
	topSpeed = 20;
	radius = 1;
	color = ofColor();
}

void ofxParticle::update() {
	checkEdges();
	vel += accel;
	vel.limit(topSpeed);
	loc += vel;
	accel = ofVec2f(0, 0 );
}

void ofxParticle::addForce( ofVec2f force) {
	force = force / mass;
	accel += force;
}

void ofxParticle::draw() {
	ofSetColor(color.r, color.g, color.b, color.a);
	ofRect(loc.x, loc.y, radius, radius);
}

void ofxParticle::checkEdges() {
	int wh = ofGetHeight();
	int ww = ofGetWidth();
	
	if (loc.y > wh) {
		vel.y *= -bounce;
		loc.y = wh - 2;
	}
	if (loc.y < 1) {
		vel.y *= -bounce;
		loc.y = 2;
	}
	if (loc.x > ww) {
		vel.x *= -bounce;
		loc.x = ww - 2;
	}
	if (loc.x < 1) {
		vel.x *= -bounce;
		loc.x = 2;
	}
}