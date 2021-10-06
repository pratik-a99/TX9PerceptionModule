# ACME TX9 Mobile Robot: Pereception Module
[![Build Status](https://app.travis-ci.com/pratik-a99/TX9PerceptionModule.svg?branch=main)](https://app.travis-ci.com/pratik-a99/TX9PerceptionModule)

[![Coverage Status](https://coveralls.io/repos/github/pratik-a99/TX9PerceptionModule/badge.svg?branch=main)](https://coveralls.io/github/pratik-a99/TX9PerceptionModule?branch=main)

[![GitHub license](https://badgen.net/github/license/Naereen/Strapdown.js)]()
---

---

## Overview

Acme Robotics is building a next generation mobile robot to be used on sports fields to detect and track players and provide analytics data about them to be utilized for broadcasting. A swarm of robots will be deployed on the field.

The mobile robot will have a monocular camera placed on it to receive live video feed of the field. A perception module on the robot will receive the video feed and will label each player and store their location with respect to the robot. The output of the module will be the labels and location of the players. This will be fed to a path planner, so that the mobile robot can track a player to ensure that the player is in its field of vision.

## Implementation Summary

We plan to use Machine Learning, specifically Convolution Neural Network Algorithms to detect, classify and track objects from a video stream. 

In order to perform deep neural computation we are using open source computer vision libraries such as openCV and YOLO v4. 

### AIP Document 
[![Documentation Status](https://readthedocs.org/projects/ansicolortags/badge/?version=latest)](https://docs.google.com/spreadsheets/d/1OEmAD93dIXbGDD9Y4btW-zSI0-1M7EjK/edit?usp=sharing&ouid=103747145171777693299&rtpof=true&sd=true)

## Assumptions
1. For deep learning computation we assume that *Nvidia Jetson Nano 2GB* chipset

2. The targets are assumed to be 180cm in height, which will be used to calculate distance from the robot in the forward direction. 

3. Assuming MX219-160 Camera with 3280 × 2464 Resolution, 8 Megapixels and 160° FOV for video feed.

## Technologies
*Programing language*: C++ 

*Build system*: cmake

*Testing Library*: Google Test, Google Mock

*Continuous Integration*: Travis CI, Coverall

## Algorithms

1. YOLO v4 under YOLO LICENSE
2. OpenCV version 4.2, under Apache 2 License

### YOLO Functionality
 
The YOLO algorithm uses convolutional neural networks (CNN) to detect multi objects in real-time. This algorithm uses a single forward propagation through a neural network to detect objects in a single run. Here the role of CNN is to simultaneously predict various class probabilities and bounding boxes. Object detection in YOLO is done as a regression problem and provides the class probabilities of the detected images.

![Midterm_Proposal_img1](https://user-images.githubusercontent.com/24978535/136276058-9714fecf-60d9-4164-b8c6-25416cbfbb2b.png)

Figure: input video being processed by YOLO vision algorithms outputting boxed video as image detection.

### OpenCV
An open-source library for computer vision, machine learning, and image processing. Some of the header files which we would like to access in our project are below:

#include <opencv2/dnn.hpp>

#include <opencv2/imgproc.hpp>

#include <opencv2/highgui.hpp>

#include <opencv2/opencv.hpp>

## Activity Diagram

![Activity](https://user-images.githubusercontent.com/24978535/136276138-d19d2618-fbd7-42c5-8b42-fba1ceafc184.png)

## Video Link
[Video link](https://drive.google.com/file/d/1y3IG4E8LxjugA8rqg2jjViYQlF68eZcT/view?usp=sharing)[Alternate Video link](https://drive.google.com/file/d/1yaVNrSy1hKZMoulElvQm95Ozd2-_Fv4d/view?usp=sharing) 

## UML

![UML](https://user-images.githubusercontent.com/24978535/136276097-481b2869-2c2b-42fb-a242-0367a1321137.png)

## Quad Chart

![QUADChart](https://user-images.githubusercontent.com/24978535/136276120-7825086c-082c-42dc-8747-a32be78ff40f.png)

## Risk and Mitigations

Risk 1: The created software fails to detect humans.
Solution: OpenCv will be used to detect humans based on the jersey color and the dimensions of the bounding box. Utilizing the dimensions of the bounding box will ensure that false positives are minimalized. The average height assumed will be modified to include only the size of an average human torso. 

Risk 2: The software fails to track the detected humans
Solution: The final product will be delivered only for human detection and the tracking update will be provided in a future release.


## Testing:
Google’s Open Images Dataset V6+ will be used for testing and quality assurance. The dataset contains labelled images of humans with the information about bounding boxes provided in it. 
For real time testing, a laptop and webcam will be used and the output will be monitored to ensure proper functioning.


## Standard install via command-line
```
git clone --recursive https://github.com/pratik-a99/TX9PerceptionModule
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage 
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.
