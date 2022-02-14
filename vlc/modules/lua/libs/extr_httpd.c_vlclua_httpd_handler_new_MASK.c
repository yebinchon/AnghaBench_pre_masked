
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int httpd_host_t ;
typedef int httpd_handler_t ;
struct TYPE_5__ {int L; int password; int ref; } ;
typedef TYPE_1__ httpd_handler_lua_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,char const*,char const*,char const*,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int ,int,char*) ;
 char* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int ** FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int,char*) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int ,int) ;
 TYPE_1__* FUNC_17 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_18( lua_State * VAR_3 )
{
    httpd_host_t **VAR_4 = (httpd_host_t **)FUNC_4( VAR_3, 1, "httpd_host" );
    const char *VAR_5 = FUNC_3( VAR_3, 2 );
    const char *VAR_6 = FUNC_7( VAR_3, 3 );
    const char *VAR_7 = FUNC_7( VAR_3, 4 );

    FUNC_2( VAR_3, FUNC_9( VAR_3, 5 ), 5, "Should be a function" );

    FUNC_15( VAR_3, 6 );
    httpd_handler_lua_t *VAR_8 = FUNC_17( sizeof( *VAR_8 ) );
    if( !VAR_8 )
        return FUNC_5( VAR_3, "Failed to allocate private buffer." );
    VAR_8->L = FUNC_10( VAR_3 );
    VAR_8->ref = FUNC_8( VAR_3, VAR_0 );
    VAR_8->password = VAR_7 && *VAR_7;


    FUNC_16( VAR_3, VAR_8->L, 2 );
    httpd_handler_t *VAR_9 = FUNC_1(
                            *VAR_4, VAR_5, VAR_6, VAR_7,
                            VAR_1, VAR_8 );
    if( !VAR_9 )
    {
        FUNC_0( VAR_8 );
        return FUNC_5( VAR_3, "Failed to create HTTPd handler." );
    }

    httpd_handler_t **VAR_10 = FUNC_11( VAR_3, sizeof( httpd_handler_t * ) );
    *VAR_10 = VAR_9;

    if( FUNC_6( VAR_3, "httpd_handler" ) )
    {
        FUNC_12( VAR_3, VAR_2 );
        FUNC_13( VAR_3, -2, "__gc" );
    }

    FUNC_14( VAR_3, -2 );
    return 1;
}
