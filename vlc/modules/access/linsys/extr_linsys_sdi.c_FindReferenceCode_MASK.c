
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static const uint8_t *FUNC_0( uint8_t VAR_0,
                                         const uint8_t *VAR_1,
                                         const uint8_t *VAR_2 )
{
    while ( VAR_1 <= VAR_2 - 5 )
    {
        if ( VAR_1[0] == 0xff && VAR_1[1] == 0x3 && VAR_1[2] == 0x0
              && VAR_1[3] == 0x0 && VAR_1[4] == VAR_0 )
            return VAR_1;
        VAR_1 += 5;
    }

    return ((void*)0);
}
