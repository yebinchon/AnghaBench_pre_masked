
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;


 int const* FUNC_0 (int const*,int const*,unsigned int*,int) ;

__attribute__((used)) static size_t FUNC_1( const uint8_t *VAR_0, const uint8_t *VAR_1 )
{

    unsigned VAR_2 = 0;
    size_t VAR_3 = 0;
    while( VAR_0 < VAR_1 )
    {
        uint8_t *VAR_4 = FUNC_0( (uint8_t *)VAR_0, (uint8_t *)VAR_1, &VAR_2, 1 );
        if( VAR_4 > VAR_0 )
            ++VAR_3;
        VAR_0 = VAR_4;
    }
    return VAR_3;
}
