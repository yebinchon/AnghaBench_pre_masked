
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0( void *VAR_0, const uint8_t *VAR_1, unsigned VAR_2 )
{
    uint8_t *VAR_3 = VAR_0;

    for( size_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
        VAR_3[VAR_4] = VAR_1[VAR_4] ^ 0x80;
}
