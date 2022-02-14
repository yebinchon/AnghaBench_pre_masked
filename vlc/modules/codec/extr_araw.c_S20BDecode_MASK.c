
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2( void *VAR_0, const uint8_t *VAR_1, unsigned VAR_2 )
{
    int32_t *VAR_3 = VAR_0;

    while( VAR_2 >= 2 )
    {
        uint32_t VAR_4 = FUNC_1(VAR_1);
        VAR_1 += 4;
        *(VAR_3++) = VAR_4 & ~0xFFF;
        *(VAR_3++) = (VAR_4 << 20) | (*VAR_1 << 12);
        VAR_1++;
        VAR_2 -= 2;
    }


    if( VAR_2 )
        *(VAR_3++) = (FUNC_0(VAR_1) << 16) | ((VAR_1[2] & 0xF0) << 8);
}
