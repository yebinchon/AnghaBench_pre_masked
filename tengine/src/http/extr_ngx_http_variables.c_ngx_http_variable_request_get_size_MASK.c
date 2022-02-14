
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_5__ {int valid; scalar_t__ not_found; scalar_t__ no_cacheable; int * data; int * len; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *,char*,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    size_t *VAR_6;

    VAR_6 = (size_t *) ((char *) VAR_3 + VAR_5);

    VAR_4->data = FUNC_0(VAR_3->pool, VAR_2);
    if (VAR_4->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->len = FUNC_1(VAR_4->data, "%uz", *VAR_6) - VAR_4->data;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;

    return VAR_1;
}
