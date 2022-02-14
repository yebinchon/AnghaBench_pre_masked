
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;


struct TYPE_22__ {int psz_host; } ;
typedef TYPE_2__ vlc_url_t ;
typedef int vlc_object_t ;
struct TYPE_23__ {char* psz_username; int psz_password; } ;
typedef TYPE_3__ vlc_credential ;
struct TYPE_20__ {int b_authtls; } ;
struct TYPE_21__ {int i_port; int psz_host; } ;
struct TYPE_24__ {scalar_t__ tlsmode; TYPE_15__ features; int * cmd; TYPE_1__ url; } ;
typedef TYPE_4__ access_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*,char const*,int ,int*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*,char*) ;
 scalar_t__ FUNC_4 (int *,TYPE_4__*,int *,int *,int ,TYPE_15__*) ;
 int FUNC_5 (int *,TYPE_4__*,int*,int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_4__*,char*) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,char const*) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int *,char*,char*,int ,int ,...) ;
 int FUNC_13 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 (int *,int ,char*,int ) ;
 int * FUNC_16 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_17( vlc_object_t *VAR_6, access_sys_t *VAR_7, const char *VAR_8 )
{
    int VAR_9;


    VAR_7->cmd = FUNC_16( VAR_6, VAR_7->url.psz_host,
                                        VAR_7->url.i_port );
    if( VAR_7->cmd == ((void*)0) )
    {
        FUNC_8( VAR_6, "connection failed" );
        FUNC_15( VAR_6, FUNC_1("Network interaction failed"), "%s",
            FUNC_1("VLC could not connect with the given server.") );
        goto error;
    }

    if ( VAR_7->tlsmode == VAR_2 )
    {
        if ( FUNC_3( VAR_6, VAR_7, "ftps") < 0 )
            goto error;
    }

    while( FUNC_5( VAR_6, VAR_7, &VAR_9, ((void*)0) ) == 1 );

    if( VAR_9 / 100 != 2 )
    {
        FUNC_8( VAR_6, "connection rejected" );
        FUNC_15( VAR_6, FUNC_1("Network interaction failed"), "%s",
            FUNC_1("VLC's connection to the given server was rejected.") );
        goto error;
    }

    FUNC_7( VAR_6, "connection accepted (%d)", VAR_9 );


    if( FUNC_6( VAR_6, VAR_7, "FEAT" ) < 0
     || FUNC_4( VAR_6, VAR_7, ((void*)0), ((void*)0),
                        VAR_1, &VAR_7->features ) < 0 )
    {
         FUNC_8( VAR_6, "cannot get server features" );
         goto error;
    }


    if( VAR_7->tlsmode == VAR_0 )
    {
        if ( ! VAR_7->features.b_authtls )
        {
            FUNC_8( VAR_6, "Server does not support TLS" );
            goto error;
        }

        if( FUNC_6( VAR_6, VAR_7, "AUTH TLS" ) < 0
         || FUNC_5( VAR_6, VAR_7, &VAR_9, ((void*)0) ) < 0
         || VAR_9 != 234 )
        {
             FUNC_8( VAR_6, "cannot switch to TLS: server replied with code %d",
                      VAR_9 );
             goto error;
        }

        if( FUNC_3( VAR_6, VAR_7, "ftpes") < 0 )
        {
            goto error;
        }
    }

    if( VAR_7->tlsmode != VAR_5 )
    {
        if( FUNC_6( VAR_6, VAR_7, "PBSZ 0" ) < 0 ||
            FUNC_5( VAR_6, VAR_7, &VAR_9, ((void*)0) ) < 0 ||
            VAR_9 != 200 )
        {
            FUNC_8( VAR_6, "Can't truncate Protection buffer size for TLS" );
            goto error;
        }

        if( FUNC_6( VAR_6, VAR_7, "PROT P" ) < 0 ||
            FUNC_5( VAR_6, VAR_7, &VAR_9, ((void*)0) ) < 0 ||
            VAR_9 != 200 )
        {
            FUNC_8( VAR_6, "Can't set Data channel protection" );
            goto error;
        }
    }

    vlc_url_t VAR_10;
    vlc_credential VAR_11;
    if( FUNC_10( &VAR_10, VAR_8 ) != 0 )
    {
        FUNC_9( &VAR_10 );
        goto error;
    }
    FUNC_13( &VAR_11, &VAR_10 );
    bool VAR_12 = 0;


    FUNC_12( &VAR_11, VAR_6, "ftp-user", "ftp-pwd",
                        ((void*)0), ((void*)0) );
    do
    {
        const char *VAR_13 = VAR_11.psz_username;

        if( VAR_13 == ((void*)0) )
            VAR_13 = "anonymous";

        if( FUNC_0( VAR_6, VAR_7, VAR_13,
                          VAR_11.psz_password, &VAR_12 ) != 0
         || VAR_12 )
            break;
    }
    while( FUNC_12( &VAR_11, VAR_6, "ftp-user", "ftp-pwd",
                               VAR_4, VAR_3,
                               VAR_10.psz_host ) );

    if( VAR_12 )
    {
        FUNC_14( &VAR_11, VAR_6 );
        FUNC_11( &VAR_11 );
        FUNC_9( &VAR_10 );
        return 0;
    }
    FUNC_11( &VAR_11 );
    FUNC_9( &VAR_10 );
error:
    FUNC_2( VAR_7 );
    return -1;
}
