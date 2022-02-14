
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void FUNC_0( void *VAR_0, const uint8_t *VAR_1, unsigned VAR_2 )
{
    uint32_t *VAR_3 = VAR_0;

    for( size_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
    {
        uint32_t VAR_5 = ((VAR_1[0] << 24) | (VAR_1[1] << 16) | (VAR_1[2] << 8)) - 0x80000000;
        *(VAR_3++) = VAR_5;
        VAR_1 += 3;
    }
}
