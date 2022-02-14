
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;
typedef int lua_State ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_0 )
{
    stream_t **VAR_1 = (stream_t **)FUNC_1( VAR_0, 1, "stream" );
    char *VAR_2 = FUNC_4( *VAR_1 );
    if( VAR_2 )
    {
        FUNC_3( VAR_0, VAR_2 );
        FUNC_0( VAR_2 );
    }
    else
        FUNC_2( VAR_0 );
    return 1;
}
