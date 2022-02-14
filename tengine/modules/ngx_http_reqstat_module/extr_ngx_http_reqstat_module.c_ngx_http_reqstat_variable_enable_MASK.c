
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_8__ {int len; int valid; int * data; scalar_t__ no_cacheable; scalar_t__ not_found; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ bypass; } ;
typedef TYPE_3__ ngx_http_reqstat_store_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int * FUNC_1 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    u_char *VAR_6;
    ngx_http_reqstat_store_t *VAR_7;

    VAR_6 = FUNC_1(VAR_3->pool, 1 + sizeof(uintptr_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->len = 1;
    VAR_4->valid = 1;
    VAR_4->not_found = 0;
    VAR_4->no_cacheable = 0;
    VAR_4->data = VAR_6;

    VAR_7 = FUNC_0(VAR_3, VAR_2);
    if (VAR_7 == ((void*)0) || VAR_7->bypass) {
        *VAR_6 = '0';

    } else {
        *VAR_6++ = '1';
        *((uintptr_t *) VAR_6) = (uintptr_t) VAR_7;
    }

    return VAR_1;
}
