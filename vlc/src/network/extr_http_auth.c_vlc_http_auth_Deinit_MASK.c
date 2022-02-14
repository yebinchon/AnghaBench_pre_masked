
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int psz_HA1; int psz_cnonce; int psz_qop; int psz_algorithm; int psz_stale; int psz_opaque; int psz_nonce; int psz_domain; int psz_realm; } ;
typedef TYPE_1__ vlc_http_auth_t ;


 int FUNC_0 (int ) ;

void FUNC_1( vlc_http_auth_t *VAR_0 )
{
    FUNC_0( VAR_0->psz_realm );
    FUNC_0( VAR_0->psz_domain );
    FUNC_0( VAR_0->psz_nonce );
    FUNC_0( VAR_0->psz_opaque );
    FUNC_0( VAR_0->psz_stale );
    FUNC_0( VAR_0->psz_algorithm );
    FUNC_0( VAR_0->psz_qop );
    FUNC_0( VAR_0->psz_cnonce );
    FUNC_0( VAR_0->psz_HA1 );
}
