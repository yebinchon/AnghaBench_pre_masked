
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_13__ {int len; scalar_t__* data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_17__ {int len; scalar_t__* data; } ;
struct TYPE_16__ {int len; scalar_t__* data; } ;
struct TYPE_12__ {TYPE_2__* elts; } ;
struct TYPE_14__ {TYPE_8__ passwd; TYPE_7__ login; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int log; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_7__*,TYPE_8__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 scalar_t__* FUNC_5 (int ,int ) ;

ngx_int_t
FUNC_6(ngx_mail_session_t *VAR_6, ngx_connection_t *VAR_7, ngx_uint_t VAR_8)
{
    u_char *VAR_9, *VAR_10;
    ngx_str_t *VAR_11, VAR_12;

    VAR_11 = VAR_6->args.elts;






    VAR_12.data = FUNC_5(VAR_7->pool, FUNC_0(VAR_11[VAR_8].len));
    if (VAR_12.data == ((void*)0)) {
        return VAR_1;
    }

    if (FUNC_1(&VAR_12, &VAR_11[VAR_8]) != VAR_5) {
        FUNC_4(VAR_3, VAR_7->log, 0,
            "client sent invalid base64 encoding in AUTH PLAIN command");
        return VAR_4;
    }

    VAR_9 = VAR_12.data;
    VAR_10 = VAR_9 + VAR_12.len;

    while (VAR_9 < VAR_10 && *VAR_9++) { }

    if (VAR_9 == VAR_10) {
        FUNC_4(VAR_3, VAR_7->log, 0,
                      "client sent invalid login in AUTH PLAIN command");
        return VAR_4;
    }

    VAR_6->login.data = VAR_9;

    while (VAR_9 < VAR_10 && *VAR_9) { VAR_9++; }

    if (VAR_9 == VAR_10) {
        FUNC_4(VAR_3, VAR_7->log, 0,
                      "client sent invalid password in AUTH PLAIN command");
        return VAR_4;
    }

    VAR_6->login.len = VAR_9++ - VAR_6->login.data;

    VAR_6->passwd.len = VAR_10 - VAR_9;
    VAR_6->passwd.data = VAR_9;






    return VAR_0;
}
