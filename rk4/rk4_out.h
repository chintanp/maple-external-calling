double rk4 ( double t0, double u0, double dt, double f ( double t, double u ) );
void *rk4vec ( double t0, int n, double u0[], double dt, 
  void *f ( double t, int n, double u[], double uout[] ), double out[] );
void timestamp ( void );