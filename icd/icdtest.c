#include <stdio.h>

#include "Icd.h"


int main(void)
{

  icd x("1.000000000");
  icd y("7.000000000");
  icd one("100.0");
  icd log;
  icd pi("PI");
  
  icd z=one.Sine();
  z= x / y;
  
  z.dump();
  pi.dump();
  
  printf("\nPi = %s", pi.AsDisplayString().c_str());
  printf("\n%s+%s = %s", x.AsDisplayString().c_str(), y.AsString().c_str(), z.AsString().c_str());

  exit(0);

  for(int i=0; i<1000; i++)
    {
      x+=one;
      log = x.Log10();
      
      printf("\n%d, %s %s", i, x.AsDisplayString().c_str(), log.AsDisplayString().c_str());
    }
}
