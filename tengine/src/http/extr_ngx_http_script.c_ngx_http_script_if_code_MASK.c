
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ next; scalar_t__ loc_conf; } ;
typedef TYPE_3__ ngx_http_script_if_code_t ;
struct TYPE_10__ {scalar_t__ ip; TYPE_5__* request; TYPE_1__* sp; } ;
typedef TYPE_4__ ngx_http_script_engine_t ;
struct TYPE_11__ {TYPE_2__* connection; scalar_t__ loc_conf; } ;
struct TYPE_8__ {int log; } ;
struct TYPE_7__ {int len; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;

void
FUNC_2(ngx_http_script_engine_t *VAR_1)
{
    ngx_http_script_if_code_t *VAR_2;

    VAR_2 = (ngx_http_script_if_code_t *) VAR_1->ip;

    FUNC_1(VAR_0, VAR_1->request->connection->log, 0,
                   "http script if");

    VAR_1->sp--;

    if (VAR_1->sp->len && (VAR_1->sp->len != 1 || VAR_1->sp->data[0] != '0')) {
        if (VAR_2->loc_conf) {
            VAR_1->request->loc_conf = VAR_2->loc_conf;
            FUNC_0(VAR_1->request);
        }

        VAR_1->ip += sizeof(ngx_http_script_if_code_t);
        return;
    }

    FUNC_1(VAR_0, VAR_1->request->connection->log, 0,
                   "http script if: false");

    VAR_1->ip += VAR_2->next;
}
