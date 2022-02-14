
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;

__attribute__((used)) static uint8_t *FUNC_0( uint8_t *VAR_1, int *VAR_2 )
{
    *VAR_2 = *VAR_1++;

    if ( (*VAR_2 & VAR_0) != 0 )
    {
        int VAR_3 = *VAR_2 & ~VAR_0;

        *VAR_2 = 0;
        for ( int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ )
            *VAR_2 = (*VAR_2 << 8) | *VAR_1++;
    }

    return VAR_1;
}
