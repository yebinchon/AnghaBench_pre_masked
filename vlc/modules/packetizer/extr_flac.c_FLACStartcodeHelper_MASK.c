
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* FUNC_0 (int const*,int,int) ;

__attribute__((used)) static const uint8_t * FUNC_1(const uint8_t *VAR_0, const uint8_t *VAR_1)
{
    while( VAR_0 && VAR_0 < VAR_1 )
    {
        if( (VAR_0 = FUNC_0(VAR_0, 0xFF, VAR_1 - VAR_0)) )
        {
            if( VAR_1 - VAR_0 > 1 && (VAR_0[1] & 0xFE) == 0xF8 )
                return VAR_0;
            else
                VAR_0++;
        }
    }
    return ((void*)0);
}
