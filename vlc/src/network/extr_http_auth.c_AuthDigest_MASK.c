
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {char* psz_realm; char* psz_HA1; char* psz_algorithm; char* psz_nonce; char* psz_cnonce; char* psz_qop; int i_nonce; } ;
typedef TYPE_1__ vlc_http_auth_t ;
struct md5_s {int dummy; } ;
typedef int psz_inonce ;


 int FUNC_0 (struct md5_s*,char const*,int) ;
 int FUNC_1 (struct md5_s*) ;
 int FUNC_2 (struct md5_s*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (struct md5_s*) ;
 int FUNC_6 (char*,int,char*,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 void* FUNC_8 (char*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static char *FUNC_10( vlc_object_t *VAR_0, vlc_http_auth_t *VAR_1,
                         const char *VAR_2, const char *VAR_3,
                         const char *VAR_4, const char *VAR_5 )
{
    char *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    char *VAR_9 = ((void*)0);
    char VAR_10[9];
    struct md5_s VAR_11;
    struct md5_s VAR_12;

    if ( VAR_1->psz_realm == ((void*)0) )
    {
        FUNC_4( VAR_0, "Digest Authentication: "
                  "Mandatory 'realm' value not available" );
        goto error;
    }


    if ( VAR_1->psz_HA1 )
    {
        VAR_6 = FUNC_8( VAR_1->psz_HA1 );
        if ( VAR_6 == ((void*)0) )
            goto error;
    }
    else
    {
        FUNC_2( &VAR_11 );
        FUNC_0( &VAR_11, VAR_4, FUNC_9( VAR_4 ) );
        FUNC_0( &VAR_11, ":", 1 );
        FUNC_0( &VAR_11, VAR_1->psz_realm, FUNC_9( VAR_1->psz_realm ) );
        FUNC_0( &VAR_11, ":", 1 );
        FUNC_0( &VAR_11, VAR_5, FUNC_9( VAR_5 ) );
        FUNC_1( &VAR_11 );

        VAR_6 = FUNC_5( &VAR_11 );
        if ( VAR_6 == ((void*)0) )
            goto error;

        if ( VAR_1->psz_algorithm &&
             FUNC_7( VAR_1->psz_algorithm, "MD5-sess" ) == 0 )
        {
            FUNC_2( &VAR_11 );
            FUNC_0( &VAR_11, VAR_6, 32 );
            FUNC_0( &VAR_11, ":", 1 );
            FUNC_0( &VAR_11, VAR_1->psz_nonce, FUNC_9( VAR_1->psz_nonce ) );
            FUNC_0( &VAR_11, ":", 1 );
            FUNC_0( &VAR_11, VAR_1->psz_cnonce, FUNC_9( VAR_1->psz_cnonce ) );
            FUNC_1( &VAR_11 );

            FUNC_3( VAR_6 );

            VAR_6 = FUNC_5( &VAR_11 );
            if ( VAR_6 == ((void*)0) )
                goto error;

            VAR_1->psz_HA1 = FUNC_8( VAR_6 );
            if ( VAR_1->psz_HA1 == ((void*)0) )
                goto error;
        }
    }


    FUNC_2( &VAR_11 );
    if ( *VAR_2 )
        FUNC_0( &VAR_11, VAR_2, FUNC_9( VAR_2 ) );
    FUNC_0( &VAR_11, ":", 1 );
    if ( VAR_3 )
        FUNC_0( &VAR_11, VAR_3, FUNC_9( VAR_3 ) );
    else
        FUNC_0( &VAR_11, "/", 1 );
    if ( VAR_1->psz_qop && FUNC_7( VAR_1->psz_qop, "auth-int" ) == 0 )
    {
        FUNC_2( &VAR_12 );

        FUNC_0( &VAR_12, "", 0 );
        FUNC_1( &VAR_12 );

        VAR_8 = FUNC_5( &VAR_12 );
        if ( VAR_8 == ((void*)0) )
            goto error;

        FUNC_0( &VAR_11, ":", 1 );
        FUNC_0( &VAR_11, VAR_8, 32 );
    }
    FUNC_1( &VAR_11 );

    VAR_7 = FUNC_5( &VAR_11 );
    if ( VAR_7 == ((void*)0) )
        goto error;


    FUNC_2( &VAR_11 );
    FUNC_0( &VAR_11, VAR_6, 32 );
    FUNC_0( &VAR_11, ":", 1 );
    FUNC_0( &VAR_11, VAR_1->psz_nonce, FUNC_9( VAR_1->psz_nonce ) );
    FUNC_0( &VAR_11, ":", 1 );
    if ( VAR_1->psz_qop &&
         ( FUNC_7( VAR_1->psz_qop, "auth" ) == 0 ||
           FUNC_7( VAR_1->psz_qop, "auth-int" ) == 0 ) )
    {
        FUNC_6( VAR_10, sizeof( VAR_10 ), "%08x", VAR_1->i_nonce );
        FUNC_0( &VAR_11, VAR_10, 8 );
        FUNC_0( &VAR_11, ":", 1 );
        FUNC_0( &VAR_11, VAR_1->psz_cnonce, FUNC_9( VAR_1->psz_cnonce ) );
        FUNC_0( &VAR_11, ":", 1 );
        FUNC_0( &VAR_11, VAR_1->psz_qop, FUNC_9( VAR_1->psz_qop ) );
        FUNC_0( &VAR_11, ":", 1 );
    }
    FUNC_0( &VAR_11, VAR_7, 32 );
    FUNC_1( &VAR_11 );

    VAR_9 = FUNC_5( &VAR_11 );

error:
    FUNC_3( VAR_6 );
    FUNC_3( VAR_7 );
    FUNC_3( VAR_8 );

    return VAR_9;
}
