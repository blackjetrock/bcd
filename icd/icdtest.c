#include <stdio.h>

#include "Icd.h"


int main(void)
{

  icd x("1.000000000");
  icd y("7.000000000");
  icd two("2.0");
  
  icd one("100.0");
  icd minus_one("-1.0");
  
  icd log;
  icd pi("PI");
  icd one_e_10("1e10");

  icd a("45");
  icd b("180");
  icd z;
  
  icd k=pi.Sine();

  icd n = a / b * pi;

  printf("\ntwo = %s", two.AsDisplayString().c_str());

  x = two.Power(minus_one);
  
  printf("\nx = %s", x.AsDisplayString().c_str());

  y = x.Power(minus_one);
  
  printf("\ny = %s", y.AsDisplayString().c_str());
    
  n = n.Sine();
  printf("\nsin(n) = %s", n.AsDisplayString().c_str());

  n = 1.0;
  printf("\nn = %s", n.AsDisplayString().c_str());
    
  n = n*n;
  
  printf("\nn*n = %s", n.AsDisplayString().c_str());
  
  z= x * one_e_10 * one_e_10;
  z = z * z;
  z = z * z;
  z = z * one_e_10;
  z = z * one_e_10;
  
  printf("\nz=");
  printf("\nz = %s", z.AsDisplayString().c_str());

  icd log_z;
  
  for(int i = 0; i<100; i++)
    {
      log_z = z.Log10();
    }
  
  printf("\nlog z = %s", log_z.AsDisplayString().c_str());
    
  printf("\n\n");
  //z.dump();
  //  pi.dump();
  
  printf("\nPi      = %s", pi.AsDisplayString().c_str());
  printf("\nsin(Pi) = %s", k.AsDisplayString().c_str());
  
  printf("\n%s+%s = %s", x.AsDisplayString().c_str(), y.AsString().c_str(), z.AsString().c_str());

  printf("\n");
  
  for(int i=0; i<1000; i++)
    {
      x+=one;
      log = x.Log10();
      
      printf("\n%d, %s %s", i, x.AsDisplayString().c_str(), log.AsDisplayString().c_str());
    }

  printf("\nPowers of 2\n");
  
  for(int i=0; i<300; i++)
    {
      x = (long) i;
      y = 2.0;
      
      log = y.Power(x);
      
      printf("\n%d, %s %s", i, x.AsDisplayString().c_str(), log.AsDisplayString().c_str());
    }

  
  
}
