#pragma once

#include "ofMain.h"
#include "ofxiPhone.h"
#include "ofxiPhoneExtras.h"


#include "ofxFB.h"

class testApp : public ofxiPhoneApp {
    
public:
    ~testApp();
    void setup();
    void update();
    void draw();
    void exit();
    
    void touchDown(ofTouchEventArgs &touch);
    void touchMoved(ofTouchEventArgs &touch);
    void touchUp(ofTouchEventArgs &touch);
    void touchDoubleTap(ofTouchEventArgs &touch);
    void touchCancelled(ofTouchEventArgs &touch);
    void lostFocus();
    void gotFocus();
    void gotMemoryWarning();
    void launchedWithURL(string url);
    
    ofxFacebook  *FaceBook;

};