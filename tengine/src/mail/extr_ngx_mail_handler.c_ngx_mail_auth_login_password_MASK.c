
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_10__ {TYPE_2__* elts; } ;
struct TYPE_12__ {TYPE_2__ passwd; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {int log; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int * FUNC_4 (int ,int ) ;

ngx_int_t
FUNC_5(ngx_mail_session_t *VAR_6, ngx_connection_t *VAR_7)
{
    ngx_str_t *VAR_8;

    VAR_8 = VAR_6->args.elts;






    VAR_6->passwd.data = FUNC_4(VAR_7->pool,
                                 FUNC_0(VAR_8[0].len));
    if (VAR_6->passwd.data == ((void*)0)) {
        return VAR_1;
    }

    if (FUNC_1(&VAR_6->passwd, &VAR_8[0]) != VAR_5) {
        FUNC_3(VAR_3, VAR_7->log, 0,
            "client sent invalid base64 encoding in AUTH LOGIN command");
        return VAR_4;
    }






    return VAR_0;
}
