
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_6__ {int valid; int * data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_7__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    u_char *VAR_6;

    VAR_6 = FUNC_1(VAR_3->pool, VAR_2);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0(VAR_6, VAR_2,
               VAR_2);

    VAR_4->len = VAR_2;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;
    VAR_4->data = VAR_6;

    return VAR_1;
}
