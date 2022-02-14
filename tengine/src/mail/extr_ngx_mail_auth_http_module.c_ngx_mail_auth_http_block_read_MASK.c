
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_mail_session_t ;
struct TYPE_8__ {int connection; } ;
struct TYPE_9__ {int pool; TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_mail_auth_http_ctx_t ;
struct TYPE_10__ {TYPE_4__* data; int log; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_11__ {int * data; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ngx_event_t *VAR_3)
{
    ngx_connection_t *VAR_4;
    ngx_mail_session_t *VAR_5;
    ngx_mail_auth_http_ctx_t *VAR_6;

    FUNC_3(VAR_0, VAR_3->log, 0,
                   "mail auth http block read");

    if (FUNC_2(VAR_3, 0) != VAR_1) {
        VAR_4 = VAR_3->data;
        VAR_5 = VAR_4->data;

        VAR_6 = FUNC_4(VAR_5, VAR_2);

        FUNC_0(VAR_6->peer.connection);
        FUNC_1(VAR_6->pool);
        FUNC_5(VAR_5);
    }
}
