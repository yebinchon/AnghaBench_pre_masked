
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int stream_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int **,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_1 )
{
    vlc_object_t * VAR_2 = FUNC_5( VAR_1 );
    const char * VAR_3 = FUNC_0( VAR_1, 1 );
    stream_t *VAR_4 = FUNC_2( VAR_2, VAR_3 );
    if( !VAR_4 )
        return FUNC_4( VAR_1 );
    if( FUNC_3( &VAR_4, ((void*)0) ) != VAR_0 )
    {
        FUNC_1( VAR_4 );
        return FUNC_4( VAR_1 );
    }
    return FUNC_6( VAR_1, VAR_4 );
}
