//============================================================================
// Name        : LeapMotion.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
extern "C"{
  #include <xdo.h>
}

using namespace std;

int main() {
	xdo_t *xdo = xdo_new(NULL);

	xdo_send_keysequence_window(xdo, CURRENTWINDOW, "ctrl+alt+Left", 0);
	return 0;
}
