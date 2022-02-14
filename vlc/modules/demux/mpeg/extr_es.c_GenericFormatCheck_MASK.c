
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2( int VAR_3, const uint8_t *VAR_4 )
{
    if ( VAR_3 == VAR_2 )
    {
        if( FUNC_1( VAR_4 ) != 2 )
            return VAR_0;
        if( FUNC_0( VAR_4 + 2 ) != 44100 )
            return VAR_0;
    }
    return VAR_1;
}
