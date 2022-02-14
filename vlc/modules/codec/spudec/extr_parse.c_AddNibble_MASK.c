
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline unsigned int FUNC_0( unsigned int VAR_0,
                                      const uint8_t *VAR_1, unsigned int *VAR_2 )
{
    if( *VAR_2 & 0x1 )
    {
        return( VAR_0 << 4 | ( VAR_1[(*VAR_2)++ >> 1] & 0xf ) );
    }
    else
    {
        return( VAR_0 << 4 | VAR_1[(*VAR_2)++ >> 1] >> 4 );
    }
}
