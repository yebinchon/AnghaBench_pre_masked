
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_12__ {int len; int * data; } ;
struct TYPE_8__ {int nelts; TYPE_2__* elts; } ;
struct TYPE_10__ {TYPE_7__ passwd; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int log; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_7__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_mail_session_t *VAR_4, ngx_connection_t *VAR_5)
{
    ngx_str_t *VAR_6;

    if (VAR_4->args.nelts != 1) {
        return VAR_3;
    }

    VAR_6 = VAR_4->args.elts;
    VAR_4->passwd.len = VAR_6[0].len;
    VAR_4->passwd.data = FUNC_2(VAR_5->pool, VAR_4->passwd.len);
    if (VAR_4->passwd.data == ((void*)0)) {
        return VAR_1;
    }

    FUNC_1(VAR_4->passwd.data, VAR_6[0].data, VAR_4->passwd.len);






    return VAR_0;
}
