
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int * FUNC_0 (int ,int const*,int const*) ;

__attribute__((used)) static const uint8_t *FUNC_1( unsigned int *VAR_0, uint8_t VAR_1,
                                      const uint8_t *VAR_2,
                                      const uint8_t *VAR_3 )
{
    const uint8_t *VAR_4 = FUNC_0( VAR_1, VAR_2, VAR_3 );
    if ( VAR_4 == ((void*)0) )
    {
        *VAR_0 += VAR_3 - VAR_2;
        return ((void*)0);
    }
    *VAR_0 += VAR_4 - VAR_2;
    return VAR_4;
}
