
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_17__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_18__ {int auth_methods; } ;
typedef TYPE_4__ ngx_mail_smtp_srv_conf_t ;
struct TYPE_14__ {int * data; scalar_t__ len; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {int nelts; TYPE_3__* elts; } ;
struct TYPE_19__ {int out; TYPE_13__ smtp_from; TYPE_2__ cmd; TYPE_1__ args; } ;
typedef TYPE_5__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_20__ {int log; int pool; } ;
typedef TYPE_6__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_13__*) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*,char*) ;
 int VAR_4 ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int * FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_mail_session_t *VAR_9, ngx_connection_t *VAR_10)
{
    ngx_str_t *VAR_11, VAR_12;
    ngx_mail_smtp_srv_conf_t *VAR_13;

    VAR_13 = FUNC_1(VAR_9, VAR_4);

    if (!(VAR_13->auth_methods & VAR_2)) {
        FUNC_2(VAR_9, VAR_10, "client was rejected: \"%V\"");
        FUNC_5(&VAR_9->out, VAR_5);
        return VAR_3;
    }



    if (VAR_9->smtp_from.len) {
        FUNC_5(&VAR_9->out, VAR_6);
        return VAR_3;
    }

    if (VAR_9->args.nelts == 0) {
        FUNC_5(&VAR_9->out, VAR_7);
        return VAR_3;
    }

    VAR_11 = VAR_9->args.elts;
    VAR_11 += VAR_9->args.nelts - 1;

    VAR_12.len = VAR_11->data + VAR_11->len - VAR_9->cmd.data;
    VAR_12.data = VAR_9->cmd.data;

    VAR_9->smtp_from.len = VAR_12.len;

    VAR_9->smtp_from.data = FUNC_4(VAR_10->pool, VAR_12.len);
    if (VAR_9->smtp_from.data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(VAR_9->smtp_from.data, VAR_12.data, VAR_12.len);

    FUNC_0(VAR_1, VAR_10->log, 0,
                   "smtp mail from:\"%V\"", &VAR_9->smtp_from);

    FUNC_5(&VAR_9->out, VAR_8);

    return VAR_3;
}
