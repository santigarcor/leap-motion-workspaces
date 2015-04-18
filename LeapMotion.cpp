//============================================================================
// Name        : LeapMotion.cpp
// Author      : santigarcor
// Version     :
//============================================================================

#include <iostream>
#include <string>
#include "Leap.h"
#include "controller_listener.h"

using namespace Leap;
using std::string;
using std::cout;
using std::endl;

int main() {


	ControllerListener listener(35.0f, 35.0f);
	Controller controller;

	// Have the sample listener receive events from the controller
	controller.addListener(listener);

	controller.setPolicy(Controller::POLICY_BACKGROUND_FRAMES);


	// Keep this process running until Enter is pressed
	std::cout << "Press Enter to quit..." << std::endl;
	std::cin.get();

	// Remove the sample listener when done
	controller.removeListener(listener);

	//xdo_send_keysequence_window(xdo, CURRENTWINDOW, "ctrl+alt+Left", 0);
	return 0;
}
