
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int ngx_uint_t ;
typedef int ngx_msec_int_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {scalar_t__ current; int nr_slots; int cached_rt; TYPE_3__* slots; scalar_t__ cached_rt_exptime; } ;
typedef TYPE_2__ ngx_http_sysguard_rt_ring_t ;
struct TYPE_11__ {scalar_t__ stamp; scalar_t__ requests; scalar_t__ msec; scalar_t__ sec; } ;
typedef TYPE_3__ ngx_http_sysguard_rt_node_t ;
struct TYPE_12__ {scalar_t__ rt_period; TYPE_2__* rt_ring; } ;
typedef TYPE_4__ ngx_http_sysguard_conf_t ;
struct TYPE_13__ {TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,int,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_3, time_t VAR_4)
{
    ngx_uint_t VAR_5 = 0, VAR_6 = 0,
                                  VAR_7 = 0;
    ngx_int_t VAR_8, VAR_9, VAR_10 = 0;
    ngx_msec_int_t VAR_11 = 0;
    ngx_http_sysguard_conf_t *VAR_12;
    ngx_http_sysguard_rt_ring_t *VAR_13;
    ngx_http_sysguard_rt_node_t *VAR_14, *VAR_15;

    VAR_12 = FUNC_0(VAR_3, VAR_2);

    VAR_13 = VAR_12->rt_ring;

    VAR_13->cached_rt_exptime = FUNC_5() + VAR_4;

    VAR_8 = VAR_13->current;

    VAR_9 = (VAR_13->current + 1) % VAR_13->nr_slots;

    VAR_15 = &VAR_13->slots[VAR_13->current];

    FUNC_1(VAR_0, VAR_3->connection->log, 0,
                   "sysguard update rt: i: %i, c:%i h: %i",
                   VAR_8, VAR_13->current, VAR_9);

    for ( ; (VAR_8 != VAR_9) && (VAR_10 < VAR_12->rt_period); VAR_8--, VAR_10++) {

        VAR_14 = &VAR_13->slots[VAR_8];

        FUNC_3(VAR_0, VAR_3->connection->log, 0,
                       "node in loop: i: %i, p:%i, sec: %T, msec: %i, r: %ui",
                       VAR_8, VAR_10, VAR_14->sec, VAR_14->msec, VAR_14->requests);

        if (VAR_14->stamp == 0
            || (VAR_15->stamp - VAR_14->stamp) != VAR_10)
        {

            FUNC_2(VAR_0, VAR_3->connection->log, 0,
                           "continue: i: %i, p:%i, node tamp: %T, "
                           "cur stamp: %T",
                           VAR_8, VAR_10, VAR_14->stamp, VAR_15->stamp);

           goto cont;
        }

        VAR_6 += VAR_14->sec;
        VAR_11 += VAR_14->msec;
        VAR_7 += VAR_14->requests;

cont:

        if (VAR_8 == 0) {
            VAR_8 = VAR_13->nr_slots;
        }
    }

    FUNC_1(VAR_0, VAR_3->connection->log, 0,
                   "rt sec: %ui, rt msec:%i, rc requests: %ui",
                   VAR_6, VAR_11, VAR_7);

    VAR_11 += (ngx_msec_int_t) (VAR_6 * 1000);
    VAR_11 = FUNC_4(VAR_11, 0);

    if (VAR_7 != 0 && VAR_11 > 0) {

        VAR_11 = VAR_11 / VAR_7;

        VAR_5 = VAR_11 / 1000 * 1000 + VAR_11 % 1000;
    }

    VAR_13->cached_rt = VAR_5;

    return VAR_1;
}
