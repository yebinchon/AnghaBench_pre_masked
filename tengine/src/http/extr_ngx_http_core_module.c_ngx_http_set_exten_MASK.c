
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_5__ {int len; char* data; } ;
struct TYPE_7__ {int len; char* data; } ;
struct TYPE_6__ {TYPE_1__ uri; TYPE_3__ exten; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int FUNC_0 (TYPE_3__*) ;

void
FUNC_1(ngx_http_request_t *VAR_0)
{
    ngx_int_t VAR_1;

    FUNC_0(&VAR_0->exten);

    for (VAR_1 = VAR_0->uri.len - 1; VAR_1 > 1; VAR_1--) {
        if (VAR_0->uri.data[VAR_1] == '.' && VAR_0->uri.data[VAR_1 - 1] != '/') {

            VAR_0->exten.len = VAR_0->uri.len - VAR_1 - 1;
            VAR_0->exten.data = &VAR_0->uri.data[VAR_1 + 1];

            return;

        } else if (VAR_0->uri.data[VAR_1] == '/') {
            return;
        }
    }

    return;
}
