
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ stream; TYPE_2__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_9__ {TYPE_7__* write; TYPE_6__* read; int log; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_11__ {int active; } ;
struct TYPE_10__ {scalar_t__ timer_set; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__) ;

void
FUNC_5(ngx_http_request_t *VAR_7)
{
    ngx_connection_t *VAR_8;

    VAR_8 = VAR_7->connection;

    FUNC_4(VAR_3, VAR_8->log, 0,
                   "http init upstream, client timer: %d", VAR_8->read->timer_set);
    if (VAR_8->read->timer_set) {
        FUNC_1(VAR_8->read);
    }

    if (VAR_6 & VAR_4) {

        if (!VAR_8->write->active) {
            if (FUNC_0(VAR_8->write, VAR_5, VAR_0)
                == VAR_1)
            {
                FUNC_2(VAR_7, VAR_2);
                return;
            }
        }
    }

    FUNC_3(VAR_7);
}
