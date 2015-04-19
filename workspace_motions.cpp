//============================================================================
// Name        : workspace_motions.cpp
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

	ControllerListener listener(45.0f, 50.0f);
	Controller controller;

	// Have the sample listener receive events from the controller
	controller.addListener(listener);

	controller.setPolicy(Controller::POLICY_BACKGROUND_FRAMES);


	//Run until Enter is pressed
	std::cout << "Press Enter to quit..." << std::endl;
	std::cin.get();

	// Remove controller listener
	controller.removeListener(listener);

	return 0;
}
