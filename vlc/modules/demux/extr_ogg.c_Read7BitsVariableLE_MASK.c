
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;


 int FUNC_0 (int*) ;

unsigned const char * FUNC_1( unsigned const char *VAR_0,
                                           unsigned const char *VAR_1,
                                           uint64_t *VAR_2 )
{
    int VAR_3 = 0;
    int64_t VAR_4 = 0;
    *VAR_2 = 0;

    while ( VAR_0 < VAR_1 )
    {
        VAR_4 = *VAR_0 & 0x7F;
        *VAR_2 = *VAR_2 | ( VAR_4 << VAR_3 );
        VAR_3 += 7;
        if ( (*VAR_0++ & 0x80) == 0x80 ) break;
    }

    *VAR_2 = FUNC_0( VAR_2 );
    return VAR_0;
}
