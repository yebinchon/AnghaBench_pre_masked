
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_23__ {char* psz_authtype; scalar_t__ psz_password; scalar_t__ psz_username; int * psz_realm; } ;
typedef TYPE_2__ vlc_credential ;
typedef int uint8_t ;
struct TYPE_24__ {char* psz_url; int pf_seek; int pf_control; int pf_read; TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_26__ {char* psz_host; int i_port; char* psz_password; char* psz_path; char* psz_username; } ;
struct TYPE_22__ {scalar_t__ i_nonce; int * psz_realm; scalar_t__ psz_nonce; } ;
struct TYPE_25__ {int b_proxy; char* psz_proxy_passbuf; char* psz_mime; int b_icecast; char* psz_location; char* psz_user_agent; char* psz_referrer; char* psz_username; char* psz_password; int b_has_size; int i_code; TYPE_9__ proxy; TYPE_9__ url; scalar_t__ b_reconnect; TYPE_1__ auth; scalar_t__ size; scalar_t__ offset; int * psz_icy_title; int * psz_icy_genre; int * psz_icy_name; scalar_t__ i_icy_offset; scalar_t__ i_icy_meta; int * stream; } ;
typedef TYPE_4__ access_sys_t ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 int FUNC_5 (TYPE_3__*,char*,...) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 char* FUNC_7 (char*,char) ;
 void* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*,char*) ;
 void* FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (TYPE_9__*) ;
 scalar_t__ FUNC_13 (TYPE_9__*,char const*) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*,TYPE_3__*,int *,int *,int ,int ,...) ;
 int FUNC_16 (TYPE_2__*,TYPE_9__*) ;
 int FUNC_17 (TYPE_2__*,TYPE_3__*) ;
 char* FUNC_18 (char const*) ;
 TYPE_4__* FUNC_19 (int *,int) ;

__attribute__((used)) static int FUNC_20( vlc_object_t *VAR_8 )
{
    stream_t *VAR_9 = (stream_t*)VAR_8;
    const char *VAR_10 = VAR_9->psz_url;
    char *VAR_11;
    int VAR_12 = VAR_5;
    vlc_credential VAR_13;

    access_sys_t *VAR_14 = FUNC_19( VAR_8, sizeof(*VAR_14) );
    if( FUNC_9(VAR_14 == ((void*)0)) )
        return VAR_6;

    VAR_14->stream = ((void*)0);
    VAR_14->b_proxy = 0;
    VAR_14->psz_proxy_passbuf = ((void*)0);
    VAR_14->psz_mime = ((void*)0);
    VAR_14->b_icecast = 0;
    VAR_14->psz_location = ((void*)0);
    VAR_14->psz_user_agent = ((void*)0);
    VAR_14->psz_referrer = ((void*)0);
    VAR_14->psz_username = ((void*)0);
    VAR_14->psz_password = ((void*)0);
    VAR_14->i_icy_meta = 0;
    VAR_14->i_icy_offset = 0;
    VAR_14->psz_icy_name = ((void*)0);
    VAR_14->psz_icy_genre = ((void*)0);
    VAR_14->psz_icy_title = ((void*)0);
    VAR_14->b_has_size = 0;
    VAR_14->offset = 0;
    VAR_14->size = 0;
    VAR_9->p_sys = VAR_14;

    if( FUNC_13( &VAR_14->url, VAR_10 ) || VAR_14->url.psz_host == ((void*)0) )
    {
        FUNC_5( VAR_9, "invalid URL" );
        FUNC_12( &VAR_14->url );
        return VAR_5;
    }
    if( VAR_14->url.i_port <= 0 )
        VAR_14->url.i_port = 80;

    FUNC_16( &VAR_13, &VAR_14->url );




    VAR_14->psz_user_agent = FUNC_11( VAR_9, "http-user-agent" );
    if (VAR_14->psz_user_agent)
    {
        unsigned VAR_15 = 0;
        for( char *VAR_16 = VAR_14->psz_user_agent; *VAR_16; VAR_16++ )
        {
            uint8_t VAR_17 = *VAR_16;
            if (VAR_15 == 0)
            {
                if( VAR_17 < 32 || FUNC_7( ")<>@,;:\\\"[]?={}", VAR_17 ) )
                    *VAR_16 = '_';
            }
            else
            {
                if (VAR_17 == ')')
                    VAR_15--;
                else if( VAR_17 < 32 && FUNC_7( "\t\r\n", VAR_17 ) == ((void*)0))
                    *VAR_16 = '_';
            }
            if (VAR_17 == '(')
            {
                if (VAR_15 == VAR_3)
                    break;
                VAR_15++;
            }
        }

        if (VAR_15 > 0)
        {
            char *VAR_18 = FUNC_7(VAR_14->psz_user_agent, '(');
            *VAR_18 = '\0';
        }
    }


    VAR_14->psz_referrer = FUNC_11( VAR_9, "http-referrer" );


    VAR_11 = FUNC_11( VAR_9, "http-proxy" );
    if( VAR_11 == ((void*)0) )
    {
        FUNC_4(VAR_9, "querying proxy for %s", VAR_10);
        VAR_11 = FUNC_18(VAR_10);

        if (VAR_11 != ((void*)0))
            FUNC_4(VAR_9, "proxy: %s", VAR_11);
        else
            FUNC_4(VAR_9, "no proxy");
    }
    if( VAR_11 != ((void*)0) )
    {
        VAR_14->b_proxy = 1;
        FUNC_13( &VAR_14->proxy, VAR_11 );
        FUNC_3( VAR_11 );

        VAR_11 = FUNC_11( VAR_9, "http-proxy-pwd" );
        if( VAR_11 )
            VAR_14->proxy.psz_password = VAR_14->psz_proxy_passbuf = VAR_11;

        if( VAR_14->proxy.psz_host == ((void*)0) || *VAR_14->proxy.psz_host == '\0' )
        {
            FUNC_6( VAR_9, "invalid proxy host" );
            goto error;
        }
        if( VAR_14->proxy.i_port <= 0 )
        {
            VAR_14->proxy.i_port = 80;
        }
    }

    FUNC_4( VAR_9, "http: server='%s' port=%d file='%s'",
             VAR_14->url.psz_host, VAR_14->url.i_port,
             VAR_14->url.psz_path != ((void*)0) ? VAR_14->url.psz_path : "" );
    if( VAR_14->b_proxy )
    {
        FUNC_4( VAR_9, "      proxy %s:%d", VAR_14->proxy.psz_host,
                 VAR_14->proxy.i_port );
    }
    if( VAR_14->url.psz_username && *VAR_14->url.psz_username )
    {
        FUNC_4( VAR_9, "      user='%s'", VAR_14->url.psz_username );
    }

    VAR_14->b_reconnect = FUNC_10( VAR_9, "http-reconnect" );

    if( FUNC_15( &VAR_13, VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0) ) )
    {
        VAR_14->url.psz_username = (char *) VAR_13.psz_username;
        VAR_14->url.psz_password = (char *) VAR_13.psz_password;
    }

