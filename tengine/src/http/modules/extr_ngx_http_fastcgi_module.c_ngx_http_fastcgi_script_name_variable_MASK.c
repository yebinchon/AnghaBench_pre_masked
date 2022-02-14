
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_16__ {int len; int valid; char* data; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_17__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_15__ {int len; int data; } ;
struct TYPE_18__ {TYPE_2__ index; } ;
typedef TYPE_5__ ngx_http_fastcgi_loc_conf_t ;
struct TYPE_14__ {int len; char* data; } ;
struct TYPE_19__ {TYPE_1__ script_name; } ;
typedef TYPE_6__ ngx_http_fastcgi_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,char*,int) ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 char* FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    u_char *VAR_6;
    ngx_http_fastcgi_ctx_t *VAR_7;
    ngx_http_fastcgi_loc_conf_t *VAR_8;

    VAR_8 = FUNC_2(VAR_3, VAR_2);

    VAR_7 = FUNC_1(VAR_3, VAR_8);

    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_7->script_name.len == 0
        || VAR_7->script_name.data[VAR_7->script_name.len - 1] != '/')
    {
        VAR_4->len = VAR_7->script_name.len;
        VAR_4->valid = 1;
        VAR_4->no_cacheable = 0;
        VAR_4->not_found = 0;
        VAR_4->data = VAR_7->script_name.data;

        return VAR_1;
    }

    VAR_4->len = VAR_7->script_name.len + VAR_8->index.len;

    VAR_4->data = FUNC_4(VAR_3->pool, VAR_4->len);
    if (VAR_4->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_4->data, VAR_7->script_name.data, VAR_7->script_name.len);
    FUNC_3(VAR_6, VAR_8->index.data, VAR_8->index.len);

    return VAR_1;
}
