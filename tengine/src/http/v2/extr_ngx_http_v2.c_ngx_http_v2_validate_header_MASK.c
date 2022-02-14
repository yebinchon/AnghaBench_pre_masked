
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {size_t len; char* data; } ;
struct TYPE_16__ {char* data; size_t len; } ;
struct TYPE_13__ {TYPE_2__ value; TYPE_6__ name; } ;
typedef TYPE_3__ ngx_http_v2_header_t ;
struct TYPE_14__ {int invalid_header; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ underscores_in_headers; } ;
typedef TYPE_5__ ngx_http_core_srv_conf_t ;
struct TYPE_11__ {int log; } ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_6__*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_6, ngx_http_v2_header_t *VAR_7)
{
    u_char VAR_8;
    ngx_uint_t VAR_9;
    ngx_http_core_srv_conf_t *VAR_10;

    VAR_6->invalid_header = 0;

    VAR_10 = FUNC_0(VAR_6, VAR_5);

    for (VAR_9 = (VAR_7->name.data[0] == ':'); VAR_9 != VAR_7->name.len; VAR_9++) {
        VAR_8 = VAR_7->name.data[VAR_9];

        if ((VAR_8 >= 'a' && VAR_8 <= 'z')
            || (VAR_8 == '-')
            || (VAR_8 >= '0' && VAR_8 <= '9')
            || (VAR_8 == '_' && VAR_10->underscores_in_headers))
        {
            continue;
        }

        if (VAR_8 == '\0' || VAR_8 == VAR_1 || VAR_8 == VAR_0 || VAR_8 == ':'
            || (VAR_8 >= 'A' && VAR_8 <= 'Z'))
        {
            FUNC_1(VAR_3, VAR_6->connection->log, 0,
                          "client sent invalid header name: \"%V\"",
                          &VAR_7->name);

            return VAR_2;
        }

        VAR_6->invalid_header = 1;
    }

    for (VAR_9 = 0; VAR_9 != VAR_7->value.len; VAR_9++) {
        VAR_8 = VAR_7->value.data[VAR_9];

        if (VAR_8 == '\0' || VAR_8 == VAR_1 || VAR_8 == VAR_0) {
            FUNC_1(VAR_3, VAR_6->connection->log, 0,
                          "client sent header \"%V\" with "
                          "invalid value: \"%V\"",
                          &VAR_7->name, &VAR_7->value);

            return VAR_2;
        }
    }

    return VAR_4;
}
