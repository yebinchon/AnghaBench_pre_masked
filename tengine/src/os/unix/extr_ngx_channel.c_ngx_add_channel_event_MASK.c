
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_fd_t ;
struct TYPE_9__ {int channel; int handler; int log; } ;
typedef TYPE_1__ ngx_event_t ;
typedef int ngx_event_handler_pt ;
struct TYPE_10__ {int log; int pool; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_11__ {TYPE_1__* write; TYPE_1__* read; int pool; } ;
typedef TYPE_3__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;

ngx_int_t
FUNC_4(ngx_cycle_t *VAR_5, ngx_fd_t VAR_6, ngx_int_t VAR_7,
    ngx_event_handler_pt VAR_8)
{
    ngx_event_t *VAR_9, *VAR_10, *VAR_11;
    ngx_connection_t *VAR_12;

    VAR_12 = FUNC_3(VAR_6, VAR_5->log);

    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12->pool = VAR_5->pool;

    VAR_10 = VAR_12->read;
    VAR_11 = VAR_12->write;

    VAR_10->log = VAR_5->log;
    VAR_11->log = VAR_5->log;

    VAR_10->channel = 1;
    VAR_11->channel = 1;

    VAR_9 = (VAR_7 == VAR_2) ? VAR_10 : VAR_11;

    VAR_9->handler = VAR_8;

    if (&FUNC_0 && (VAR_4 & VAR_3) == 0) {
        if (FUNC_0(VAR_12) == VAR_0) {
            FUNC_2(VAR_12);
            return VAR_0;
        }

    } else {
        if (FUNC_1(VAR_9, VAR_7, 0) == VAR_0) {
            FUNC_2(VAR_12);
            return VAR_0;
        }
    }

    return VAR_1;
}
