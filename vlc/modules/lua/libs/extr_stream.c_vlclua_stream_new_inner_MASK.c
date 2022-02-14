
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int ** FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_2, stream_t *VAR_3 )
{
    if( !VAR_3 )
    {
        FUNC_6( VAR_2 );
        FUNC_5( VAR_2, "Error when opening stream" );
        return 2;
    }

    stream_t **VAR_4 = FUNC_3( VAR_2, sizeof( stream_t * ) );
    *VAR_4 = VAR_3;

    if( FUNC_0( VAR_2, "stream" ) )
    {
        FUNC_2( VAR_2 );
        FUNC_1( VAR_2, ((void*)0), VAR_1 );
        FUNC_7( VAR_2, -2, "__index" );
        FUNC_4( VAR_2, VAR_0 );
        FUNC_7( VAR_2, -2, "__gc" );
    }

    FUNC_8( VAR_2, -2 );
    return 1;
}
