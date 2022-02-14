
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ whitelist; } ;
typedef TYPE_1__ vlc_tls_creds_sys_t ;
struct TYPE_7__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vlc_tls_client_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_3 (vlc_tls_client_t *VAR_0) {
    FUNC_2(VAR_0, "close secure transport client");

    vlc_tls_creds_sys_t *VAR_1 = VAR_0->sys;

    if (VAR_1->whitelist)
        FUNC_0(VAR_1->whitelist);

    FUNC_1(VAR_1);
}
