
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stream_t ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_0 )
{
    int VAR_1;
    stream_t **VAR_2 = (stream_t **)FUNC_2( VAR_0, 1, "stream" );
    int VAR_3 = FUNC_1( VAR_0, 2 );
    uint8_t *VAR_4 = FUNC_5( VAR_3 );
    if( !VAR_4 ) return FUNC_7( VAR_0 );

    VAR_1 = FUNC_6( *VAR_2, VAR_4, VAR_3 );
    if( VAR_1 > 0 )
        FUNC_3( VAR_0, (const char *)VAR_4, VAR_1 );
    else
        FUNC_4( VAR_0 );
    FUNC_0( VAR_4 );
    return 1;
}
