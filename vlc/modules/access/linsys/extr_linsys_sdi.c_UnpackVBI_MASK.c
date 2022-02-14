
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0( const uint8_t *VAR_4, unsigned int VAR_5,
                       uint8_t *VAR_6 )
{
    const uint8_t *VAR_7 = VAR_4 + VAR_5;

    while ( VAR_4 < VAR_7 )
    {
        *VAR_6++ = (VAR_0 + 2) / 4;
        *VAR_6++ = (VAR_2 + 2) / 4;
        *VAR_6++ = (VAR_1 + 2) / 4;
        *VAR_6++ = (VAR_3 + 2) / 4;
        VAR_4 += 5;
    }
}
