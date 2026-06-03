#include <opencv2/opencv.hpp>
#define MINIAUDIO_IMPLEMENTATION
#include "miniaudio.h"
#include <iostream>
#include <string>
using namespace cv;
using namespace std;
int main() {
    ma_engine soundThingy;
    ma_engine_init(NULL, &soundThingy);
    Mat img1 = imread("hola.png");
    Mat img2 = imread("bonjour.png");
    Mat img3 = imread("3.jpeg");
    Mat img4 = imread("4.jpg");
    Mat img5 = imread("5.jpeg");
    Mat img6 = imread("6.JPG");
    Mat img7 = imread("7.JPG");
    Mat img8 = imread("8.JPG");
    Mat img9 = imread("9.JPG");
    Mat img10 = imread("10.jpeg");
     Mat img11 = imread("11.jpeg");
    Mat  img12 = imread("12.jpeg");
    Mat img13 = imread("13.JPG");
       Mat img14 = imread("tacoTuesday.jpeg");
          Mat img15 = imread("stormyMonday.jpeg");
    Mat img67 = imread("nihao.jpeg");
    Mat img69 = imread("adios.png"); 
    Mat peachesSummon = imread("summon.png");
    ma_engine_play_sound(&soundThingy, "soundMaybe.mp3", NULL); 
    Mat gizmos[13] = {img1, img2,img3,img4,img5,img6,img7,img8,img9,img10,img11,img12,img13};
    for(int i=0;i<13;i++){
        imshow("gizmo",gizmos[i]); 
        waitKey(0);
    }     
    imshow("(press P twin)",peachesSummon);
    int key = waitKey(0); 
    if (key == 'p') { 
      imshow("PEACHES",img67); 
    waitKey(0);
    } else if (key == 's' || key == 't'){
         imshow("Taco moment",img14); 
        waitKey(0);
        imshow("Stormy Moment",img15); 
         waitKey(0);
    }else {
    imshow("bum",img69);
     waitKey(0);
    }
    ma_engine_uninit(&soundThingy);      
    ma_engine_init(NULL, &soundThingy);  
     ma_engine_play_sound(&soundThingy, "gizmoedit2.mp3", NULL); 
    destroyAllWindows(); 
     VideoCapture editVro("gizmoedit.mp4"); 
      namedWindow("gizmoEditMoment", WINDOW_AUTOSIZE);
    Mat frame;
    while (true) {
        editVro >> frame; 
        if (frame.empty()) break;
        imshow("gizmoEditMoment", frame);
        if (waitKey(60) == 27) break; 
    }
    editVro.release();
    destroyAllWindows();
  ma_engine_uninit(&soundThingy); 
    return 0;
}