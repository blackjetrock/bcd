#include <stdio.h>

#include "Icd.h"


int main(void)
{
  int marker1 = 123456;
  
  icd x("2.000000000");
  int marker2 = 123456;
  icd y("5.000000000");
  icd one("100.0");
  icd log;
  icd pi("PI");

  icd a("45");
  icd b("180");
  icd z;
  int marker3 = 123456;

  y = x.Power(y);

  printf("\nX=%s", x.AsString().c_str());
  printf("\nY=%s", y.AsString().c_str());
    
  icd k=pi.Sine();

  icd n = a / b * pi;
  
  printf("\nMarker1 = %d", marker1);
  printf("\nMarker2 = %d", marker2);
  printf("\nMarker3 = %d", marker3);
  printf("\n");


  printf("\nn = %s", n.AsDisplayString().c_str());

  n = n.Sine();
  printf("\nsin(n) = %s", n.AsDisplayString().c_str());

  n = n*n;
  printf("\nn*n = %s", n.AsDisplayString().c_str());
  
  z= x / y;

  x.dump();
  y.dump();
  z.dump();
  pi.dump();
  
  printf("\nPi      = %s", pi.AsDisplayString().c_str());
  printf("\nsin(Pi) = %s", k.AsDisplayString().c_str());
  
  printf("\n%s+%s = %s", x.AsDisplayString().c_str(), y.AsString().c_str(), z.AsString().c_str());

#if 0
  for(int i=0; i<1000; i++)
    {
      x+=one;
      log = x.Log10();
      
      printf("\n%d, %s %s", i, x.AsDisplayString().c_str(), log.AsDisplayString().c_str());
    }
#endif

#if 1
  int i;
  
  x = 2.0;
  for(i=0; i<1000; i++)
    {
      x = x.SquareRoot();
      
      //      printf("\n%d, %s", i, x.AsDisplayString().c_str());
    }
  
  printf("\n%d, %s", i, x.AsDisplayString().c_str());
  
#endif
  
  printf("\nMarker1 = %d", marker1);
  printf("\nMarker2 = %d", marker2);
  printf("\nMarker3 = %d", marker3);
  printf("\n");
}
