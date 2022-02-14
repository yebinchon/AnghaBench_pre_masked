
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* FUNC_0 (int const*,int,int) ;

__attribute__((used)) static inline const uint8_t * FUNC_1( const uint8_t *VAR_0, const uint8_t *VAR_1 )
{
    while( VAR_0 + 3 < VAR_1 )
    {
        VAR_0 = FUNC_0( VAR_0, 0xFF, VAR_1 - VAR_0 );
        if( !VAR_0 || VAR_1 - VAR_0 < 4 )
            break;
        if( VAR_0[1] == 0xD8 && VAR_0[2] == 0xFF && (VAR_0[3] & 0xE0) == 0xE0 )
            return VAR_0;
        VAR_0++;
    }
    return ((void*)0);
}
