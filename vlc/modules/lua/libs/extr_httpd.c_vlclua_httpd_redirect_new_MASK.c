
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int httpd_redirect_t ;
typedef int httpd_host_t ;


 int * FUNC_0 (int *,char const*,char const*) ;
 char* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int ** FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_1 )
{
    httpd_host_t **VAR_2 = (httpd_host_t **)FUNC_2( VAR_1, 1, "httpd_host" );
    const char *VAR_3 = FUNC_1( VAR_1, 2 );
    const char *VAR_4 = FUNC_1( VAR_1, 3 );
    httpd_redirect_t *VAR_5 = FUNC_0( *VAR_2,
                                                      VAR_3,
                                                      VAR_4 );
    if( !VAR_5 )
        return FUNC_3( VAR_1, "Failed to create HTTPd redirect." );

    httpd_redirect_t **VAR_6 = FUNC_5( VAR_1, sizeof( httpd_redirect_t * ) );
    *VAR_6 = VAR_5;

    if( FUNC_4( VAR_1, "httpd_redirect" ) )
    {
        FUNC_6( VAR_1, VAR_0 );
        FUNC_7( VAR_1, -2, "__gc" );
    }

    FUNC_8( VAR_1, -2 );
    return 1;
}
