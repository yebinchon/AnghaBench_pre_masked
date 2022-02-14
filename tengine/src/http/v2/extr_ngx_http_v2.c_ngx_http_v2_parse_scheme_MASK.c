
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_7__ {scalar_t__ len; int* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {TYPE_2__ schema; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3, ngx_str_t *VAR_4)
{
    u_char VAR_5, VAR_6;
    ngx_uint_t VAR_7;

    if (VAR_3->schema.len) {
        FUNC_0(VAR_1, VAR_3->connection->log, 0,
                      "client sent duplicate :scheme header");

        return VAR_0;
    }

    if (VAR_4->len == 0) {
        FUNC_0(VAR_1, VAR_3->connection->log, 0,
                      "client sent empty :scheme header");

        return VAR_0;
    }

    for (VAR_7 = 0; VAR_7 < VAR_4->len; VAR_7++) {
        VAR_6 = VAR_4->data[VAR_7];

        VAR_5 = (u_char) (VAR_6 | 0x20);
        if (VAR_5 >= 'a' && VAR_5 <= 'z') {
            continue;
        }

        if (((VAR_6 >= '0' && VAR_6 <= '9') || VAR_6 == '+' || VAR_6 == '-' || VAR_6 == '.')
            && VAR_7 > 0)
        {
            continue;
        }

        FUNC_0(VAR_1, VAR_3->connection->log, 0,
                      "client sent invalid :scheme header: \"%V\"", VAR_4);

        return VAR_0;
    }

    VAR_3->schema = *VAR_4;

    return VAR_2;
}
