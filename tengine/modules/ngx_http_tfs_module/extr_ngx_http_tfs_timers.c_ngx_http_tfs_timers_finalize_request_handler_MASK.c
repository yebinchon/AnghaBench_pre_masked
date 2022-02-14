
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_2__* upstream; TYPE_1__* lock; } ;
typedef TYPE_3__ ngx_http_tfs_timers_data_t ;
struct TYPE_12__ {int pool; TYPE_5__* finalize_data; int log; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_13__ {TYPE_6__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_14__ {TYPE_3__* data; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_10__ {int rcs_interval; } ;
struct TYPE_9__ {int ngx_http_tfs_kp_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int *) ;

ngx_int_t
FUNC_4(ngx_http_tfs_t *VAR_2)
{
    ngx_event_t *VAR_3;
    ngx_connection_t *VAR_4;
    ngx_http_tfs_timers_data_t *VAR_5;

    FUNC_2(VAR_0, VAR_2->log, 0, "http tfs timers finalize");

    VAR_3 = VAR_2->finalize_data;
    VAR_4 = VAR_3->data;
    VAR_5 = VAR_4->data;

    FUNC_1(VAR_2->pool);
    FUNC_3(&VAR_5->lock->ngx_http_tfs_kp_mutex);
    FUNC_0(VAR_3, VAR_5->upstream->rcs_interval);
    return VAR_1;
}
