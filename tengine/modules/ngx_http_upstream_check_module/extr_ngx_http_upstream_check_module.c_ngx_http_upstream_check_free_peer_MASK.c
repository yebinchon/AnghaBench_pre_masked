
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_8__ {TYPE_2__* shm; } ;
typedef TYPE_3__ ngx_http_upstream_check_peer_t ;
struct TYPE_6__ {TYPE_3__* elts; } ;
struct TYPE_9__ {TYPE_1__ peers; } ;
struct TYPE_7__ {scalar_t__ busyness; int mutex; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,size_t) ;

void
FUNC_3(ngx_uint_t VAR_1)
{
    ngx_http_upstream_check_peer_t *VAR_2;

    if (FUNC_2(VAR_0, VAR_1)) {
        return;
    }

    VAR_2 = VAR_0->peers.elts;

    FUNC_0(&VAR_2[VAR_1].shm->mutex);

    if (VAR_2[VAR_1].shm->busyness > 0) {
        VAR_2[VAR_1].shm->busyness--;
    }

    FUNC_1(&VAR_2[VAR_1].shm->mutex);
}
