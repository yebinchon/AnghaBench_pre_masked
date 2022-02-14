
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int socklen_t ;
typedef int ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_9__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_1__ ngx_http_lua_loc_conf_t ;
struct TYPE_10__ {int kq_errno; scalar_t__ pending_eof; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_11__ {int fd; TYPE_2__* read; TYPE_2__* write; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_2__*,scalar_t__,TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,void*,int*) ;
 int FUNC_2 (TYPE_3__*,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_7, ngx_connection_t *VAR_8)
{
    int VAR_9;
    socklen_t VAR_10;

    ngx_http_lua_loc_conf_t *VAR_11;
    {
        VAR_9 = 0;
        VAR_10 = sizeof(int);






        if (FUNC_1(VAR_8->fd, VAR_2, VAR_3, (void *) &VAR_9, &VAR_10)
            == -1)
        {
            VAR_9 = VAR_4;
        }

        if (VAR_9) {
            VAR_11 = FUNC_3(VAR_7, VAR_6);
            if (VAR_11->log_socket_errors) {
                (void) FUNC_2(VAR_8, VAR_9, "connect() failed");
            }
            return VAR_9;
        }
    }

    return VAR_0;
}
