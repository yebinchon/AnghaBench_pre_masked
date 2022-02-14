
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int header_only; int method_name; int method; int args; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_11__ {TYPE_1__* mirror; } ;
typedef TYPE_3__ ngx_http_mirror_loc_conf_t ;
struct TYPE_9__ {size_t nelts; int * elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *,TYPE_2__**,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_5)
{
    ngx_str_t *VAR_6;
    ngx_uint_t VAR_7;
    ngx_http_request_t *VAR_8;
    ngx_http_mirror_loc_conf_t *VAR_9;

    VAR_9 = FUNC_0(VAR_5, VAR_4);

    VAR_6 = VAR_9->mirror->elts;

    for (VAR_7 = 0; VAR_7 < VAR_9->mirror->nelts; VAR_7++) {
        if (FUNC_1(VAR_5, &VAR_6[VAR_7], &VAR_5->args, &VAR_8, ((void*)0),
                                VAR_2)
            != VAR_3)
        {
            return VAR_1;
        }

        VAR_8->header_only = 1;
        VAR_8->method = VAR_5->method;
        VAR_8->method_name = VAR_5->method_name;
    }

    return VAR_0;
}
