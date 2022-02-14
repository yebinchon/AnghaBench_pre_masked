
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline bool FUNC_0( const uint8_t **VAR_0, size_t *VAR_1 )
{
    unsigned VAR_2 = 0;
    const uint8_t *VAR_3 = *VAR_0;
    size_t VAR_4 = *VAR_1;

    while( VAR_4 && VAR_3[0] <= 1 )
    {
        VAR_2 = (VAR_2 << 1) | (!VAR_3[0]);
        VAR_3++;
        VAR_4--;
        if( !(VAR_2 & 0x01) )
        {
            if( (VAR_2 & 0x06) == 0x06 )
            {
                *VAR_1 = VAR_4;
                *VAR_0 = VAR_3;
                return 1;
            }
            return 0;
        }
    }
    return 0;
}
