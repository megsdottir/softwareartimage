#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(1, 2, 3);
    
    
    
    // setup GUI
    
    gui.setup();
    gui.add(rectangleWidth.set("rectangle width", 20, 5, 200));
            
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    //dummy rectangle
   // ofDrawRectangle(500, 300, rectangleWidth, 15);
    

    
    
    ofSetColor(217, 33, 33);
    ofDrawRectangle(600, 90, 300, 300);
    
    ofSetColor(244, 243, 239);
    ofDrawRectangle(520, 90, 70, 130);
    
    ofSetColor(244, 243, 239);
    ofDrawRectangle(520, 260, 70, 130);
    
    ofSetColor(13,91,225);
    ofDrawRectangle(520, 400, 70, 130);
    
    ofSetColor(244, 243, 239);
    ofDrawRectangle(600, 400, 250, 130);
    
    ofSetColor(244, 243, 239);
    ofDrawRectangle(865, 400, 37, 35);
    
    ofSetColor(255, 243, 128);
    ofDrawRectangle(865, 453, 37,75);
    
    
    
    gui.draw();
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
