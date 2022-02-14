
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 scalar_t__ FUNC_0 (size_t*) ;
 int FUNC_1 (size_t*,size_t const*,size_t) ;
 size_t* FUNC_2 (size_t*,size_t) ;

__attribute__((used)) static inline void FUNC_3( uint8_t **VAR_0, size_t *VAR_1,
                                                     const uint8_t *VAR_2, uint8_t VAR_3 )
{
    uint8_t *VAR_4 = FUNC_2( *VAR_0, *VAR_1 + VAR_3 + 2 );
    if( FUNC_0(VAR_4) )
    {
        *VAR_0 = VAR_4;
        VAR_4[*VAR_1] = 0x09;
        VAR_4[*VAR_1 + 1] = VAR_3;
        FUNC_1( &VAR_4[*VAR_1 + 2], VAR_2, VAR_3 );
        *VAR_1 = *VAR_1 + VAR_3 + 2;
    }
}
