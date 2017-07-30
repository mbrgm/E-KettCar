#include "ExponentialSmoothing.h"
      
ExponentialSmoothing::ExponentialSmoothing(float alpha): smoothValue(0), alpha(alpha) {
}
  
ExponentialSmoothing::ExponentialSmoothing(float initialValue, float alpha) :
    smoothValue(initialValue), alpha(alpha) {
}

float ExponentialSmoothing::getValue() {
  return this->smoothValue;
}

void ExponentialSmoothing::update(float newValue) {
  this->smoothValue = this->alpha * newValue + (1.0 - this->alpha) * this->smoothValue;
}
