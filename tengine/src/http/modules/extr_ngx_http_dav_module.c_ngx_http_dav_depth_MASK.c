
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int len; char* data; } ;
struct TYPE_9__ {TYPE_5__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {TYPE_3__* depth; } ;
struct TYPE_10__ {TYPE_1__* connection; TYPE_2__ headers_in; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3, ngx_int_t VAR_4)
{
    ngx_table_elt_t *VAR_5;

    VAR_5 = VAR_3->headers_in.depth;

    if (VAR_5 == ((void*)0)) {
        return VAR_4;
    }

    if (VAR_5->value.len == 1) {

        if (VAR_5->value.data[0] == '0') {
            return 0;
        }

        if (VAR_5->value.data[0] == '1') {
            return 1;
        }

    } else {

        if (VAR_5->value.len == sizeof("infinity") - 1
            && FUNC_1(VAR_5->value.data, "infinity") == 0)
        {
            return VAR_0;
        }
    }

    FUNC_0(VAR_2, VAR_3->connection->log, 0,
                  "client sent invalid \"Depth\" header: \"%V\"",
                  &VAR_5->value);

    return VAR_1;
}
