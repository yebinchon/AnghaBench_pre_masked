
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int psz_option; int psz_path; int i_port; int psz_host; int psz_password; int psz_username; int psz_protocol; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;

int FUNC_7( lua_State *VAR_0 )
{
    const char *VAR_1 = FUNC_0( VAR_0, 1 );
    vlc_url_t VAR_2;

    FUNC_6( &VAR_2, VAR_1 );

    FUNC_1( VAR_0 );
    FUNC_3( VAR_0, VAR_2.psz_protocol );
    FUNC_4( VAR_0, -2, "protocol" );
    FUNC_3( VAR_0, VAR_2.psz_username );
    FUNC_4( VAR_0, -2, "username" );
    FUNC_3( VAR_0, VAR_2.psz_password );
    FUNC_4( VAR_0, -2, "password" );
    FUNC_3( VAR_0, VAR_2.psz_host );
    FUNC_4( VAR_0, -2, "host" );
    FUNC_2( VAR_0, VAR_2.i_port );
    FUNC_4( VAR_0, -2, "port" );
    FUNC_3( VAR_0, VAR_2.psz_path );
    FUNC_4( VAR_0, -2, "path" );
    FUNC_3( VAR_0, VAR_2.psz_option );
    FUNC_4( VAR_0, -2, "option" );

    FUNC_5( &VAR_2 );

    return 1;
}
