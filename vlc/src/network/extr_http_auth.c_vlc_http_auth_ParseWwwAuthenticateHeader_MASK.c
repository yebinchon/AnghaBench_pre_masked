
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {char const* psz_qop; int * psz_nonce; int * psz_realm; scalar_t__ i_nonce; void* psz_algorithm; void* psz_stale; void* psz_opaque; void* psz_domain; } ;
typedef TYPE_1__ vlc_http_auth_t ;
typedef int psz_digest_prefix ;
typedef int psz_basic_prefix ;


 void* FUNC_0 (char const*,char*) ;
 void* FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 void* FUNC_4 (char const*,char) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;

void FUNC_6(
        vlc_object_t *VAR_0, vlc_http_auth_t *VAR_1,
        const char *VAR_2 )
{
    static const char VAR_3[] = "Basic ";
    static const char VAR_4[] = "Digest ";



    if ( FUNC_5( VAR_2, VAR_3,
                      sizeof( VAR_3 ) - 1 ) == 0 )
    {

        FUNC_2( VAR_0, "Using Basic Authentication" );
        VAR_2 += sizeof( VAR_3 ) - 1;
        VAR_1->psz_realm = FUNC_0( VAR_2, "realm" );
        if ( VAR_1->psz_realm == ((void*)0) )
            FUNC_3( VAR_0, "Basic Authentication: "
                      "Mandatory 'realm' parameter is missing" );
    }
    else if ( FUNC_5( VAR_2, VAR_4,
                           sizeof( VAR_4 ) - 1 ) == 0 )
    {

        FUNC_2( VAR_0, "Using Digest Access Authentication" );

        if ( VAR_1->psz_nonce )

            return;

        VAR_2 += sizeof( VAR_4 ) - 1;
        VAR_1->psz_realm = FUNC_0( VAR_2, "realm" );
        VAR_1->psz_domain = FUNC_0( VAR_2, "domain" );
        VAR_1->psz_nonce = FUNC_0( VAR_2, "nonce" );
        VAR_1->psz_opaque = FUNC_0( VAR_2, "opaque" );
        VAR_1->psz_stale = FUNC_1( VAR_2, "stale" );
        VAR_1->psz_algorithm = FUNC_1( VAR_2, "algorithm" );
        VAR_1->psz_qop = FUNC_0( VAR_2, "qop" );
        VAR_1->i_nonce = 0;







        if ( VAR_1->psz_realm == ((void*)0) )
            FUNC_3( VAR_0, "Digest Access Authentication: "
                      "Mandatory 'realm' parameter is missing" );
        if ( VAR_1->psz_nonce == ((void*)0) )
            FUNC_3( VAR_0, "Digest Access Authentication: "
                      "Mandatory 'nonce' parameter is missing" );


        if ( VAR_1->psz_qop )
        {
            char *VAR_5 = FUNC_4( VAR_1->psz_qop, ',' );
            if ( VAR_5 )
                *VAR_5 = '\0';
        }
    }
    else
    {
        const char *VAR_6 = FUNC_4( VAR_2, ' ' );
        if ( VAR_6 )
            FUNC_3( VAR_0, "Unknown authentication scheme: '%*s'",
                      (int)(VAR_6 - VAR_2), VAR_2 );
        else
            FUNC_3( VAR_0, "Unknown authentication scheme: '%s'",
                      VAR_2 );
    }
}
