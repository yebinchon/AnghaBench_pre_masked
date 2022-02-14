
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;

__attribute__((used)) static uint8_t *FUNC_0( uint8_t *VAR_1, int VAR_2 )
{
    uint8_t *VAR_3 = VAR_1;

    if ( VAR_2 < 128 )
    {
        *VAR_3++ = VAR_2;
    }
    else if ( VAR_2 < 256 )
    {
        *VAR_3++ = VAR_0 | 0x1;
        *VAR_3++ = VAR_2;
    }
    else if ( VAR_2 < 65536 )
    {
        *VAR_3++ = VAR_0 | 0x2;
        *VAR_3++ = VAR_2 >> 8;
        *VAR_3++ = VAR_2 & 0xff;
    }
    else if ( VAR_2 < 16777216 )
    {
        *VAR_3++ = VAR_0 | 0x3;
        *VAR_3++ = VAR_2 >> 16;
        *VAR_3++ = (VAR_2 >> 8) & 0xff;
        *VAR_3++ = VAR_2 & 0xff;
    }
    else
    {
        *VAR_3++ = VAR_0 | 0x4;
        *VAR_3++ = VAR_2 >> 24;
        *VAR_3++ = (VAR_2 >> 16) & 0xff;
        *VAR_3++ = (VAR_2 >> 8) & 0xff;
        *VAR_3++ = VAR_2 & 0xff;
    }

    return VAR_3;
}
