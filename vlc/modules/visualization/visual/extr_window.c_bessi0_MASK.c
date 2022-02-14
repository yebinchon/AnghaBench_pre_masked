
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (float) ;
 float FUNC_1 (float) ;
 double FUNC_2 (float) ;

__attribute__((used)) static float FUNC_3( float VAR_0 )
{
    float VAR_1, VAR_2;
    double VAR_3;
    if( ( VAR_1 = FUNC_1( VAR_0 ) ) < 3.75f )
    {
        VAR_3 = VAR_0 / 3.75;
        VAR_3 *= VAR_3;
        VAR_2 = 1.0 + VAR_3 * ( 3.5156229 + VAR_3 * ( 3.0899424 + VAR_3 * ( 1.2067492
                  + VAR_3 * ( 0.2659732 + VAR_3 * ( 0.360768e-1
                  + VAR_3 * 0.45813e-2 ) ) ) ) );
    }
    else
    {
        VAR_3 = 3.75 / VAR_1;
        VAR_2 = ( FUNC_0( VAR_1 ) / FUNC_2( VAR_1 ) ) * ( 0.39894228 + VAR_3 * ( 0.1328592e-1
            + VAR_3 * ( 0.225319e-2 + VAR_3 * ( -0.157565e-2 + VAR_3 * ( 0.916281e-2
            + VAR_3 * ( -0.2057706e-1 + VAR_3 * ( 0.2635537e-1 + VAR_3 * ( -0.1647633e-1
            + VAR_3 * 0.392377e-2 ) ) ) ) ) ) ) );
    }
    return VAR_2;
}
