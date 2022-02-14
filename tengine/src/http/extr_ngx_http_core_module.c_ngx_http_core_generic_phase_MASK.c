
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {int phase_handler; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ (* handler ) (TYPE_2__*) ;int next; } ;
typedef TYPE_3__ ngx_http_phase_handler_t ;
struct TYPE_8__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

ngx_int_t
FUNC_3(ngx_http_request_t *VAR_5, ngx_http_phase_handler_t *VAR_6)
{
    ngx_int_t VAR_7;






    FUNC_1(VAR_3, VAR_5->connection->log, 0,
                   "generic phase: %ui", VAR_5->phase_handler);

    VAR_7 = VAR_6->handler(VAR_5);

    if (VAR_7 == VAR_4) {
        VAR_5->phase_handler = VAR_6->next;
        return VAR_0;
    }

    if (VAR_7 == VAR_1) {
        VAR_5->phase_handler++;
        return VAR_0;
    }

    if (VAR_7 == VAR_0 || VAR_7 == VAR_2) {
        return VAR_4;
    }



    FUNC_0(VAR_5, VAR_7);

    return VAR_4;
}
