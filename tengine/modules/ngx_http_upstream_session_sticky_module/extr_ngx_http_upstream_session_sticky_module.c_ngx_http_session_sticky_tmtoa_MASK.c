
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_5__ {size_t len; int* data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int* FUNC_0 (int ,size_t) ;

__attribute__((used)) static void
FUNC_1(ngx_http_request_t *VAR_0, ngx_str_t *VAR_1, time_t VAR_2)
{
    time_t VAR_3;
    ngx_uint_t VAR_4;

    VAR_4 = 0;
    VAR_3 = VAR_2;
    while (VAR_3) {
        VAR_4++;
        VAR_3 /= 10;
    }

    VAR_1->len = VAR_4;
    VAR_1->data = FUNC_0(VAR_0->pool, VAR_4);
    if (VAR_1->data == ((void*)0)) {
        return;
    }

    while (VAR_2) {
        VAR_1->data[--VAR_4] = VAR_2 % 10 + '0';
        VAR_2 /= 10;
    }
}
