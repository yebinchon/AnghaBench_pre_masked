
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int const*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( void *VAR_0, const uint8_t *VAR_1, unsigned VAR_2 )
{
    int16_t *VAR_3 = VAR_0;

    while( VAR_2 >= 2 )
    {
        *(VAR_3++) = FUNC_1(FUNC_0(VAR_1) >> 4);
        *(VAR_3++) = FUNC_1(FUNC_0(VAR_1 + 1) & ~0xF000);
        VAR_1 += 3;
        VAR_2 -= 2;
    }

    if( VAR_2 )
        *(VAR_3++) = FUNC_1(FUNC_0(VAR_1) >> 4);
}
