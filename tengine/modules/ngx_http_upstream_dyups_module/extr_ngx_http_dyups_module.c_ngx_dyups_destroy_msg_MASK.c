
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_slab_pool_t ;
struct TYPE_7__ {TYPE_3__* data; } ;
struct TYPE_6__ {TYPE_3__* data; } ;
struct TYPE_8__ {TYPE_2__ content; TYPE_1__ name; struct TYPE_8__* pid; } ;
typedef TYPE_3__ ngx_dyups_msg_t ;


 int FUNC_0 (int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(ngx_slab_pool_t *VAR_0, ngx_dyups_msg_t *VAR_1)
{
    if (VAR_1->pid) {
        FUNC_0(VAR_0, VAR_1->pid);
    }

    if (VAR_1->name.data) {
        FUNC_0(VAR_0, VAR_1->name.data);
    }

    if (VAR_1->content.data) {
        FUNC_0(VAR_0, VAR_1->content.data);
    }

    FUNC_0(VAR_0, VAR_1);
}
