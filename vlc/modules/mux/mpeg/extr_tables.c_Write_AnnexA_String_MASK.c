
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (int*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static inline size_t FUNC_3( uint8_t *VAR_1, const char *VAR_2 )
{
    size_t VAR_3;
    if( VAR_2 == ((void*)0) || !(VAR_3 = FUNC_2( VAR_2 )) )
    {
        VAR_1[0] = 0;
        return 1;
    }

    bool VAR_4 = (VAR_2[0] > 0x20);
    for ( size_t VAR_5=0; VAR_5< VAR_3 && VAR_4; VAR_5++ )
        VAR_4 &= !( VAR_2[VAR_5] & 0x80 );

    if( VAR_4 )
    {
        VAR_3 = FUNC_0( VAR_3, VAR_0 );
        VAR_1[0] = VAR_3;
        FUNC_1( &VAR_1[1], VAR_2, VAR_3 );
        return 1 + VAR_3;
    }
    else
    {
        VAR_3 = FUNC_0( VAR_3, VAR_0 - 1 );
        VAR_1[0] = 1 + VAR_3;
        VAR_1[1] = 0x15;
        FUNC_1( &VAR_1[2], VAR_2, VAR_3 );
        return 2 + VAR_3;
    }
}
