
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2( const uint8_t *VAR_0, int VAR_1 )
{
    FUNC_1( VAR_1 == 1 || VAR_1 == 2 || VAR_1 == 4 );

    if( VAR_1 == 1 )
        return( VAR_0[0] );
    else if( VAR_1 == 2 )
        return( (VAR_0[0] << 8) + VAR_0[1] );
    else if( VAR_1 == 4 )
        return( (VAR_0[0] << 24) + (VAR_0[1] << 16) + (VAR_0[2] << 8) + VAR_0[3] );
    else
        FUNC_0();
}
