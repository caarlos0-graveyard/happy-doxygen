/**
 * Copyright (c) 2014-2016, Blah, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are NOT permitted.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT
 * NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
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

/**
 * Blah blah blah
 * @param env Java Environment
 * @param obj Obj
 * @param number Number
 */
void
my_fn (JNIEnv * env, jobject * obj, int number)
{
   // code
}

/**
 * Blah blah blah
 * @param env Java Environment
 * @param obj Object
 */
void
my_fn2 (JNIEnv * env, jobject * obj)
{

}
