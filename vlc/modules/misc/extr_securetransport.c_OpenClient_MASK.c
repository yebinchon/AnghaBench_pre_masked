
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * server_cert_chain; int whitelist; } ;
typedef TYPE_1__ vlc_tls_creds_sys_t ;
struct TYPE_7__ {TYPE_1__* sys; int * ops; } ;
typedef TYPE_2__ vlc_tls_client_t ;


 int FUNC_0 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 (vlc_tls_client_t *VAR_5) {

    FUNC_2(VAR_5, "open st client");

    vlc_tls_creds_sys_t *VAR_6 = FUNC_1 (sizeof (*VAR_6));
    if (FUNC_3(VAR_6 == ((void*)0)))
        return VAR_0;

    VAR_6->whitelist = FUNC_0(VAR_2, 0, &VAR_3);
    VAR_6->server_cert_chain = ((void*)0);

    VAR_5->ops = &VAR_4;
    VAR_5->sys = VAR_6;
    return VAR_1;
}
