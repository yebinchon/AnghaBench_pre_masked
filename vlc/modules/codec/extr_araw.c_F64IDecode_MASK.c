
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (double) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( void *VAR_0, const uint8_t *VAR_1, unsigned VAR_2 )
{
    double *VAR_3 = VAR_0;

    for( size_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
    {
        union { double d; uint64_t u; } VAR_5;




        VAR_5.u = FUNC_0( VAR_1 );

        if( FUNC_3(!FUNC_2( VAR_5.d )) )
            VAR_5.d = 0.;
        *(VAR_3++) = VAR_5.d;
        VAR_1 += 8;
    }
}
