#include "wl.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){

  int dx, dy;

  CharImage Input("KU.raw", 720, 560); 
  
  for(dx=10; dx<100; dx++) for(dy=80; dy<200; dy++)
	  Input.pixel(dx, dy) = 0;

  Input.Save("Out1.raw");

  for(dx=400; dx<500; dx++) for(dy=400; dy<500; dy++)
	  Input.pixel(dx, dy) = 255 - Input.pixel(dx,dy);

  Input.Save("Out2.raw");

}