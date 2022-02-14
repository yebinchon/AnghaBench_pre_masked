
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_10__ {TYPE_1__* upstream; } ;
typedef TYPE_2__ ngx_http_tfs_timers_data_t ;
struct TYPE_11__ {scalar_t__ timer_set; TYPE_5__* data; int log; int handler; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_12__ {int log; int pool; } ;
typedef TYPE_4__ ngx_cycle_t ;
struct TYPE_13__ {TYPE_2__* data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_9__ {int rcs_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 void* FUNC_2 (int ,int) ;

ngx_int_t
FUNC_3(ngx_cycle_t *VAR_4,
    ngx_http_tfs_timers_data_t *VAR_5)
{
    ngx_event_t *VAR_6;
    ngx_connection_t *VAR_7;

    FUNC_1(VAR_1, VAR_4->log, 0,
                   "http check tfs rc servers");

    VAR_6 = FUNC_2(VAR_4->pool, sizeof(ngx_event_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = FUNC_2(VAR_4->pool, sizeof(ngx_connection_t));
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->data = VAR_5;
    VAR_6->handler = VAR_3;
    VAR_6->log = VAR_4->log;
    VAR_6->data = VAR_7;
    VAR_6->timer_set = 0;

    FUNC_0(VAR_6, VAR_5->upstream->rcs_interval);

    return VAR_2;
}
