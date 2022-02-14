
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_10__ {int len; int* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int*,int,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3, ngx_str_t *VAR_4)
{
    u_char *VAR_5, VAR_6, VAR_7;
    ngx_uint_t VAR_8;

    if (FUNC_0(VAR_3, (u_char *) "callback", 8, VAR_4) != VAR_2) {
        VAR_4->len = 0;
        return VAR_2;
    }

    if (VAR_4->len > 128) {
        FUNC_1(VAR_1, VAR_3->connection->log, 0,
                      "client sent too long callback name: \"%V\"", VAR_4);
        return VAR_0;
    }

    VAR_5 = VAR_4->data;

    for (VAR_8 = 0; VAR_8 < VAR_4->len; VAR_8++) {
        VAR_7 = VAR_5[VAR_8];

        VAR_6 = (u_char) (VAR_7 | 0x20);
        if (VAR_6 >= 'a' && VAR_6 <= 'z') {
            continue;
        }

        if ((VAR_7 >= '0' && VAR_7 <= '9') || VAR_7 == '_' || VAR_7 == '.') {
            continue;
        }

        FUNC_1(VAR_1, VAR_3->connection->log, 0,
                      "client sent invalid callback name: \"%V\"", VAR_4);

        return VAR_0;
    }

    return VAR_2;
}
