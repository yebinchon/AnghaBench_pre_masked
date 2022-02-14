
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int time_t ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_12__ {size_t current; int nr_slots; TYPE_3__* slots; } ;
typedef TYPE_2__ ngx_http_sysguard_rt_ring_t ;
struct TYPE_13__ {int stamp; int requests; int msec; int sec; } ;
typedef TYPE_3__ ngx_http_sysguard_rt_node_t ;
struct TYPE_14__ {scalar_t__ rt; TYPE_2__* rt_ring; int enable; } ;
typedef TYPE_4__ ngx_http_sysguard_conf_t ;
struct TYPE_15__ {int start_sec; scalar_t__ start_msec; TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_16__ {int sec; scalar_t__ msec; } ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 TYPE_9__* VAR_2 ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,char*,size_t) ;
 int FUNC_3 (int ,int ,int ,char*,int,int,int) ;

void
FUNC_4(ngx_http_request_t *VAR_4)
{
    ngx_http_sysguard_rt_ring_t *VAR_5;
    ngx_http_sysguard_rt_node_t *VAR_6;
    time_t VAR_7, VAR_8;
    ngx_uint_t VAR_9;
    ngx_http_sysguard_conf_t *VAR_10;

    VAR_10 = FUNC_1(VAR_4, VAR_3);

    if (!VAR_10->enable) {
        return;
    }

    if (VAR_10->rt == VAR_0) {
        return;
    }

    VAR_7 = VAR_2->sec;
    VAR_9 = VAR_2->msec;

    VAR_5 = VAR_10->rt_ring;

    VAR_6 = &VAR_5->slots[VAR_5->current];

    VAR_8 = VAR_7 - VAR_6->stamp;

    FUNC_3(VAR_1, VAR_4->connection->log, 0,
                   "sysguard update rt node: off: %T, stamp:%T, cur time: %T",
                   VAR_8, VAR_6->stamp, VAR_7);

    if (VAR_8) {

        VAR_5->current = (VAR_5->current + VAR_8) % VAR_5->nr_slots;

        VAR_6 = &VAR_5->slots[VAR_5->current];

        FUNC_0(VAR_6, 0, sizeof(ngx_http_sysguard_rt_node_t));

        VAR_6->stamp = VAR_7;
    }

    FUNC_2(VAR_1, VAR_4->connection->log, 0,
                   "sysguard update rt node: new current: %i",
                   VAR_5->current);

    VAR_6->sec += VAR_7 - VAR_4->start_sec;
    VAR_6->msec += VAR_9 - VAR_4->start_msec;
    VAR_6->requests++;
}
