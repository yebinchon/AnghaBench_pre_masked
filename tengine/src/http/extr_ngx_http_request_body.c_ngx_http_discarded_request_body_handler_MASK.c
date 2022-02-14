
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_msec_t ;
typedef scalar_t__ ngx_msec_int_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {scalar_t__ lingering_close; scalar_t__ discard_body; scalar_t__ lingering_time; TYPE_4__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_13__ {int lingering_timeout; } ;
typedef TYPE_2__ ngx_http_core_loc_conf_t ;
struct TYPE_14__ {scalar_t__ timedout; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_15__ {int timedout; int error; TYPE_3__* read; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 () ;

void
FUNC_6(ngx_http_request_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_msec_t VAR_7;
    ngx_event_t *VAR_8;
    ngx_connection_t *VAR_9;
    ngx_http_core_loc_conf_t *VAR_10;

    VAR_9 = VAR_5->connection;
    VAR_8 = VAR_9->read;

    if (VAR_8->timedout) {
        VAR_9->timedout = 1;
        VAR_9->error = 1;
        FUNC_2(VAR_5, VAR_1);
        return;
    }

    if (VAR_5->lingering_time) {
        VAR_7 = (ngx_msec_t) VAR_5->lingering_time - (ngx_msec_t) FUNC_5();

        if ((ngx_msec_int_t) VAR_7 <= 0) {
            VAR_5->discard_body = 0;
            VAR_5->lingering_close = 0;
            FUNC_2(VAR_5, VAR_1);
            return;
        }

    } else {
        VAR_7 = 0;
    }

    VAR_6 = FUNC_4(VAR_5);

    if (VAR_6 == VAR_3) {
        VAR_5->discard_body = 0;
        VAR_5->lingering_close = 0;
        FUNC_2(VAR_5, VAR_0);
        return;
    }

    if (VAR_6 >= VAR_2) {
        VAR_9->error = 1;
        FUNC_2(VAR_5, VAR_1);
        return;
    }



    if (FUNC_1(VAR_8, 0) != VAR_3) {
        VAR_9->error = 1;
        FUNC_2(VAR_5, VAR_1);
        return;
    }

    if (VAR_7) {

        VAR_10 = FUNC_3(VAR_5, VAR_4);

        VAR_7 *= 1000;

        if (VAR_7 > VAR_10->lingering_timeout) {
            VAR_7 = VAR_10->lingering_timeout;
        }

        FUNC_0(VAR_8, VAR_7);
    }
}
