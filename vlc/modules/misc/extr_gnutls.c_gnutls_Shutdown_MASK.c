
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_3__ {int session; } ;
typedef TYPE_1__ vlc_tls_gnutls_t ;
typedef scalar_t__ ssize_t ;
typedef int gnutls_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(vlc_tls_t *VAR_2, bool VAR_3)
{
    vlc_tls_gnutls_t *VAR_4 = (vlc_tls_gnutls_t *)VAR_2;
    gnutls_session_t VAR_5 = VAR_4->session;
    ssize_t VAR_6;


    VAR_6 = FUNC_2(VAR_5, 0);
    if (VAR_6 < 0)
        return FUNC_0(VAR_4, VAR_6);

    VAR_6 = FUNC_1(VAR_5, VAR_3 ? VAR_0 : VAR_1);
    if (VAR_6 < 0)
        return FUNC_0(VAR_4, VAR_6);

    return 0;
}
