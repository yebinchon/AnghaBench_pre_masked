
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_2__ {int session; } ;
typedef TYPE_1__ vlc_tls_gnutls_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,short*) ;

__attribute__((used)) static int FUNC_2(vlc_tls_t *VAR_0, short *restrict VAR_1)
{
    vlc_tls_gnutls_t *VAR_2 = (vlc_tls_gnutls_t *)VAR_0;
    vlc_tls_t *VAR_3 = FUNC_0(VAR_2->session);

    return FUNC_1(VAR_3, VAR_1);
}
