
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {char* data; size_t len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_socket_t ;
struct TYPE_10__ {scalar_t__ http_version; int pool; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_8__ {scalar_t__ fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__,TYPE_2__,int) ;
 int FUNC_1 (char*,int const*,size_t) ;
 void* FUNC_2 (int ,size_t) ;

int
FUNC_3(ngx_http_request_t *VAR_5,
    const u_char *VAR_6, size_t VAR_7, const u_char *VAR_8, size_t VAR_9)
{
    ngx_str_t VAR_10;
    ngx_str_t VAR_11;

    if (VAR_5->connection->fd == (ngx_socket_t) -1) {
        return VAR_2;
    }

    if (VAR_5->http_version < VAR_3) {
        return VAR_0;
    }

    VAR_10.data = FUNC_2(VAR_5->pool, VAR_7 + 1);
    if (VAR_10.data == ((void*)0)) {
        return VAR_1;
    }
    FUNC_1(VAR_10.data, VAR_6, VAR_7);
    VAR_10.data[VAR_7] = '\0';

    VAR_10.len = VAR_7;

    if (VAR_9 == 0) {
        VAR_11.data = ((void*)0);
        VAR_11.len = 0;

    } else {
        VAR_11.data = FUNC_2(VAR_5->pool, VAR_9 + 1);
        if (VAR_11.data == ((void*)0)) {
            return VAR_1;
        }
        FUNC_1(VAR_11.data, VAR_8, VAR_9);
        VAR_11.data[VAR_9] = '\0';
    }

    VAR_11.len = VAR_9;

    if (FUNC_0(VAR_5, VAR_10, VAR_11, 1 )
        != VAR_4)
    {
        return VAR_1;
    }

    return VAR_4;
}
