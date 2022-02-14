
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {int * data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_10__ {TYPE_2__* elts; } ;
struct TYPE_12__ {int auth_method; TYPE_2__ login; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {int log; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int * FUNC_4 (int ,int ) ;

ngx_int_t
FUNC_5(ngx_mail_session_t *VAR_7, ngx_connection_t *VAR_8,
    ngx_uint_t VAR_9)
{
    ngx_str_t *VAR_10, VAR_11;

    VAR_10 = VAR_7->args.elts;

    FUNC_2(VAR_2, VAR_8->log, 0,
                   "mail auth external: \"%V\"", &VAR_10[VAR_9]);

    VAR_11.data = FUNC_4(VAR_8->pool, FUNC_0(VAR_10[VAR_9].len));
    if (VAR_11.data == ((void*)0)) {
        return VAR_1;
    }

    if (FUNC_1(&VAR_11, &VAR_10[VAR_9]) != VAR_6) {
        FUNC_3(VAR_3, VAR_8->log, 0,
            "client sent invalid base64 encoding in AUTH EXTERNAL command");
        return VAR_5;
    }

    VAR_7->login.len = VAR_11.len;
    VAR_7->login.data = VAR_11.data;

    FUNC_2(VAR_2, VAR_8->log, 0,
                   "mail auth external: \"%V\"", &VAR_7->login);

    VAR_7->auth_method = VAR_4;

    return VAR_0;
}
