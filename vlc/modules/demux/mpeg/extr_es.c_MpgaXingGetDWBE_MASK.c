
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const**,int*,int) ;

__attribute__((used)) static uint32_t FUNC_2( const uint8_t **VAR_0, int *VAR_1, uint32_t VAR_2 )
{
    if( *VAR_1 < 4 )
        return VAR_2;

    uint32_t VAR_3 = FUNC_0( *VAR_0 );

    FUNC_1( VAR_0, VAR_1, 4 );

    return VAR_3;
}
