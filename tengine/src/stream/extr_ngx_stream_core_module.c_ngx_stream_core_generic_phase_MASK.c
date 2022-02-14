
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int phase_handler; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_stream_session_t ;
struct TYPE_10__ {scalar_t__ (* handler ) (TYPE_2__*) ;int next; } ;
typedef TYPE_3__ ngx_stream_phase_handler_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

ngx_int_t
FUNC_3(ngx_stream_session_t *VAR_7,
    ngx_stream_phase_handler_t *VAR_8)
{
    ngx_int_t VAR_9;






    FUNC_0(VAR_4, VAR_7->connection->log, 0,
                   "generic phase: %ui", VAR_7->phase_handler);

    VAR_9 = VAR_8->handler(VAR_7);

    if (VAR_9 == VAR_5) {
        VAR_7->phase_handler = VAR_8->next;
        return VAR_0;
    }

    if (VAR_9 == VAR_1) {
        VAR_7->phase_handler++;
        return VAR_0;
    }

    if (VAR_9 == VAR_0 || VAR_9 == VAR_2) {
        return VAR_5;
    }

    if (VAR_9 == VAR_3) {
        VAR_9 = VAR_6;
    }

    FUNC_1(VAR_7, VAR_9);

    return VAR_5;
}
