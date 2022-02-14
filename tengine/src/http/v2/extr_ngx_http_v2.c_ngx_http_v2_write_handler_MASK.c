
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {int blocked; int * last_out; } ;
typedef TYPE_1__ ngx_http_v2_connection_t ;
struct TYPE_10__ {scalar_t__ timer_set; scalar_t__ timedout; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_11__ {int error; int buffered; int log; TYPE_1__* data; } ;
typedef TYPE_3__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_3)
{
    ngx_int_t VAR_4;
    ngx_connection_t *VAR_5;
    ngx_http_v2_connection_t *VAR_6;

    VAR_5 = VAR_3->data;
    VAR_6 = VAR_5->data;

    if (VAR_3->timedout) {
        FUNC_4(VAR_2, VAR_5->log, 0,
                       "http2 write event timed out");
        VAR_5->error = 1;
        FUNC_1(VAR_6, 0);
        return;
    }

    FUNC_4(VAR_2, VAR_5->log, 0, "http2 write handler");

    if (VAR_6->last_out == ((void*)0) && !VAR_5->buffered) {

        if (VAR_3->timer_set) {
            FUNC_0(VAR_3);
        }

        FUNC_2(VAR_6);
        return;
    }

    VAR_6->blocked = 1;

    VAR_4 = FUNC_3(VAR_6);

    if (VAR_4 == VAR_1) {
        FUNC_1(VAR_6, 0);
        return;
    }

    VAR_6->blocked = 0;

    if (VAR_4 == VAR_0) {
        return;
    }

    FUNC_2(VAR_6);
}
