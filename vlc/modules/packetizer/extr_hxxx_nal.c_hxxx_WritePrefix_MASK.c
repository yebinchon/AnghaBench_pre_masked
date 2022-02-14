
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static inline void FUNC_2( uint8_t VAR_0, uint8_t *VAR_1, uint32_t VAR_2 )
{
    if( VAR_0 == 4 )
        FUNC_0( VAR_1, VAR_2 );
    else if( VAR_0 == 2 )
        FUNC_1( VAR_1, VAR_2 );
    else
        *VAR_1 = VAR_2;
}
