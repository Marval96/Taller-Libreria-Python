#include  <stdio.h>

void sort(int *serie, int size, int *output) {

  for (int ii = 0; ii < size; ++ii) {
      output[ii] = serie[ii];
  }

  int done = 0;
    
  while (done==0) {
  
    done = 1;
      
    for (int ii = 0; ii < size - 1; ++ii) {
      if (output[ii] > output[ii + 1]) {
        int temp = output[ii];
        output[ii] = output[ii + 1];
        output[ii + 1] = temp;
        
        done = 0;
      }
    }
    
  }

}
