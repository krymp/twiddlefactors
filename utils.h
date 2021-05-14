#ifndef NTT_H
#define NTT_H

#include <cstdint> 	/* uint64_t */

/**
 * Perform an in-place iterative breadth-first decimation-in-time Cooley-Tukey NTT on an input vector and return the result
 *
 * @param vec 	The input vector to be transformed
 * @param n	The size of the input vector
 * @param p	The prime to be used as the modulus of the transformation
 * @param r	The primitive root of the prime
 * @param rev	Whether to perform bit reversal on the input vector
 * @return 	The transformed vector
 */

uint64_t modExp(uint64_t base, uint64_t exp, uint64_t m);

uint64_t modulo(int64_t base, int64_t m);

#endif
