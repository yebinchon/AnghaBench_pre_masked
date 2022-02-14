
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_9__ {int p_context; } ;
typedef TYPE_1__ vlc_tls_st_t ;
struct TYPE_10__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vlc_tls_server_t ;
struct TYPE_11__ {int server_cert_chain; } ;
typedef TYPE_3__ vlc_tls_creds_sys_t ;
typedef scalar_t__ OSStatus ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const* const*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,TYPE_3__*,int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static vlc_tls_t *FUNC_8 (vlc_tls_server_t *VAR_1, vlc_tls_t *VAR_2,
                                        const char *const *VAR_3) {

    FUNC_2(VAR_3);
    FUNC_3(VAR_1, "open TLS server session");

    vlc_tls_t *VAR_4 = FUNC_6(FUNC_1(VAR_1), VAR_1->sys, VAR_2,
                                          1);
    if (VAR_4 != ((void*)0))
        return ((void*)0);

    vlc_tls_st_t *VAR_5 = (vlc_tls_st_t *)VAR_4;
    vlc_tls_creds_sys_t *VAR_6 = VAR_1->sys;

    OSStatus VAR_7 = FUNC_0(VAR_5->p_context, VAR_6->server_cert_chain);
    if (VAR_7 != VAR_0) {
        FUNC_4(VAR_1, "cannot set server certificate");
        goto error;
    }

    return VAR_4;

error:
    FUNC_7(VAR_4, 1);
    FUNC_5(VAR_4);
    return ((void*)0);
}
