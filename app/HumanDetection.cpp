/**
 * @copyright  MIT License (c) 2021 Sumedh Koppula and Pratik Acharya
 * @file  HumanDetection.cpp
 * @brief Implementaion of HumanDetection class, In order to implement
 *  detection algorithm for input video stream/ Image Frames
 * It also helps in storing video and displays output with Bounding Boxes.
 * @author Sumedh Koppula and Pratik Acharya
 */

#include <vector>
#include <iostream>
#include <HumanDetection.hpp>
#include <SensorIO.hpp>
#include <YoloConfig.hpp>
#include <opencv2/dnn.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
/**
 * @brief  constructor for HumanDetection class.
 */
HumanDetection::HumanDetection() {
}
/**
 * @brief set the inputWidth value.
 * @param width
 * @return type void.
 */
void HumanDetection::setInputWidth(int width) {
}
/**
 * @brief set the inputHeight value.
 * @param height
 * @return type void.
 */
void HumanDetection::setInputHeight(int height) {
}
/**
 * @brief set the confidenceThreshold value.
 * @param configThres
 * @return type void.
 */
void HumanDetection::setConfidenceThreshold(float configThres) {
}
/**
 * @brief set the nmsThreshold value.
 * @param nmsThres
 * @return type void.
 */
void HumanDetection::setNmsThreshold(float nmsThres) {
  nmsThreshold = nmsThres;
}
/**
 * @brief returns the inputWidth value.
 * @param None
 * @return type int.
 */
int HumanDetection::getInputWidth() {
  return inputWidth;
}
/**
 * @brief returns the inputHeight value.
 * @param None
 * @return type int.
 */
int HumanDetection::getInputHeight() {
  return inputHeight;
}
/**
 * @brief returns the confidenceThreshold value.
 * @param None
 * @return type float.
 */
float HumanDetection::getConfidenceThreshold() {
  return confidenceThreshold;
}
/**
 * @brief returns the nmsThreshold value.
 * @param None
 * @return type float.
 */
float HumanDetection::getNmsThreshold() {
  return nmsThreshold;
}
/**
 * @brief This method predicts the best bounding box
*         for each detection and eliminates the redundant/ overlapping box.
 * @param frame
 * @param outs
 * @param confThreshold
 * @param classes
 * @return None.
 */
void HumanDetection::eliminateBox(cv::Mat& frame,
const std::vector<cv::Mat>& outs, float confThreshold,
const std::vector<std::string>& classes) {
}
 /*
   * @brief This Method helps in drawing the bounding box
    for detected object with its label/ class ID
   * @param classId
   * @param conf
   * @param left
   * @param right
   * @param bottom
   * @param &frame
   * @param classes
   * @return None
 */
void HumanDetection::drawBox(int classId, float conf, int left, int top,
int right, int bottom, cv::Mat &frame,
std::vector<std::string> classes) {
}
/* @brief This method returns the label
   * names of the detected objects
   * @param net
   * @return type std::vector<std::string>
*/
std::vector<std::string> HumanDetection::getOutputNames(
const cv::dnn::Net& net) {
}
/*
   * @brief Our Human Detection algorithm is implemented in 
   this method. This performs detection of input stream.
   It also stores video and displays output with Bounding Boxes.
   * @param parser
   * @param SensorIO
   * @param HumanDetection
   * @param YoloConfig
*/
  void humanDetection(cv::CommandLineParser parser, SensorIO io,
  HumanDetection human_detection, YoloConfig config) {
  }
/**
   * @brief humanDistance method calculates the distance between the robot
   * and detected human by assuming the height of the human to as 
   * 178cm
   * 
   * @param averageHeight 
   * @param boxHeight 
   * @param focalLength 
   * @param sensorHeight 
   * @param frameHeight 
   * @return double 
*/
  double humanDistance(int averageHeight, int boxHeight, double focalLength,
  double sensorHeight, int frameHeight) {
      return 0;
  }
/**
   * @brief humanPosition combines the distance parameter and bounding box paramters
   * to get 3D positon which can be outputed.  
   * 
   * @param humanId 
   * @param distance 
*/
  void humanPosition(std::string humanId, double distance) {
  }
