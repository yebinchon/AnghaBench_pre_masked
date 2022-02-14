
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int stream_t ;
typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_0 )
{
    stream_t **VAR_1 = (stream_t **)FUNC_1( VAR_0, 1, "stream" );
    lua_Integer VAR_2 = FUNC_0( VAR_0, 2 );
    if ( VAR_2 < 0 )
        return FUNC_2( VAR_0, "Invalid negative seek offset" );
    int VAR_3 = FUNC_4( *VAR_1, (uint64_t)VAR_2 );
    FUNC_3( VAR_0, VAR_3 == 0 );
    return 1;
}
