
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int len; int valid; int * data; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_9__ {int pool; int connection; } ;
typedef TYPE_3__ ngx_http_request_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    ngx_str_t VAR_6;
    u_char VAR_7[VAR_2];

    VAR_6.len = VAR_2;
    VAR_6.data = VAR_7;

    if (FUNC_0(VAR_3->connection, &VAR_6, 0) != VAR_1) {
        return VAR_0;
    }

    VAR_6.data = FUNC_2(VAR_3->pool, VAR_6.len);
    if (VAR_6.data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(VAR_6.data, VAR_7, VAR_6.len);

    VAR_4->len = VAR_6.len;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;
    VAR_4->data = VAR_6.data;

    return VAR_1;
}
