#include <stdio.h>

// a main() isn't needed because this program is now a library.

void graph(double y, double v, double dt, double m) {
  double F, g = -9.8, t=0;

  printf("%f %f %f %f",y,v,dt,m); //can't figure out how to make lldb work with libraries.

  FILE* fileout; 
  fileout = fopen("output", "w"); //output to a file called "output"

  fprintf(fileout, "\n    %12.6lf %12.6lf", t, y);

  do {
    t = t + dt;
    y = y + v * dt;
    F = m * g;
    v = v + (F / m) * dt;
    fprintf(fileout, "\n    %12.6lf %12.6lf", t, y);
  } while (y > 0);

  fclose(fileout);

  // return 0;
}
