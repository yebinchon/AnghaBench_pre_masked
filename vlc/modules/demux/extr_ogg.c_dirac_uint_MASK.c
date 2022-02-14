
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bs_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static uint32_t FUNC_2( bs_t *VAR_0 )
{
    uint32_t VAR_1 = 0, VAR_2 = 0;

    while( !FUNC_0( VAR_0 ) && !FUNC_1( VAR_0, 1 ) )
    {
        VAR_1++;
        VAR_2 <<= 1;
        VAR_2 |= FUNC_1( VAR_0, 1 );
    }

    return (1<<VAR_1) - 1 + VAR_2;
}
