
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int data; int len; } ;
struct TYPE_12__ {TYPE_1__ value; } ;
typedef TYPE_4__ ngx_http_v2_header_t ;
struct TYPE_13__ {TYPE_2__* stream; int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;
typedef int ngx_array_t ;
struct TYPE_10__ {int * cookies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_3__* FUNC_1 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2, ngx_http_v2_header_t *VAR_3)
{
    ngx_str_t *VAR_4;
    ngx_array_t *VAR_5;

    VAR_5 = VAR_2->stream->cookies;

    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_0(VAR_2->pool, 2, sizeof(ngx_str_t));
        if (VAR_5 == ((void*)0)) {
            return VAR_0;
        }

        VAR_2->stream->cookies = VAR_5;
    }

    VAR_4 = FUNC_1(VAR_5);
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->len = VAR_3->value.len;
    VAR_4->data = VAR_3->value.data;

    return VAR_1;
}
