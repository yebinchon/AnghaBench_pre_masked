
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;
typedef int httpd_host_t ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int ** FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_10( lua_State *VAR_2 )
{
    vlc_object_t *VAR_3 = FUNC_9( VAR_2 );
    httpd_host_t *VAR_4 = FUNC_8( VAR_3 );
    if( !VAR_4 )
        return FUNC_0( VAR_2, "Failed to create HTTP host" );

    httpd_host_t **VAR_5 = FUNC_4( VAR_2, sizeof( httpd_host_t * ) );
    *VAR_5 = VAR_4;

    if( FUNC_1( VAR_2, "httpd_host" ) )
    {
        FUNC_3( VAR_2 );
        FUNC_2( VAR_2, ((void*)0), VAR_1 );
        FUNC_6( VAR_2, -2, "__index" );
        FUNC_5( VAR_2, VAR_0 );
        FUNC_6( VAR_2, -2, "__gc" );
    }

    FUNC_7( VAR_2, -2 );
    return 1;
}
