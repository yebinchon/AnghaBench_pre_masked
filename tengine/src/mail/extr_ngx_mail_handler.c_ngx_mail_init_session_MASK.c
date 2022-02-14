
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * ctx; int protocol; } ;
typedef TYPE_3__ ngx_mail_session_t ;
struct TYPE_15__ {TYPE_2__* protocol; } ;
typedef TYPE_4__ ngx_mail_core_srv_conf_t ;
struct TYPE_16__ {TYPE_1__* write; int pool; TYPE_3__* data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_13__ {int (* init_session ) (TYPE_3__*,TYPE_5__*) ;int type; } ;
struct TYPE_12__ {int handler; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_4(ngx_connection_t *VAR_3)
{
    ngx_mail_session_t *VAR_4;
    ngx_mail_core_srv_conf_t *VAR_5;

    VAR_4 = VAR_3->data;

    VAR_5 = FUNC_0(VAR_4, VAR_0);

    VAR_4->protocol = VAR_5->protocol->type;

    VAR_4->ctx = FUNC_2(VAR_3->pool, sizeof(void *) * VAR_1);
    if (VAR_4->ctx == ((void*)0)) {
        FUNC_1(VAR_4);
        return;
    }

    VAR_3->write->handler = VAR_2;

    VAR_5->protocol->init_session(VAR_4, VAR_3);
}
