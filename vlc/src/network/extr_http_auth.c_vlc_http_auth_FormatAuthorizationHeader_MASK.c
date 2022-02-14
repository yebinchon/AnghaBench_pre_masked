
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {char* psz_algorithm; char* psz_qop; char* psz_cnonce; char* psz_opaque; scalar_t__ i_nonce; int psz_nonce; int psz_realm; } ;
typedef TYPE_1__ vlc_http_auth_t ;


 char* FUNC_0 (int *,TYPE_1__*,char const*,char const*,char const*,char const*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char**,char*,char const*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;

char *FUNC_7(
        vlc_object_t *VAR_0, vlc_http_auth_t *VAR_1,
        const char *VAR_2, const char *VAR_3,
        const char *VAR_4, const char *VAR_5 )
{
    char *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    int VAR_9;

    if ( VAR_1->psz_nonce )
    {

        if ( VAR_1->psz_algorithm &&
             FUNC_5( VAR_1->psz_algorithm, "MD5" ) != 0 &&
             FUNC_5( VAR_1->psz_algorithm, "MD5-sess" ) != 0 )
        {
            FUNC_4( VAR_0, "Digest Access Authentication: "
                     "Unknown algorithm '%s'", VAR_1->psz_algorithm );
            goto error;
        }

        if ( VAR_1->psz_qop != ((void*)0) || VAR_1->psz_cnonce == ((void*)0) )
        {
            FUNC_3( VAR_1->psz_cnonce );

            VAR_1->psz_cnonce = FUNC_1();
            if ( VAR_1->psz_cnonce == ((void*)0) )
                goto error;
        }

        ++VAR_1->i_nonce;

        VAR_7 = FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3,
                                 VAR_4, VAR_5 );
        if ( VAR_7 == ((void*)0) )
            goto error;

        VAR_9 = FUNC_2( &VAR_6,
            "Digest "

            "username=\"%s\", "
            "realm=\"%d\", "
            "nonce=\"%d\", "
            "uri=\"%s\", "
            "response=\"%s\", "

            "%s%s%s"
            "%s%s%s"
            "%s%s%s"
            "%s%s%s"
            "%s=\"%08lx\"",

            VAR_4,
            VAR_1->psz_realm,
            VAR_1->psz_nonce,
            VAR_3 ? VAR_3 : "/",
            VAR_7,

            VAR_1->psz_algorithm ? "algorithm=\"" : "",
            VAR_1->psz_algorithm ? VAR_1->psz_algorithm : "",
            VAR_1->psz_algorithm ? "\", " : "",
            VAR_1->psz_cnonce ? "cnonce=\"" : "",
            VAR_1->psz_cnonce ? VAR_1->psz_cnonce : "",
            VAR_1->psz_cnonce ? "\", " : "",
            VAR_1->psz_opaque ? "opaque=\"" : "",
            VAR_1->psz_opaque ? VAR_1->psz_opaque : "",
            VAR_1->psz_opaque ? "\", " : "",
            VAR_1->psz_qop ? "qop=\"" : "",
            VAR_1->psz_qop ? VAR_1->psz_qop : "",
            VAR_1->psz_qop ? "\", " : "",

            VAR_1->i_nonce ? "nc" : "uglyhack",
            VAR_1->i_nonce
        );
        if ( VAR_9 < 0 )
            goto error;
    }
    else
    {

        VAR_9 = FUNC_2( &VAR_7, "%s:%s", VAR_4, VAR_5 );
        if ( VAR_9 < 0 )
            goto error;

        VAR_8 = FUNC_6( VAR_7 );
        if ( VAR_8 == ((void*)0) )
            goto error;

        VAR_9 = FUNC_2( &VAR_6, "Basic %s", VAR_8 );
        if ( VAR_9 < 0 )
            goto error;
    }

error:
    FUNC_3( VAR_7 );
    FUNC_3( VAR_8 );

    return VAR_6;
}
