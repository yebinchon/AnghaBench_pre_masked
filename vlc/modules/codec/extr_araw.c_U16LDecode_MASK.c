
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static void FUNC_1( void *VAR_0, const uint8_t *VAR_1, unsigned VAR_2 )
{
    uint16_t *VAR_3 = VAR_0;

    for( size_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
    {
        *(VAR_3++) = FUNC_0( VAR_1 ) - 0x8000;
        VAR_1 += 2;
    }
}
