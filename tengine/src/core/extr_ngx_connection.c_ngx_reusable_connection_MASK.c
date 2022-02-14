
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef int ngx_queue_t ;
struct TYPE_4__ {int queue; scalar_t__ reusable; int log; } ;
typedef TYPE_1__ ngx_connection_t ;
struct TYPE_5__ {int reusable_connections_n; int reusable_connections_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

void
FUNC_4(ngx_connection_t *VAR_3, ngx_uint_t VAR_4)
{
    FUNC_1(VAR_0, VAR_3->log, 0,
                   "reusable connection: %ui", VAR_4);

    if (VAR_3->reusable) {
        FUNC_3(&VAR_3->queue);
        VAR_1->reusable_connections_n--;




    }

    VAR_3->reusable = VAR_4;

    if (VAR_4) {


        FUNC_2(
            (ngx_queue_t *) &VAR_1->reusable_connections_queue, &VAR_3->queue);
        VAR_1->reusable_connections_n++;




    }
}
