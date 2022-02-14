
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
typedef scalar_t__ ngx_socket_t ;
struct TYPE_6__ {char* data; int len; } ;
struct TYPE_7__ {TYPE_2__ args; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_5__ {scalar_t__ fd; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;

int
FUNC_1(ngx_http_request_t *VAR_3, int VAR_4,
    int *VAR_5)
{
    int VAR_6;
    u_char *VAR_7, *VAR_8;

    if (VAR_3->connection->fd == (ngx_socket_t) -1) {
        return VAR_0;
    }

    *VAR_5 = 0;

    if (VAR_4 < 0) {
        VAR_4 = VAR_1;
    }

    VAR_8 = VAR_3->args.data + VAR_3->args.len;
    VAR_6 = 0;

    for (VAR_7 = VAR_3->args.data; VAR_7 != VAR_8; VAR_7++) {
        if (*VAR_7 == '&') {
            if (VAR_6 == 0) {
                VAR_6 += 2;

            } else {
                VAR_6++;
            }
        }
    }

    if (VAR_6) {
        if (VAR_4 > 0 && VAR_6 > VAR_4) {
            VAR_6 = VAR_4;
            *VAR_5 = 1;
            FUNC_0(VAR_2, VAR_3->connection->log, 0,
                           "lua hit query args limit %d", VAR_4);
        }

        return VAR_6;
    }

    if (VAR_3->args.len) {
        return 1;
    }

    return 0;
}
