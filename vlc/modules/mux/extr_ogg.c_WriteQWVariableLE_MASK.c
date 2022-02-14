
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static int FUNC_0( uint64_t VAR_0, uint64_t VAR_1,
                              uint8_t *VAR_2, int VAR_3 )
{
    uint8_t *VAR_4 = VAR_2 + VAR_1;
    int VAR_5 = 0;

    for(;;)
    {
        if ( VAR_4 - VAR_2 >= VAR_3 ) return -1;

        *VAR_4 = (uint8_t) ( VAR_0 & 0x7F );
        VAR_0 >>= 7;
        VAR_5++;

        if ( VAR_0 == 0 )
        {
            *VAR_4 |= 0x80;
            return VAR_5;
        }

        VAR_4++;
    }
}
