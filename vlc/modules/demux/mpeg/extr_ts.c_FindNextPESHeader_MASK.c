
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;



__attribute__((used)) static uint8_t *FUNC_0( uint8_t *VAR_0, size_t VAR_1 )
{
    const uint8_t *VAR_2 = &VAR_0[VAR_1];
    unsigned VAR_3 = 0;
    for( ; VAR_0 != VAR_2; VAR_0++ )
    {
        VAR_3 <<= 1;
        if( !*VAR_0 )
        {
            VAR_3 |= 1;
        }
        else if( *VAR_0 == 0x01 && (VAR_3 & 0x06) == 0x06 )
        {
            return VAR_0 - 2;
        }
    }
    return ((void*)0);
}
