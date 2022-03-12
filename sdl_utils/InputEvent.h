#ifndef SDL_UTILS_INPUTEVENT_H_
#define SDL_UTILS_INPUTEVENT_H_

//C system includes

//C++ system includes
#include<cstdint>

//3rd-party includes

//Own includes

//Forward Declaration

//Do not expose the SDL_Event internals to the system
union SDL_Event;

class InputEvent {
/*Holds event position on the screen */
	Point pos = Point::UNDEFINED;

	/* See EventDefines.h for more information*/
	int32_t key = Keyboard::KEY_UNKNOWN;
	uint8_t mouseButton = Mouse::UNKNOWN;
	TouchEvent type = TouchEvent::UNKNOWN;

	/*Holds the OS communication event system */

	SDL_Event* _sdlEvent = nullptr;
};

#endif /* SDL_UTILS_INPUTEVENT_H_ */
