/**
 * Blah blah blah.
 *
 * @file   myfile.h
 * @author Carlos Alexandro Becker (author@mail.com)
 *
 * @brief  Some Brief.
 */
#ifndef FUNCTIONS_H_BIND_INCLUDED
#define FUNCTIONS_H_BIND_INCLUDED

/**
 * Blah blah blah
 * @param env Java Environment
 * @param obj Obj
 * @param number Number
 */
void my_fn (JNIEnv * env, jobject * obj, int number);

/**
 * Blah blah blah
 * @param env Java Environment
 * @param obj Object
 */
void my_fn2 (JNIEnv * env, jobject * obj);

#endif
