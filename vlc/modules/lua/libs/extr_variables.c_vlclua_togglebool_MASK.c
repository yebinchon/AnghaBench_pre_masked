
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int ** FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_0 )
{
    vlc_object_t **VAR_1 = FUNC_1( VAR_0, 1, "vlc_object" );
    const char *VAR_2 = FUNC_0( VAR_0, 2 );
    bool VAR_3 = FUNC_3( *VAR_1, VAR_2 );

    FUNC_2( VAR_0, VAR_3 );
    return 1;
}
