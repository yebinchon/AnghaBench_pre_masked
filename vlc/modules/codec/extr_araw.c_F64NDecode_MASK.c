
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (double) ;
 int FUNC_1 (double*,int const*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( void *VAR_0, const uint8_t *VAR_1, unsigned VAR_2 )
{
    double *VAR_3 = VAR_0;

    for( size_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
    {
        FUNC_1( VAR_3, VAR_1, sizeof(double) );
        if( FUNC_2(!FUNC_0( *VAR_3 )) )
            *VAR_3 = 0.;
        VAR_3++;
        VAR_1 += sizeof(double);
    }
}
