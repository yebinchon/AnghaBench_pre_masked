
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int i_port; char* psz_host; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int intf_thread_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (char**,char*,char*,...) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,char*) ;
 unsigned int FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*) ;

__attribute__((used)) static char *FUNC_10( intf_thread_t *VAR_1, const char *VAR_2 )
{
    char *VAR_3 = ((void*)0);

    if( !FUNC_4( VAR_2, "http" ) )
    {
        char *VAR_4 = FUNC_7( VAR_1, "http-src" );
        bool VAR_5 = FUNC_5( VAR_1, "http-index" );
        if( VAR_4 )
        {
            char *VAR_6 = FUNC_1( VAR_4 );

            if( FUNC_0( &VAR_3, "http={dir='%s',no_index=%s}", VAR_6,
                          VAR_5 ? "true" : "false" ) == -1 )
                VAR_3 = ((void*)0);
            FUNC_2( VAR_6 );
            FUNC_2( VAR_4 );
        }
        else
        {
            if( FUNC_0( &VAR_3, "http={no_index=%s}",
                          VAR_5 ? "true" : "false" ) == -1 )
                VAR_3 = ((void*)0);
        }
    }
    else if( !FUNC_4( VAR_2, "telnet" ) )
    {
        char *VAR_7 = FUNC_7( VAR_1, "telnet-host" );
        if( !FUNC_4( VAR_7, "*console" ) )
            ;
        else
        {
            vlc_url_t VAR_8;
            FUNC_9( &VAR_8, VAR_7 );
            unsigned VAR_9 = FUNC_6( VAR_1, "telnet-port" );
            if ( VAR_8.i_port != 0 )
            {
                if ( VAR_9 == VAR_0 )
                    VAR_9 = VAR_8.i_port;
                else if ( VAR_8.i_port != VAR_9 )
                    FUNC_3( VAR_1, "ignoring port %d (using %d)",
                              VAR_8.i_port, VAR_9 );
            }

            char *VAR_10 = FUNC_1( VAR_8.psz_host );
            FUNC_2( VAR_7 );
            FUNC_8( &VAR_8 );

            if( FUNC_0( &VAR_7, "telnet://%s:%d",
                          VAR_10 ? VAR_10 : "", VAR_9 ) == -1 )
                VAR_7 = ((void*)0);
            FUNC_2( VAR_10 );
        }

        char *VAR_11 = FUNC_7( VAR_1, "telnet-password" );

        char *VAR_12 = FUNC_1( VAR_11 );

        if( FUNC_0( &VAR_3, "telnet={host='%s',password='%s'}",
                      VAR_7, VAR_12 ) == -1 )
            VAR_3 = ((void*)0);

        FUNC_2( VAR_12 );
        FUNC_2( VAR_11 );
        FUNC_2( VAR_7 );
    }

    return VAR_3;
}
