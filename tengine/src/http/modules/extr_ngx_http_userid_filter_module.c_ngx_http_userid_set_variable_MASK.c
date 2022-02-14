
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int not_found; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_14__ {scalar_t__* uid_set; } ;
typedef TYPE_2__ ngx_http_userid_ctx_t ;
struct TYPE_15__ {scalar_t__ enable; int name; } ;
typedef TYPE_3__ ngx_http_userid_conf_t ;
struct TYPE_16__ {int main; } ;
typedef TYPE_4__ ngx_http_request_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,TYPE_3__*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int *,scalar_t__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_4,
    ngx_http_variable_value_t *VAR_5, uintptr_t VAR_6)
{
    ngx_http_userid_ctx_t *VAR_7;
    ngx_http_userid_conf_t *VAR_8;

    VAR_8 = FUNC_0(VAR_4->main, VAR_3);

    if (VAR_8->enable < VAR_1) {
        VAR_5->not_found = 1;
        return VAR_2;
    }

    VAR_7 = FUNC_2(VAR_4->main, VAR_8);

    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    if (FUNC_1(VAR_4->main, VAR_7, VAR_8) != VAR_2) {
        return VAR_0;
    }

    if (VAR_7->uid_set[3] == 0) {
        VAR_5->not_found = 1;
        return VAR_2;
    }

    return FUNC_3(VAR_4->main, VAR_5, &VAR_8->name, VAR_7->uid_set);
}
