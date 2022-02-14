
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_6__ {int tls; int session; } ;
typedef TYPE_1__ vlc_tls_gnutls_t ;
struct TYPE_7__ {int sys; } ;
typedef TYPE_2__ vlc_tls_client_t ;
typedef int gnutls_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int ,int ,int ,int *,char const* const*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,char const*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static vlc_tls_t *FUNC_6(vlc_tls_client_t *VAR_2,
                                           vlc_tls_t *VAR_3, const char *VAR_4,
                                           const char *const *VAR_5)
{
    vlc_tls_gnutls_t *VAR_6 = FUNC_1(FUNC_0(VAR_2), VAR_0,
                                                VAR_2->sys, VAR_3, VAR_5);
    if (VAR_6 == ((void*)0))
        return ((void*)0);

    gnutls_session_t VAR_7 = VAR_6->session;


    FUNC_2 (VAR_7, 1024);

    if (FUNC_4(VAR_4 != ((void*)0)))

        FUNC_3 (VAR_7, VAR_1,
                                VAR_4, FUNC_5 (VAR_4));

    return &VAR_6->tls;
}
