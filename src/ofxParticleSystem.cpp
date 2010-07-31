/*
 *  ofxParticleSystem.cpp
 *  ofxParticleSystem
 *
 *  Created by nathan_laptop on 7/17/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "ofxParticleSystem.h"

ofxParticleSystem::ofxParticleSystem() {
}

ofxParticleSystem::ofxParticleSystem(int initialAmount) {
	addParticles(initialAmount);
}

void ofxParticleSystem::update() {
	for ( list<ofxParticle>::iterator p = particles.begin(); p != particles.end(); ++p) {
		p->update();
	}
}

void ofxParticleSystem::addForce(ofxVec2f force) {
	for ( list<ofxParticle>::iterator p = particles.begin(); p != particles.end(); ++p) {
		p->addForce(force);
	}
}

void ofxParticleSystem::draw() {
	for ( list<ofxParticle>::iterator p = particles.begin(); p != particles.end(); ++p) {
		p->draw();
	}
}

void ofxParticleSystem::addParticles( int amount ) {
	for (int i = 0; i < amount; i++) {
		particles.push_back( ofxParticle() );
	}
}

void ofxParticleSystem::removeParticles( int amount ) {
	for (int i = 0; i < amount; i++) {
		if (!particles.empty()) {
			particles.pop_back();
		}
	}
}

int ofxParticleSystem::numParticles() {
	return particles.size();
}
