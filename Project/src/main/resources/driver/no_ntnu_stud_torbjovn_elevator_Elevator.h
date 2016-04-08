/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class no_ntnu_stud_torbjovn_elevator_Elevator */

#ifndef _Included_no_ntnu_stud_torbjovn_elevator_Elevator
#define _Included_no_ntnu_stud_torbjovn_elevator_Elevator
#ifdef __cplusplus
extern "C" {
#endif
#undef no_ntnu_stud_torbjovn_elevator_Elevator_MIN_PRIORITY
#define no_ntnu_stud_torbjovn_elevator_Elevator_MIN_PRIORITY 1L
#undef no_ntnu_stud_torbjovn_elevator_Elevator_NORM_PRIORITY
#define no_ntnu_stud_torbjovn_elevator_Elevator_NORM_PRIORITY 5L
#undef no_ntnu_stud_torbjovn_elevator_Elevator_MAX_PRIORITY
#define no_ntnu_stud_torbjovn_elevator_Elevator_MAX_PRIORITY 10L
#undef no_ntnu_stud_torbjovn_elevator_Elevator_NUM_FLOORS
#define no_ntnu_stud_torbjovn_elevator_Elevator_NUM_FLOORS 4L
#undef no_ntnu_stud_torbjovn_elevator_Elevator_DIR_UP
#define no_ntnu_stud_torbjovn_elevator_Elevator_DIR_UP 1L
#undef no_ntnu_stud_torbjovn_elevator_Elevator_DIR_DOWN
#define no_ntnu_stud_torbjovn_elevator_Elevator_DIR_DOWN -1L
#undef no_ntnu_stud_torbjovn_elevator_Elevator_DIR_STOP
#define no_ntnu_stud_torbjovn_elevator_Elevator_DIR_STOP 0L
/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    getCurrentFloor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_getCurrentFloor
  (JNIEnv *, jobject);

/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    doorObstructed
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_doorObstructed
  (JNIEnv *, jobject);

/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    hw_init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_hw_1init
  (JNIEnv *, jobject);

/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    elev_set_motor_direction
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_elev_1set_1motor_1direction
  (JNIEnv *, jobject, jint);

/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    elev_set_button_lamp
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_elev_1set_1button_1lamp
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    elev_set_floor_indicator
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_elev_1set_1floor_1indicator
  (JNIEnv *, jobject, jint);

/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    elev_set_door_open_lamp
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_elev_1set_1door_1open_1lamp
  (JNIEnv *, jobject, jint);

/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    elev_set_stop_lamp
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_elev_1set_1stop_1lamp
  (JNIEnv *, jobject, jint);

/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    elev_get_button_signal
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_elev_1get_1button_1signal
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     no_ntnu_stud_torbjovn_elevator_Elevator
 * Method:    elev_get_stop_signal
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_no_ntnu_stud_torbjovn_elevator_Elevator_elev_1get_1stop_1signal
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
