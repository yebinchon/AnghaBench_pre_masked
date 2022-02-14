
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int ngx_msec_t ;
struct TYPE_14__ {int check_interval; } ;
typedef TYPE_3__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_15__ {scalar_t__ generation; } ;
typedef TYPE_4__ ngx_http_upstream_check_peers_shm_t ;
struct TYPE_12__ {scalar_t__ timer_set; } ;
struct TYPE_16__ {TYPE_2__* shm; int index; TYPE_1__ check_timeout_ev; TYPE_3__* conf; } ;
typedef TYPE_5__ ngx_http_upstream_check_peer_t ;
struct TYPE_17__ {int log; TYPE_5__* data; } ;
typedef TYPE_6__ ngx_event_t ;
struct TYPE_13__ {scalar_t__ owner; void* access_time; int mutex; } ;
struct TYPE_11__ {TYPE_4__* peers_shm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_10__* VAR_2 ;
 int FUNC_0 (TYPE_6__*,int) ;
 void* VAR_3 ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ngx_event_t *VAR_6)
{
    ngx_msec_t VAR_7;
    ngx_http_upstream_check_peer_t *VAR_8;
    ngx_http_upstream_check_srv_conf_t *VAR_9;
    ngx_http_upstream_check_peers_shm_t *VAR_10;

    if (FUNC_2()) {
        return;
    }

    if (VAR_2 == ((void*)0)) {
        return;
    }

    VAR_10 = VAR_2->peers_shm;
    VAR_8 = VAR_6->data;
    VAR_9 = VAR_8->conf;

    FUNC_0(VAR_6, VAR_9->check_interval / 2);


    if (VAR_8->shm->owner == VAR_5 ||
        VAR_8->check_timeout_ev.timer_set) {
        return;
    }

    VAR_7 = VAR_3 - VAR_8->shm->access_time;
    FUNC_3(VAR_1, VAR_6->log, 0,
                   "http check begin handler index: %ui, owner: %P, "
                   "ngx_pid: %P, interval: %M, check_interval: %M",
                   VAR_8->index, VAR_8->shm->owner,
                   VAR_5, VAR_7,
                   VAR_9->check_interval);

    FUNC_4(&VAR_8->shm->mutex);

    if (VAR_10->generation != VAR_4) {
        FUNC_5(&VAR_8->shm->mutex);
        return;
    }

    if ((VAR_7 >= VAR_9->check_interval)
         && (VAR_8->shm->owner == VAR_0)) {

        VAR_8->shm->owner = VAR_5;

    } else if (VAR_7 >= (VAR_9->check_interval << 4)) {
        VAR_8->shm->owner = VAR_5;
        VAR_8->shm->access_time = VAR_3;
    }

    FUNC_5(&VAR_8->shm->mutex);

    if (VAR_8->shm->owner == VAR_5) {
        FUNC_1(VAR_6);
    }
}
