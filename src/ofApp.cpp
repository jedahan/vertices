#include "ofApp.h"

void ofApp::setup(){
  ofBackground(0);
}

void ofApp::update() {
  for(ofMesh firework : fireworks) {
    for(int i=0; i<firework.getNumVertices(); i++){
      firework.setVertex(i, firework.getVertex(i) + ofVec3f(100*(0.5-ofRandomuf()),0,0));
    }
  }
}

void ofApp::draw() {
  for(ofMesh firework : fireworks){
    firework.drawVertices();
  }
}

void ofApp::mousePressed(int x, int y, int button){
  ofMesh f;
  for(int i=0; i<100; i++){
    f.addVertex(ofVec3f(x+(ofRandom(80)-40),(y+ofRandom(80)-40),0));
    f.addColor(ofColor(255,255,0));
  }
  fireworks.push_back(f);
}
