
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_slab_pool_t ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_1__ shm; } ;
typedef TYPE_2__ ngx_shm_zone_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int * status; scalar_t__ version; int msg_queue; } ;
typedef TYPE_3__ ngx_dyups_shctx_t ;
struct TYPE_10__ {int * shpool; TYPE_3__* sh; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_shm_zone_t *VAR_3, void *VAR_4)
{
    ngx_slab_pool_t *VAR_5;
    ngx_dyups_shctx_t *VAR_6;

    VAR_5 = (ngx_slab_pool_t *) VAR_3->shm.addr;

    VAR_6 = FUNC_1(VAR_5, sizeof(ngx_dyups_shctx_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_2.sh = VAR_6;
    VAR_2.shpool = VAR_5;

    FUNC_0(&VAR_6->msg_queue);

    VAR_6->version = 0;
    VAR_6->status = ((void*)0);

    return VAR_1;
}
