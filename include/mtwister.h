/**
 * @file mtwister.h
 * @author Rilder Pires
 * @version 1.0
 *
 * @section LICENSE
 *
 * C Adaptation of Mersenne Twister Pseudo Random Number Generator
 *
 * Copyright (C) 2013, Rilder Pires,
 * All rights reserved.                          
 *
 * Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,
 * All rights reserved.                          
 *
 * Copyright (C) 2005, Mutsuo Saito,
 * All rights reserved.                          
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 *  1. Redistributions of source code must retain the above copyright
 * 	  notice, this list of conditions and the following disclaimer.
 * 
 *  2. Redistributions in binary form must reproduce the above copyright
 * 	  notice, this list of conditions and the following disclaimer in the
 * 	  documentation and/or other materials provided with the distribution.
 * 
 *  3. The names of its contributors may not be used to endorse or promote 
 * 	  products derived from this software without specific prior written 
 * 	  permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * @section DESCRIPTION
 * 
 * Adaptation of Mersenne Twister Pseudo Random Number Generator. The original
 * C-program for MT19937, with initialization improved 2002/1/26 was coded by
 * Takuji Nishimura and Makoto Matsumoto. This adaptation was coded by Rilder
 * Pires in 2013/08/22.
 * 
 * Any feedback is very welcome.
 * http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/emt.html
 * email: m-mat@math.sci.hiroshima-u.ac.jp
 *    
 * Any feedback about the adaptation is also welcome.
 * email: rilder@fisica.ufc.br
 */

#ifndef MTwister_H
#define MTwister_H

#include <stdio.h>

/* Period parameters */  
#define MTwister_N 624
#define MTwister_M 397
#define MTwister_MATRIX_A 0x9908b0dfUL   /* constant vector a */
#define MTwister_UPPER_MASK 0x80000000UL /* most significant w-r bits */
#define MTwister_LOWER_MASK 0x7fffffffUL /* least significant r bits */

/**
 * Initializes MTwister_mt[N] with a seed
 * @param s is seed of Random Number Generator.
 */
void MTwister_Init(unsigned long s);

/**
 * Initialize by an array with array-length
 * @param init_key is the array for initializing keys
 * @param key_length is its length
 */
void MTwister_InitByArray(unsigned long init_key[], int key_length);

/**
 * Generates a random number on [0,0xffffffff]-interval
 */
unsigned long MTwister_Int32(void);

/**
 * Generates a random number on [0,0x7fffffff]-interval
 */
long MTwister_Int31(void);

/**
 * Generates a random number on [0,1]-real-interval
 */
double MTwister_Real1(void);

/**
 * Generates a random number on [0,1)-real-interval
 */
double MTwister_Real2(void);

/**
 * Generates a random number on (0,1)-real-interval
 */
double MTwister_Real3(void);

/**
 * Generates a random number on [0,1) with 53-bit resolution
 */
double MTwister_Res53(void);

/* These real versions are due to Isaku Wada, 2002/01/09 added */

#endif /*__MTwister_H__*/
