
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_shmtx_sh_t ;
struct TYPE_10__ {int len; int * data; } ;
struct TYPE_11__ {size_t size; int * addr; int log; TYPE_1__ name; } ;
typedef TYPE_2__ ngx_shm_t ;
struct TYPE_14__ {scalar_t__ spin; } ;
struct TYPE_12__ {TYPE_5__ ngx_http_tfs_kp_mutex; int * ngx_http_tfs_kp_mutex_ptr; } ;
typedef TYPE_3__ ngx_http_tfs_timers_lock_t ;
struct TYPE_13__ {int pool; int log; } ;
typedef TYPE_4__ ngx_cycle_t ;
typedef int ngx_atomic_t ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int *,int *) ;

ngx_http_tfs_timers_lock_t *
FUNC_3(ngx_cycle_t *VAR_1,
    u_char *VAR_2)
{
    u_char *VAR_3;
    size_t VAR_4;
    ngx_shm_t VAR_5;
    ngx_http_tfs_timers_lock_t *VAR_6;



    VAR_4 = 128;

    VAR_5.size = VAR_4;
    VAR_5.name.len = sizeof("nginx_tfs_keepalive_zone");
    VAR_5.name.data = (u_char *) "nginx_tfs_keepalive_zone";
    VAR_5.log = VAR_1->log;

    if (FUNC_1(&VAR_5) != VAR_0) {
        return ((void*)0);
    }

    VAR_3 = VAR_5.addr;

    VAR_6 = FUNC_0(VAR_1->pool, sizeof(ngx_http_tfs_timers_lock_t));
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_6->ngx_http_tfs_kp_mutex_ptr = (ngx_atomic_t *) VAR_3;
    VAR_6->ngx_http_tfs_kp_mutex.spin = (ngx_uint_t) -1;
    if (FUNC_2(&VAR_6->ngx_http_tfs_kp_mutex, VAR_3, VAR_2)
        != VAR_0)
    {
        return ((void*)0);
    }


    return VAR_6;
}
