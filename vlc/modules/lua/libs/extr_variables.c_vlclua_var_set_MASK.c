
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_value_t ;
typedef int vlc_object_t ;
typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int ** FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int *) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_0 )
{
    vlc_value_t VAR_1;
    vlc_object_t **VAR_2 = FUNC_1( VAR_0, 1, "vlc_object" );
    const char *VAR_3 = FUNC_0( VAR_0, 2 );

    int VAR_4 = FUNC_4( *VAR_2, VAR_3 );
    FUNC_6( VAR_0, VAR_4, &VAR_1 );

    int VAR_5 = FUNC_3( *VAR_2, VAR_3, VAR_1 );

    FUNC_2( VAR_0, 3 );
    return FUNC_5( VAR_0, VAR_5 );
}
