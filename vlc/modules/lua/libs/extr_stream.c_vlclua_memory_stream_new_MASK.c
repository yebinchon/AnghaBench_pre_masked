
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int stream_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int *,int ,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_0 )
{
    vlc_object_t * VAR_1 = FUNC_4( VAR_0 );

    char * VAR_2 = FUNC_1( FUNC_0( VAR_0, 1 ) );
    stream_t *VAR_3 = FUNC_3( VAR_1, (uint8_t *)VAR_2, FUNC_2( VAR_2 ), 0 );
    return FUNC_5( VAR_0, VAR_3 );
}
