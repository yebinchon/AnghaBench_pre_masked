
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_16__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_mail_session_t ;
struct TYPE_14__ {int connection; int name; } ;
struct TYPE_17__ {int state; int (* handler ) (TYPE_4__*,TYPE_5__*) ;TYPE_3__* response; int pool; TYPE_2__ peer; } ;
typedef TYPE_5__ ngx_mail_auth_http_ctx_t ;
struct TYPE_15__ {char* pos; char* last; char* start; } ;
struct TYPE_13__ {int log; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_7(ngx_mail_session_t *VAR_2,
    ngx_mail_auth_http_ctx_t *VAR_3)
{
    u_char *VAR_4, VAR_5;
    enum {
        sw_start = 0,
        sw_H,
        sw_HT,
        sw_HTT,
        sw_HTTP,
        sw_skip,
        sw_almost_done
    } VAR_6;

    FUNC_2(VAR_0, VAR_2->connection->log, 0,
                   "mail auth http process status line");

    VAR_6 = VAR_3->state;

    for (VAR_4 = VAR_3->response->pos; VAR_4 < VAR_3->response->last; VAR_4++) {
        VAR_5 = *VAR_4;

        switch (VAR_6) {


        case sw_start:
            if (VAR_5 == 'H') {
                VAR_6 = sw_H;
                break;
            }
            goto next;

        case sw_H:
            if (VAR_5 == 'T') {
                VAR_6 = sw_HT;
                break;
            }
            goto next;

        case sw_HT:
            if (VAR_5 == 'T') {
                VAR_6 = sw_HTT;
                break;
            }
            goto next;

        case sw_HTT:
            if (VAR_5 == 'P') {
                VAR_6 = sw_HTTP;
                break;
            }
            goto next;

        case sw_HTTP:
            if (VAR_5 == '/') {
                VAR_6 = sw_skip;
                break;
            }
            goto next;


        case sw_skip:
            switch (VAR_5) {
            case 129:
                VAR_6 = sw_almost_done;

                break;
            case 128:
                goto done;
            }
            break;


        case sw_almost_done:
            if (VAR_5 == 128) {
                goto done;
            }

            FUNC_3(VAR_1, VAR_2->connection->log, 0,
                          "auth http server %V sent invalid response",
                          VAR_3->peer.name);
            FUNC_0(VAR_3->peer.connection);
            FUNC_1(VAR_3->pool);
            FUNC_5(VAR_2);
            return;
        }
    }

    VAR_3->response->pos = VAR_4;
    VAR_3->state = VAR_6;

    return;

next:

    VAR_4 = VAR_3->response->start - 1;

done:

    VAR_3->response->pos = VAR_4 + 1;
    VAR_3->state = 0;
    VAR_3->handler = FUNC_4;
    VAR_3->handler(VAR_2, VAR_3);
}
