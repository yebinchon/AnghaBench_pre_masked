
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 char FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (int) ;

char* FUNC_4( const char *VAR_0 )
{
    int VAR_1 = FUNC_1( VAR_0 ) + 1;
    char *VAR_2 = FUNC_0( VAR_1 );
    if( FUNC_3( !VAR_2 ) )
        return ((void*)0);

    for( int VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3 )
        VAR_2[ VAR_3 ] = FUNC_2( VAR_0[ VAR_3 ] );

    return VAR_2;
}
