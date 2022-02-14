
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline uint8_t *FUNC_0( uint8_t *VAR_0, uint8_t *VAR_1, unsigned *VAR_2, size_t VAR_3 )
{
    for( size_t VAR_4=0; VAR_4<VAR_3; VAR_4++ )
    {
        if( ++VAR_0 >= VAR_1 )
            return VAR_0;

        *VAR_2 = (*VAR_2 << 1) | (!*VAR_0);

        if( *VAR_0 == 0x03 &&
           ( VAR_0 + 1 ) != VAR_1 )
        {
            if( (*VAR_2 & 0x06) == 0x06 )
            {
                ++VAR_0;
                *VAR_2 = ((*VAR_2 >> 1) << 1) | (!*VAR_0);
            }
        }
    }
    return VAR_0;
}
