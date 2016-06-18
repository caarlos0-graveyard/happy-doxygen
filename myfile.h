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
 * @retval void
 */
void my_fn (JNIEnv * env, jobject * obj, int number);

/**
 * Blah blah blah
 * @param env Java Environment
 * @param obj Object
 */
void my_fn2 (JNIEnv * env, jobject * obj);

#endif
