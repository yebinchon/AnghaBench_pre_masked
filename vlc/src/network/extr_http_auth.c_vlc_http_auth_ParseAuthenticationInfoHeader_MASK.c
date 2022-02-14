
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {char* psz_cnonce; int i_nonce; char* psz_qop; char* psz_nonce; } ;
typedef TYPE_1__ vlc_http_auth_t ;


 char* FUNC_0 (int *,TYPE_1__*,char const*,char const*,char const*,char const*) ;
 char* FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int *,int) ;

int FUNC_8(
        vlc_object_t *VAR_2, vlc_http_auth_t *VAR_3,
        const char *VAR_4, const char *VAR_5, const char *VAR_6,
        const char *VAR_7, const char *VAR_8 )
{
    char *VAR_9 = FUNC_1( VAR_4, "nextnonce" );
    char *VAR_10 = FUNC_2( VAR_4, "qop" );
    char *VAR_11 = FUNC_1( VAR_4, "rspauth" );
    char *VAR_12 = FUNC_1( VAR_4, "cnonce" );
    char *VAR_13 = FUNC_2( VAR_4, "nc" );
    char *VAR_14 = ((void*)0);
    int VAR_15 = VAR_1;
    int VAR_16;

    if ( VAR_12 )
    {
        if ( FUNC_6( VAR_12, VAR_3->psz_cnonce ) != 0 )
        {
            FUNC_4( VAR_2, "HTTP Digest Access Authentication: server "
                             "replied with a different client nonce value." );
            VAR_15 = VAR_0;
            goto error;
        }

        if ( VAR_13 )
        {
            VAR_16 = FUNC_7( VAR_13, ((void*)0), 16 );

            if ( VAR_16 != VAR_3->i_nonce )
            {
                FUNC_4( VAR_2, "HTTP Digest Access Authentication: server "
                                 "replied with a different nonce count "
                                 "value." );
                VAR_15 = VAR_0;
                goto error;
            }
        }

        if ( VAR_10 && VAR_3->psz_qop &&
             FUNC_6( VAR_10, VAR_3->psz_qop ) != 0 )
            FUNC_5( VAR_2, "HTTP Digest Access Authentication: server "
                              "replied using a different 'quality of "
                              "protection' option" );






        VAR_14 = FUNC_0( VAR_2, VAR_3, VAR_5, VAR_6,
                                 VAR_7, VAR_8 );
        if( VAR_14 == ((void*)0) || FUNC_6( VAR_14, VAR_11 ) != 0 )
        {
            FUNC_4( VAR_2, "HTTP Digest Access Authentication: server "
                             "replied with an invalid response digest "
                             "(expected value: %s).", VAR_14 );
            VAR_15 = VAR_0;
            goto error;
        }
    }

    if ( VAR_9 )
    {
        FUNC_3( VAR_3->psz_nonce );
        VAR_3->psz_nonce = VAR_9;
        VAR_9 = ((void*)0);
    }

error:
    FUNC_3( VAR_9 );
    FUNC_3( VAR_10 );
    FUNC_3( VAR_11 );
    FUNC_3( VAR_12 );
    FUNC_3( VAR_13 );
    FUNC_3( VAR_14 );

    return VAR_15;
}
