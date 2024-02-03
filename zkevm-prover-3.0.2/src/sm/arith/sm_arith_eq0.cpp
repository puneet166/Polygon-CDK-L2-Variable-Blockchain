/* code generated with arith_eq_gen.js
* equation: x1*y1-p2_256*y2+x2-y3
* 
* p2_256=115792089237316195423570985008687907853269984665640564039457584007913129639936
*/

#include <stdint.h>
#include "definitions.hpp"
#include "sm/pols_generated/commit_pols.hpp"
#include "goldilocks_base_field.hpp"

USING_PROVER_FORK_NAMESPACE;

Goldilocks::Element eq0 (Goldilocks &fr, ArithCommitPols &p, uint64_t step, uint64_t _o)
{
	switch(step) {
	case 0: 
		return (
		(p.x1[0][_o]  * p.y1[0][_o] )
		 + p.x2[0][_o]  - p.y3[0][_o] );

	case 1: 
		return (
		(p.x1[0][_o]  * p.y1[1][_o] ) +
		(p.x1[1][_o]  * p.y1[0][_o] )
		 + p.x2[1][_o]  - p.y3[1][_o] );

	case 2: 
		return (
		(p.x1[0][_o]  * p.y1[2][_o] ) +
		(p.x1[1][_o]  * p.y1[1][_o] ) +
		(p.x1[2][_o]  * p.y1[0][_o] )
		 + p.x2[2][_o]  - p.y3[2][_o] );

	case 3: 
		return (
		(p.x1[0][_o]  * p.y1[3][_o] ) +
		(p.x1[1][_o]  * p.y1[2][_o] ) +
		(p.x1[2][_o]  * p.y1[1][_o] ) +
		(p.x1[3][_o]  * p.y1[0][_o] )
		 + p.x2[3][_o]  - p.y3[3][_o] );

	case 4: 
		return (
		(p.x1[0][_o]  * p.y1[4][_o] ) +
		(p.x1[1][_o]  * p.y1[3][_o] ) +
		(p.x1[2][_o]  * p.y1[2][_o] ) +
		(p.x1[3][_o]  * p.y1[1][_o] ) +
		(p.x1[4][_o]  * p.y1[0][_o] )
		 + p.x2[4][_o]  - p.y3[4][_o] );

	case 5: 
		return (
		(p.x1[0][_o]  * p.y1[5][_o] ) +
		(p.x1[1][_o]  * p.y1[4][_o] ) +
		(p.x1[2][_o]  * p.y1[3][_o] ) +
		(p.x1[3][_o]  * p.y1[2][_o] ) +
		(p.x1[4][_o]  * p.y1[1][_o] ) +
		(p.x1[5][_o]  * p.y1[0][_o] )
		 + p.x2[5][_o]  - p.y3[5][_o] );

	case 6: 
		return (
		(p.x1[0][_o]  * p.y1[6][_o] ) +
		(p.x1[1][_o]  * p.y1[5][_o] ) +
		(p.x1[2][_o]  * p.y1[4][_o] ) +
		(p.x1[3][_o]  * p.y1[3][_o] ) +
		(p.x1[4][_o]  * p.y1[2][_o] ) +
		(p.x1[5][_o]  * p.y1[1][_o] ) +
		(p.x1[6][_o]  * p.y1[0][_o] )
		 + p.x2[6][_o]  - p.y3[6][_o] );

	case 7: 
		return (
		(p.x1[0][_o]  * p.y1[7][_o] ) +
		(p.x1[1][_o]  * p.y1[6][_o] ) +
		(p.x1[2][_o]  * p.y1[5][_o] ) +
		(p.x1[3][_o]  * p.y1[4][_o] ) +
		(p.x1[4][_o]  * p.y1[3][_o] ) +
		(p.x1[5][_o]  * p.y1[2][_o] ) +
		(p.x1[6][_o]  * p.y1[1][_o] ) +
		(p.x1[7][_o]  * p.y1[0][_o] )
		 + p.x2[7][_o]  - p.y3[7][_o] );

	case 8: 
		return (
		(p.x1[0][_o]  * p.y1[8][_o] ) +
		(p.x1[1][_o]  * p.y1[7][_o] ) +
		(p.x1[2][_o]  * p.y1[6][_o] ) +
		(p.x1[3][_o]  * p.y1[5][_o] ) +
		(p.x1[4][_o]  * p.y1[4][_o] ) +
		(p.x1[5][_o]  * p.y1[3][_o] ) +
		(p.x1[6][_o]  * p.y1[2][_o] ) +
		(p.x1[7][_o]  * p.y1[1][_o] ) +
		(p.x1[8][_o]  * p.y1[0][_o] )
		 + p.x2[8][_o]  - p.y3[8][_o] );

	case 9: 
		return (
		(p.x1[0][_o]  * p.y1[9][_o] ) +
		(p.x1[1][_o]  * p.y1[8][_o] ) +
		(p.x1[2][_o]  * p.y1[7][_o] ) +
		(p.x1[3][_o]  * p.y1[6][_o] ) +
		(p.x1[4][_o]  * p.y1[5][_o] ) +
		(p.x1[5][_o]  * p.y1[4][_o] ) +
		(p.x1[6][_o]  * p.y1[3][_o] ) +
		(p.x1[7][_o]  * p.y1[2][_o] ) +
		(p.x1[8][_o]  * p.y1[1][_o] ) +
		(p.x1[9][_o]  * p.y1[0][_o] )
		 + p.x2[9][_o]  - p.y3[9][_o] );

	case 10: 
		return (
		(p.x1[0][_o]  * p.y1[10][_o]) +
		(p.x1[1][_o]  * p.y1[9][_o] ) +
		(p.x1[2][_o]  * p.y1[8][_o] ) +
		(p.x1[3][_o]  * p.y1[7][_o] ) +
		(p.x1[4][_o]  * p.y1[6][_o] ) +
		(p.x1[5][_o]  * p.y1[5][_o] ) +
		(p.x1[6][_o]  * p.y1[4][_o] ) +
		(p.x1[7][_o]  * p.y1[3][_o] ) +
		(p.x1[8][_o]  * p.y1[2][_o] ) +
		(p.x1[9][_o]  * p.y1[1][_o] ) +
		(p.x1[10][_o] * p.y1[0][_o] )
		 + p.x2[10][_o] - p.y3[10][_o]);

	case 11: 
		return (
		(p.x1[0][_o]  * p.y1[11][_o]) +
		(p.x1[1][_o]  * p.y1[10][_o]) +
		(p.x1[2][_o]  * p.y1[9][_o] ) +
		(p.x1[3][_o]  * p.y1[8][_o] ) +
		(p.x1[4][_o]  * p.y1[7][_o] ) +
		(p.x1[5][_o]  * p.y1[6][_o] ) +
		(p.x1[6][_o]  * p.y1[5][_o] ) +
		(p.x1[7][_o]  * p.y1[4][_o] ) +
		(p.x1[8][_o]  * p.y1[3][_o] ) +
		(p.x1[9][_o]  * p.y1[2][_o] ) +
		(p.x1[10][_o] * p.y1[1][_o] ) +
		(p.x1[11][_o] * p.y1[0][_o] )
		 + p.x2[11][_o] - p.y3[11][_o]);

	case 12: 
		return (
		(p.x1[0][_o]  * p.y1[12][_o]) +
		(p.x1[1][_o]  * p.y1[11][_o]) +
		(p.x1[2][_o]  * p.y1[10][_o]) +
		(p.x1[3][_o]  * p.y1[9][_o] ) +
		(p.x1[4][_o]  * p.y1[8][_o] ) +
		(p.x1[5][_o]  * p.y1[7][_o] ) +
		(p.x1[6][_o]  * p.y1[6][_o] ) +
		(p.x1[7][_o]  * p.y1[5][_o] ) +
		(p.x1[8][_o]  * p.y1[4][_o] ) +
		(p.x1[9][_o]  * p.y1[3][_o] ) +
		(p.x1[10][_o] * p.y1[2][_o] ) +
		(p.x1[11][_o] * p.y1[1][_o] ) +
		(p.x1[12][_o] * p.y1[0][_o] )
		 + p.x2[12][_o] - p.y3[12][_o]);

	case 13: 
		return (
		(p.x1[0][_o]  * p.y1[13][_o]) +
		(p.x1[1][_o]  * p.y1[12][_o]) +
		(p.x1[2][_o]  * p.y1[11][_o]) +
		(p.x1[3][_o]  * p.y1[10][_o]) +
		(p.x1[4][_o]  * p.y1[9][_o] ) +
		(p.x1[5][_o]  * p.y1[8][_o] ) +
		(p.x1[6][_o]  * p.y1[7][_o] ) +
		(p.x1[7][_o]  * p.y1[6][_o] ) +
		(p.x1[8][_o]  * p.y1[5][_o] ) +
		(p.x1[9][_o]  * p.y1[4][_o] ) +
		(p.x1[10][_o] * p.y1[3][_o] ) +
		(p.x1[11][_o] * p.y1[2][_o] ) +
		(p.x1[12][_o] * p.y1[1][_o] ) +
		(p.x1[13][_o] * p.y1[0][_o] )
		 + p.x2[13][_o] - p.y3[13][_o]);

	case 14: 
		return (
		(p.x1[0][_o]  * p.y1[14][_o]) +
		(p.x1[1][_o]  * p.y1[13][_o]) +
		(p.x1[2][_o]  * p.y1[12][_o]) +
		(p.x1[3][_o]  * p.y1[11][_o]) +
		(p.x1[4][_o]  * p.y1[10][_o]) +
		(p.x1[5][_o]  * p.y1[9][_o] ) +
		(p.x1[6][_o]  * p.y1[8][_o] ) +
		(p.x1[7][_o]  * p.y1[7][_o] ) +
		(p.x1[8][_o]  * p.y1[6][_o] ) +
		(p.x1[9][_o]  * p.y1[5][_o] ) +
		(p.x1[10][_o] * p.y1[4][_o] ) +
		(p.x1[11][_o] * p.y1[3][_o] ) +
		(p.x1[12][_o] * p.y1[2][_o] ) +
		(p.x1[13][_o] * p.y1[1][_o] ) +
		(p.x1[14][_o] * p.y1[0][_o] )
		 + p.x2[14][_o] - p.y3[14][_o]);

	case 15: 
		return (
		(p.x1[0][_o]  * p.y1[15][_o]) +
		(p.x1[1][_o]  * p.y1[14][_o]) +
		(p.x1[2][_o]  * p.y1[13][_o]) +
		(p.x1[3][_o]  * p.y1[12][_o]) +
		(p.x1[4][_o]  * p.y1[11][_o]) +
		(p.x1[5][_o]  * p.y1[10][_o]) +
		(p.x1[6][_o]  * p.y1[9][_o] ) +
		(p.x1[7][_o]  * p.y1[8][_o] ) +
		(p.x1[8][_o]  * p.y1[7][_o] ) +
		(p.x1[9][_o]  * p.y1[6][_o] ) +
		(p.x1[10][_o] * p.y1[5][_o] ) +
		(p.x1[11][_o] * p.y1[4][_o] ) +
		(p.x1[12][_o] * p.y1[3][_o] ) +
		(p.x1[13][_o] * p.y1[2][_o] ) +
		(p.x1[14][_o] * p.y1[1][_o] ) +
		(p.x1[15][_o] * p.y1[0][_o] )
		 + p.x2[15][_o] - p.y3[15][_o]);

	case 16: 
		return (
		(p.x1[1][_o]  * p.y1[15][_o]) +
		(p.x1[2][_o]  * p.y1[14][_o]) +
		(p.x1[3][_o]  * p.y1[13][_o]) +
		(p.x1[4][_o]  * p.y1[12][_o]) +
		(p.x1[5][_o]  * p.y1[11][_o]) +
		(p.x1[6][_o]  * p.y1[10][_o]) +
		(p.x1[7][_o]  * p.y1[9][_o] ) +
		(p.x1[8][_o]  * p.y1[8][_o] ) +
		(p.x1[9][_o]  * p.y1[7][_o] ) +
		(p.x1[10][_o] * p.y1[6][_o] ) +
		(p.x1[11][_o] * p.y1[5][_o] ) +
		(p.x1[12][_o] * p.y1[4][_o] ) +
		(p.x1[13][_o] * p.y1[3][_o] ) +
		(p.x1[14][_o] * p.y1[2][_o] ) +
		(p.x1[15][_o] * p.y1[1][_o] )
		    - p.y2[0][_o] );

	case 17: 
		return (
		(p.x1[2][_o]  * p.y1[15][_o]) +
		(p.x1[3][_o]  * p.y1[14][_o]) +
		(p.x1[4][_o]  * p.y1[13][_o]) +
		(p.x1[5][_o]  * p.y1[12][_o]) +
		(p.x1[6][_o]  * p.y1[11][_o]) +
		(p.x1[7][_o]  * p.y1[10][_o]) +
		(p.x1[8][_o]  * p.y1[9][_o] ) +
		(p.x1[9][_o]  * p.y1[8][_o] ) +
		(p.x1[10][_o] * p.y1[7][_o] ) +
		(p.x1[11][_o] * p.y1[6][_o] ) +
		(p.x1[12][_o] * p.y1[5][_o] ) +
		(p.x1[13][_o] * p.y1[4][_o] ) +
		(p.x1[14][_o] * p.y1[3][_o] ) +
		(p.x1[15][_o] * p.y1[2][_o] )
		    - p.y2[1][_o] );

	case 18: 
		return (
		(p.x1[3][_o]  * p.y1[15][_o]) +
		(p.x1[4][_o]  * p.y1[14][_o]) +
		(p.x1[5][_o]  * p.y1[13][_o]) +
		(p.x1[6][_o]  * p.y1[12][_o]) +
		(p.x1[7][_o]  * p.y1[11][_o]) +
		(p.x1[8][_o]  * p.y1[10][_o]) +
		(p.x1[9][_o]  * p.y1[9][_o] ) +
		(p.x1[10][_o] * p.y1[8][_o] ) +
		(p.x1[11][_o] * p.y1[7][_o] ) +
		(p.x1[12][_o] * p.y1[6][_o] ) +
		(p.x1[13][_o] * p.y1[5][_o] ) +
		(p.x1[14][_o] * p.y1[4][_o] ) +
		(p.x1[15][_o] * p.y1[3][_o] )
		    - p.y2[2][_o] );

	case 19: 
		return (
		(p.x1[4][_o]  * p.y1[15][_o]) +
		(p.x1[5][_o]  * p.y1[14][_o]) +
		(p.x1[6][_o]  * p.y1[13][_o]) +
		(p.x1[7][_o]  * p.y1[12][_o]) +
		(p.x1[8][_o]  * p.y1[11][_o]) +
		(p.x1[9][_o]  * p.y1[10][_o]) +
		(p.x1[10][_o] * p.y1[9][_o] ) +
		(p.x1[11][_o] * p.y1[8][_o] ) +
		(p.x1[12][_o] * p.y1[7][_o] ) +
		(p.x1[13][_o] * p.y1[6][_o] ) +
		(p.x1[14][_o] * p.y1[5][_o] ) +
		(p.x1[15][_o] * p.y1[4][_o] )
		    - p.y2[3][_o] );

	case 20: 
		return (
		(p.x1[5][_o]  * p.y1[15][_o]) +
		(p.x1[6][_o]  * p.y1[14][_o]) +
		(p.x1[7][_o]  * p.y1[13][_o]) +
		(p.x1[8][_o]  * p.y1[12][_o]) +
		(p.x1[9][_o]  * p.y1[11][_o]) +
		(p.x1[10][_o] * p.y1[10][_o]) +
		(p.x1[11][_o] * p.y1[9][_o] ) +
		(p.x1[12][_o] * p.y1[8][_o] ) +
		(p.x1[13][_o] * p.y1[7][_o] ) +
		(p.x1[14][_o] * p.y1[6][_o] ) +
		(p.x1[15][_o] * p.y1[5][_o] )
		    - p.y2[4][_o] );

	case 21: 
		return (
		(p.x1[6][_o]  * p.y1[15][_o]) +
		(p.x1[7][_o]  * p.y1[14][_o]) +
		(p.x1[8][_o]  * p.y1[13][_o]) +
		(p.x1[9][_o]  * p.y1[12][_o]) +
		(p.x1[10][_o] * p.y1[11][_o]) +
		(p.x1[11][_o] * p.y1[10][_o]) +
		(p.x1[12][_o] * p.y1[9][_o] ) +
		(p.x1[13][_o] * p.y1[8][_o] ) +
		(p.x1[14][_o] * p.y1[7][_o] ) +
		(p.x1[15][_o] * p.y1[6][_o] )
		    - p.y2[5][_o] );

	case 22: 
		return (
		(p.x1[7][_o]  * p.y1[15][_o]) +
		(p.x1[8][_o]  * p.y1[14][_o]) +
		(p.x1[9][_o]  * p.y1[13][_o]) +
		(p.x1[10][_o] * p.y1[12][_o]) +
		(p.x1[11][_o] * p.y1[11][_o]) +
		(p.x1[12][_o] * p.y1[10][_o]) +
		(p.x1[13][_o] * p.y1[9][_o] ) +
		(p.x1[14][_o] * p.y1[8][_o] ) +
		(p.x1[15][_o] * p.y1[7][_o] )
		    - p.y2[6][_o] );

	case 23: 
		return (
		(p.x1[8][_o]  * p.y1[15][_o]) +
		(p.x1[9][_o]  * p.y1[14][_o]) +
		(p.x1[10][_o] * p.y1[13][_o]) +
		(p.x1[11][_o] * p.y1[12][_o]) +
		(p.x1[12][_o] * p.y1[11][_o]) +
		(p.x1[13][_o] * p.y1[10][_o]) +
		(p.x1[14][_o] * p.y1[9][_o] ) +
		(p.x1[15][_o] * p.y1[8][_o] )
		    - p.y2[7][_o] );

	case 24: 
		return (
		(p.x1[9][_o]  * p.y1[15][_o]) +
		(p.x1[10][_o] * p.y1[14][_o]) +
		(p.x1[11][_o] * p.y1[13][_o]) +
		(p.x1[12][_o] * p.y1[12][_o]) +
		(p.x1[13][_o] * p.y1[11][_o]) +
		(p.x1[14][_o] * p.y1[10][_o]) +
		(p.x1[15][_o] * p.y1[9][_o] )
		    - p.y2[8][_o] );

	case 25: 
		return (
		(p.x1[10][_o] * p.y1[15][_o]) +
		(p.x1[11][_o] * p.y1[14][_o]) +
		(p.x1[12][_o] * p.y1[13][_o]) +
		(p.x1[13][_o] * p.y1[12][_o]) +
		(p.x1[14][_o] * p.y1[11][_o]) +
		(p.x1[15][_o] * p.y1[10][_o])
		    - p.y2[9][_o] );

	case 26: 
		return (
		(p.x1[11][_o] * p.y1[15][_o]) +
		(p.x1[12][_o] * p.y1[14][_o]) +
		(p.x1[13][_o] * p.y1[13][_o]) +
		(p.x1[14][_o] * p.y1[12][_o]) +
		(p.x1[15][_o] * p.y1[11][_o])
		    - p.y2[10][_o]);

	case 27: 
		return (
		(p.x1[12][_o] * p.y1[15][_o]) +
		(p.x1[13][_o] * p.y1[14][_o]) +
		(p.x1[14][_o] * p.y1[13][_o]) +
		(p.x1[15][_o] * p.y1[12][_o])
		    - p.y2[11][_o]);

	case 28: 
		return (
		(p.x1[13][_o] * p.y1[15][_o]) +
		(p.x1[14][_o] * p.y1[14][_o]) +
		(p.x1[15][_o] * p.y1[13][_o])
		    - p.y2[12][_o]);

	case 29: 
		return (
		(p.x1[14][_o] * p.y1[15][_o]) +
		(p.x1[15][_o] * p.y1[14][_o])
		    - p.y2[13][_o]);

	case 30: 
		return (
		(p.x1[15][_o] * p.y1[15][_o])
		    - p.y2[14][_o]);

	case 31: 
		return (
		    - p.y2[15][_o]);
	}
	return fr.zero();
}
