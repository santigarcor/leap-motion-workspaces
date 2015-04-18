/*
 * controller_listener.h
 *
 *  Created on: Apr 18, 2015
 *      Author: santigarcor
 */

#ifndef CONTROLLER_LISTENER_H_
#define CONTROLLER_LISTENER_H_


extern "C"{
  #include <xdo.h>
}
#include "Leap.h"
#include <iostream>
#include <string>
using namespace Leap;

class ControllerListener : public Listener{
public:
	ControllerListener(float swipeAngle, float screenTapAngle);
	virtual void onConnect(const Controller &);
	virtual void onFrame(const Controller &);
	virtual void onDeviceChange(const Controller &);
private:
	xdo_t *xdo = xdo_new(NULL);
	float swipeAngle, screenTapAngle;
	float toDegrees(float radians);
};

#endif /* CONTROLLER_LISTENER_H_ */
