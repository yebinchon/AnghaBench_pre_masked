
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {scalar_t__ rise_count; scalar_t__ fall_count; } ;
typedef TYPE_3__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_10__ {TYPE_2__* shm; TYPE_1__* check_peer_addr; TYPE_3__* conf; } ;
typedef TYPE_4__ ngx_http_upstream_check_peer_t ;
struct TYPE_11__ {int log; } ;
struct TYPE_8__ {scalar_t__ delete; scalar_t__ rise_count; scalar_t__ fall_count; int down; int mutex; int access_time; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(ngx_http_upstream_check_peer_t *VAR_4,
    ngx_int_t VAR_5)
{
    ngx_http_upstream_check_srv_conf_t *VAR_6;

    VAR_6 = VAR_4->conf;

    FUNC_1(&VAR_4->shm->mutex);

    if (VAR_4->shm->delete == VAR_1) {

        FUNC_2(&VAR_4->shm->mutex);
        return;
    }

    if (VAR_5) {
        VAR_4->shm->rise_count++;
        VAR_4->shm->fall_count = 0;
        if (VAR_4->shm->down && VAR_4->shm->rise_count >= VAR_6->rise_count) {
            VAR_4->shm->down = 0;
            FUNC_0(VAR_0, VAR_3->log, 0,
                          "enable check peer: %V ",
                          &VAR_4->check_peer_addr->name);
        }
    } else {
        VAR_4->shm->rise_count = 0;
        VAR_4->shm->fall_count++;
        if (!VAR_4->shm->down && VAR_4->shm->fall_count >= VAR_6->fall_count) {
            VAR_4->shm->down = 1;
            FUNC_0(VAR_0, VAR_3->log, 0,
                          "disable check peer: %V ",
                          &VAR_4->check_peer_addr->name);
        }
    }

    VAR_4->shm->access_time = VAR_2;

    FUNC_2(&VAR_4->shm->mutex);
}
