/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_I2C
#define EE_HANDS


/* When accelerated mode */
//Delay between pressing a movement key and cursor movement
#define MOUSEKEY_DELAY 10
//Time between cursor movements in milliseconds
#define MOUSEKEY_INTERVAL 20
//Step size for accelerating from initial to base speed0
#define MOUSEKEY_MOVE_DELTA 8
//Time until maximum cursor speed is reached
#define MOUSEKEY_TIME_TO_MAX 30
//Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_DELAY 10
//Time between wheel movements
#define MOUSEKEY_WHEEL_INTERVAL 80
//Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_MAX_SPEED 8
//Time until maximum scroll speed is reached
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40

/* When kinetic mode
//Enable kinetic mode
#define MK_KINETIC_SPEED
//Delay between pressing a movement key and cursor movement
#define MOUSEKEY_DELAY 5
//Time between cursor movements in milliseconds
#define MOUSEKEY_INTERVAL 1
//Step size for accelerating from initial to base speed0
#define MOUSEKEY_MOVE_DELTA 5
//Initial speed of the cursor in pixel per second
#define MOUSEKEY_INITIAL_SPEED
//Maximum cursor speed at which acceleration stops100
#define MOUSEKEY_BASE_SPEED 1000
//Decelerated cursor speed
#define MOUSEKEY_DECELERATED_SPEED 400
//Accelerated cursor speed
#define MOUSEKEY_ACCELERATED_SPEED 3000
//Initial number of movements of the mouse wheel
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS
//Maximum number of movements at which acceleration stops 16
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 32
//Accelerated wheel movements
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 4
//Decelerated wheel movements8
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8
*/
