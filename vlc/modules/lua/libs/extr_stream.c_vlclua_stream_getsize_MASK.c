
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int stream_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_0 )
{
    stream_t **VAR_1 = (stream_t **)FUNC_0( VAR_0, 1, "stream" );
    uint64_t VAR_2;
    int VAR_3 = FUNC_3( *VAR_1, &VAR_2 );
    if ( VAR_3 != 0 )
        return FUNC_1( VAR_0, "Failed to get stream size" );
    FUNC_2( VAR_0, VAR_2 );
    return 1;
}
