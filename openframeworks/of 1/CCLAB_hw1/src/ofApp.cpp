#include "ofApp.h"



vector<ofPoint> points;
ofPolyline polyLine;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);

   }

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofClear(ofColor::white);
    ofPushStyle();
    
    //make at least 2 points to draw a surface
    
    if(points.size()>2){
        polyLine.clear();
        
        //change a vector to a pointer= points->&points[0]
        polyLine.addVertices(&points[0], (int)points.size());
        
        //analyze in/out points made by mouse position in a real time
        ofPoint targetPoint(mouseX, mouseY);
        bool isIn = polyLine.inside(targetPoint);
        
        
        //change the surface color based on isIn
        if (isIn == true){
            ofSetColor(ofColor::skyBlue);
        }else{
            ofSetColor(ofColor::pink);
        }
        
        //draw a polygon
        ofBeginShape();
        for(int i = 0; i<points.size(); i++){
            ofVertex(points[i]);
        }ofEndShape();
    }
    
    //point dots
    ofSetColor(ofColor::gray);
    for(int i =0; i<points.size(); i++){
        ofCircle(points[i].x, points[i].y, 4);
    }
    ofPopStyle();
    
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
    
    if(button ==0){
        
        //add up points(dots) by left mouse clicks
        points.push_back(ofPoint(x,y));
    }else if(button ==2){
        
        //remove dots by right mouse clicks
    if (points.size()>0)
        points.pop_back();
    }
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
