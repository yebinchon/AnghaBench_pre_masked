
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sockaddr; } ;
typedef TYPE_1__ ngx_http_upstream_check_peer_shm_t ;
struct TYPE_5__ {int shpool; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(
    ngx_http_upstream_check_peer_shm_t *VAR_1)
{
    if (VAR_0 == ((void*)0)) {
        return;
    }

    FUNC_0(VAR_0->shpool, VAR_1->sockaddr);
}
