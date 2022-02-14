
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ngx_msec_t ;
struct TYPE_12__ {int greeting; scalar_t__ greeting_delay; } ;
typedef TYPE_1__ ngx_mail_smtp_srv_conf_t ;
struct TYPE_13__ {int out; int host; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_14__ {scalar_t__ timeout; } ;
typedef TYPE_3__ ngx_mail_core_srv_conf_t ;
struct TYPE_15__ {int write; TYPE_5__* read; int log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_16__ {int handler; scalar_t__ ready; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_2 ;
 void* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(ngx_mail_session_t *VAR_7, ngx_connection_t *VAR_8)
{
    ngx_msec_t VAR_9;
    ngx_mail_core_srv_conf_t *VAR_10;
    ngx_mail_smtp_srv_conf_t *VAR_11;

    FUNC_2(VAR_0, VAR_8->log, 0,
                   "smtp greeting for \"%V\"", &VAR_7->host);

    VAR_10 = FUNC_4(VAR_7, VAR_2);
    VAR_11 = FUNC_4(VAR_7, VAR_5);

    VAR_9 = VAR_11->greeting_delay ? VAR_11->greeting_delay : VAR_10->timeout;
    FUNC_0(VAR_8->read, VAR_9);

    if (FUNC_1(VAR_8->read, 0) != VAR_1) {
        FUNC_3(VAR_8);
    }

    if (VAR_8->read->ready) {
        FUNC_6(VAR_8->read, &VAR_6);
    }

    if (VAR_11->greeting_delay) {
         VAR_8->read->handler = VAR_4;
         return;
    }

    VAR_8->read->handler = VAR_3;

    VAR_7->out = VAR_11->greeting;

    FUNC_5(VAR_8->write);
}
