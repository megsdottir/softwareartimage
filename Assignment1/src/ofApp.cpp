#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(1, 2, 3);
    
    
    
    // setup GUI
    
    gui.setup();
    gui.add(rectangleWidth.set("rectangle width", 20, 5, 200));
            
    
    // setup GUI for height
    gui.setup();
    gui.add(rectangleHeight.set("rectangle height", 300, 5, 800));
    
    // create palette
    palette[0] = ofColor(244, 243, 239); //white
    palette[1] =  ofColor(217, 33, 33); //red
    palette[2] = ofColor(13,91,225); //blue
    palette[3] = ofColor(255, 243, 128); //yellow
    
    //accent color
    gui.add(accentColor.set("accent color", 1, 0, 3));
    
    // second color
    gui.add(secondColor.set("second color", 2, 0, 3));

    //third color
    gui.add(thirdColor.set("third color", 3, 0, 3));

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    //dummy rectangle
   // ofDrawRectangle(500, 300, rectangleWidth, 15);
    
    
  
    
  
    
    ofSetColor(palette[accentColor]);
    ofDrawRectangle(600, 90, 300, rectangleHeight);
    
    ofSetColor(palette[0]);
    ofDrawRectangle(520, 90, 70, 130);
    
    ofSetColor(palette[0]);
    ofDrawRectangle(520, 260, 70, 130);
    
    ofSetColor(palette[2]);
    ofDrawRectangle(520, 400, 70, 130);
    
    ofSetColor(palette[secondColor]);
    ofDrawRectangle(600, 400, 250, 130);
    
    ofSetColor(palette[0]);
    ofDrawRectangle(865, 400, 37, 35);
    
    ofSetColor(palette[thirdColor]);
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
