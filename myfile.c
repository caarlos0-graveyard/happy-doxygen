/**
 * Blah blah blah.
 *
 * @file   myfile.c
 * @author Carlos Alexandro Becker (author@mail.com)
 *
 * @brief  Some Brief.
 */
#include <jni.h>
#include <stdio.h>
#include "myfile.h"

/**
 * Blah blah blah.
 * @param obj The obj
 * @return True
 */
static bool
something_has_blah (jobject * obj)
{
  return true;
}

/**
 * Blah blah blah
 * @param env Java Environment
 * @param obj Object
 * @param name Char buffer
 * @return Number of bytes
 */
static int
blah_name (JNIEnv * env, jobject * obj, char *name)
{
  return 1
}

void
my_fn (JNIEnv * env, jobject * obj, int number)
{

}

void
my_fn2 (JNIEnv * env, jobject * obj)
{

}
