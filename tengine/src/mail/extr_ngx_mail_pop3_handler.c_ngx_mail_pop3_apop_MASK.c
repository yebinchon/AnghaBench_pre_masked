
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_17__ {int data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_15__ {int len; int * data; } ;
struct TYPE_14__ {int len; int * data; } ;
struct TYPE_16__ {int nelts; TYPE_2__* elts; } ;
struct TYPE_18__ {int auth_method; TYPE_13__ passwd; TYPE_12__ login; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
struct TYPE_19__ {int auth_methods; } ;
typedef TYPE_4__ ngx_mail_pop3_srv_conf_t ;
typedef int ngx_int_t ;
struct TYPE_20__ {int log; int pool; } ;
typedef TYPE_5__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_12__*,TYPE_13__*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (int *,int ,int ) ;
 void* FUNC_4 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_mail_session_t *VAR_7, ngx_connection_t *VAR_8)
{
    ngx_str_t *VAR_9;
    ngx_mail_pop3_srv_conf_t *VAR_10;







    if (VAR_7->args.nelts != 2) {
        return VAR_5;
    }

    VAR_10 = FUNC_1(VAR_7, VAR_6);

    if (!(VAR_10->auth_methods & VAR_4)) {
        return VAR_5;
    }

    VAR_9 = VAR_7->args.elts;

    VAR_7->login.len = VAR_9[0].len;
    VAR_7->login.data = FUNC_4(VAR_8->pool, VAR_7->login.len);
    if (VAR_7->login.data == ((void*)0)) {
        return VAR_1;
    }

    FUNC_3(VAR_7->login.data, VAR_9[0].data, VAR_7->login.len);

    VAR_7->passwd.len = VAR_9[1].len;
    VAR_7->passwd.data = FUNC_4(VAR_8->pool, VAR_7->passwd.len);
    if (VAR_7->passwd.data == ((void*)0)) {
        return VAR_1;
    }

    FUNC_3(VAR_7->passwd.data, VAR_9[1].data, VAR_7->passwd.len);

    FUNC_0(VAR_2, VAR_8->log, 0,
                   "pop3 apop: \"%V\" \"%V\"", &VAR_7->login, &VAR_7->passwd);

    VAR_7->auth_method = VAR_3;

    return VAR_0;
}
