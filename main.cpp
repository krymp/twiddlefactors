#include <cmath>		/* pow() */
#include <cstdint>		/* uint64_t */
#include <ctime>		/* time() */
#include <set>
#include <algorithm>

#include <unistd.h>
#include <iostream>

#include "utils.h"	/* printVec() */

using namespace std;


set <uint64_t > omegas;

int main(int argc, char *argv[]){
  uint64_t n = 4096;
  uint64_t p = 68719403009;
  uint64_t r = 36048964756;



  int power =1; 
  uint64_t candidate = 1;
  uint64_t last = 1;

  do {
	  omegas.insert(candidate);
	  
	  candidate = modExp( r, power, p);
	  //candidate = modulo (last * r, p);
	  //last = candidate;

          std::cout <<" candidate: " << candidate << std::endl;
	  power++;

  }
  while ( find(omegas.begin(), omegas.end(), candidate) == omegas.end()); 


  for( auto i : omegas) {
	  std::cout << i << std::endl;
  }
return 0;

}