connect:

    if( FUNC_0( VAR_9 ) )
        goto disconnect;

    if( VAR_14->i_code == 401 )
    {
        if( VAR_14->auth.psz_realm == ((void*)0) )
        {
            FUNC_5( VAR_9, "authentication failed without realm" );
            goto disconnect;
        }

        if( VAR_14->url.psz_username && VAR_14->url.psz_password &&
            VAR_14->auth.psz_nonce && VAR_14->auth.i_nonce == 0 )
        {
            FUNC_1( VAR_9 );
            goto connect;
        }
        FUNC_3( VAR_14->psz_username );
        FUNC_3( VAR_14->psz_password );
        VAR_14->psz_username = VAR_14->psz_password = ((void*)0);

        FUNC_4( VAR_9, "authentication failed for realm %s",
                 VAR_14->auth.psz_realm );

        VAR_13.psz_realm = VAR_14->auth.psz_realm;
        VAR_13.psz_authtype = VAR_14->auth.psz_nonce ? "Digest" : "Basic";

        if( FUNC_15( &VAR_13, VAR_9, ((void*)0), ((void*)0),
                               FUNC_2("HTTP authentication"),
                               FUNC_2("Please enter a valid login name and a "
                               "password for realm %s."), VAR_14->auth.psz_realm ) )
        {
            VAR_14->psz_username = FUNC_8(VAR_13.psz_username);
            VAR_14->psz_password = FUNC_8(VAR_13.psz_password);
            if (!VAR_14->psz_username || !VAR_14->psz_password)
                goto disconnect;
            FUNC_5( VAR_9, "retrying with user=%s", VAR_14->psz_username );
            VAR_14->url.psz_username = VAR_14->psz_username;
            VAR_14->url.psz_password = VAR_14->psz_password;
            FUNC_1( VAR_9 );
            goto connect;
        }
        else
            goto disconnect;
    }
    else
        FUNC_17( &VAR_13, VAR_9 );

    if( ( VAR_14->i_code == 301 || VAR_14->i_code == 302 ||
          VAR_14->i_code == 303 || VAR_14->i_code == 307 ) &&
        VAR_14->psz_location != ((void*)0) )
    {
        VAR_9->psz_url = VAR_14->psz_location;
        VAR_14->psz_location = ((void*)0);
        VAR_12 = VAR_4;
        goto disconnect;
    }

    if( VAR_14->b_reconnect ) FUNC_4( VAR_9, "auto re-connect enabled" );


    VAR_9->pf_read = VAR_1;
    VAR_9->pf_control = VAR_0;
    VAR_9->pf_seek = VAR_2;

    FUNC_14( &VAR_13 );

    return VAR_7;

disconnect:
    FUNC_1( VAR_9 );

error:
    FUNC_14( &VAR_13 );
    FUNC_12( &VAR_14->url );
    if( VAR_14->b_proxy )
        FUNC_12( &VAR_14->proxy );
    FUNC_3( VAR_14->psz_proxy_passbuf );
    FUNC_3( VAR_14->psz_mime );
    FUNC_3( VAR_14->psz_location );
    FUNC_3( VAR_14->psz_user_agent );
    FUNC_3( VAR_14->psz_referrer );
    FUNC_3( VAR_14->psz_username );
    FUNC_3( VAR_14->psz_password );

    return VAR_12;
}
