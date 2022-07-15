#include <math.h>
#include <stdio.h>

void graph(double y, double v, double dt, double m) {
  // double y, v, t, dt, F, m, g = -9.8;
  double F, g = -9.8, t=0;
  // int j, N;

  printf("%f %f %f %f",y,v,dt,m);

  FILE* fileout;
  fileout = fopen("output", "w");

  // printf("\nEnter mass m: ");
  // scanf("%lf", &m);

  // printf("\nEnter starting height y and velocity v: ");
  // scanf("%lf %lf", &y, &v);

  // printf("\nEnter time step dt and number of steps N:    ");
  // scanf("%lf %i", &dt,&N);

  // printf("\nEnter time step dt: ");
  // scanf("%lf", &dt);

  t = 0.;

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
