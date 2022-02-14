
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_int_t ;
typedef int ngx_http_userid_ctx_t ;
struct TYPE_11__ {scalar_t__ enable; } ;
typedef TYPE_1__ ngx_http_userid_conf_t ;
struct TYPE_12__ {struct TYPE_12__* main; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int * FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_4)
{
    ngx_http_userid_ctx_t *VAR_5;
    ngx_http_userid_conf_t *VAR_6;

    if (VAR_4 != VAR_4->main) {
        return FUNC_1(VAR_4);
    }

    VAR_6 = FUNC_0(VAR_4, VAR_3);

    if (VAR_6->enable < VAR_1) {
        return FUNC_1(VAR_4);
    }

    VAR_5 = FUNC_2(VAR_4, VAR_6);

    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    if (FUNC_3(VAR_4, VAR_5, VAR_6) == VAR_2) {
        return FUNC_1(VAR_4);
    }

    return VAR_0;
}
