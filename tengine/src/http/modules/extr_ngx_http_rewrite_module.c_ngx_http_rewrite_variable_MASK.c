
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int data; int len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {scalar_t__ index; int code; } ;
typedef TYPE_2__ ngx_http_script_var_code_t ;
struct TYPE_13__ {int codes; } ;
typedef TYPE_3__ ngx_http_rewrite_loc_conf_t ;
struct TYPE_14__ {int pool; } ;
typedef TYPE_4__ ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_4, ngx_http_rewrite_loc_conf_t *VAR_5,
    ngx_str_t *VAR_6)
{
    ngx_int_t VAR_7;
    ngx_http_script_var_code_t *VAR_8;

    VAR_6->len--;
    VAR_6->data++;

    VAR_7 = FUNC_0(VAR_4, VAR_6);

    if (VAR_7 == VAR_2) {
        return VAR_0;
    }

    VAR_8 = FUNC_1(VAR_4->pool, &VAR_5->codes,
                                          sizeof(ngx_http_script_var_code_t));
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->code = VAR_3;
    VAR_8->index = VAR_7;

    return VAR_1;
}
