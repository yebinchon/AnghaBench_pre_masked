
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int read_event_handler; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_18__ {int ft_type; int no_close; scalar_t__ bufs_in; scalar_t__ body_downstream; scalar_t__ raw_downstream; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_19__ {scalar_t__ check_client_abort; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
typedef int ngx_http_lua_ctx_t ;
struct TYPE_20__ {scalar_t__ active; } ;
typedef TYPE_5__ ngx_event_t ;
typedef int lua_State ;
struct TYPE_16__ {TYPE_5__* read; int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_6 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_7 (TYPE_2__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (TYPE_2__*,int *,TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_10 (int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_11(ngx_http_request_t *VAR_10,
    ngx_http_lua_socket_tcp_upstream_t *VAR_11, lua_State *VAR_12)
{
    int VAR_13;
    ngx_int_t VAR_14;
    ngx_http_lua_ctx_t *VAR_15;
    ngx_event_t *VAR_16;

    ngx_http_lua_loc_conf_t *VAR_17;

    FUNC_10(VAR_2, VAR_10->connection->log, 0,
                   "lua tcp socket receive return value handler");

    VAR_15 = FUNC_6(VAR_10, VAR_8);


    if (VAR_11->raw_downstream || VAR_11->body_downstream) {
        VAR_17 = FUNC_7(VAR_10, VAR_8);

        if (VAR_17->check_client_abort) {

            VAR_10->read_event_handler = VAR_9;

            VAR_16 = VAR_10->connection->read;

            FUNC_0("rev active: %d", VAR_16->active);

            if ((VAR_6 & VAR_5) && !VAR_16->active) {
                if (FUNC_5(VAR_16, VAR_4, 0) != VAR_3) {
                    FUNC_2(VAR_12);
                    FUNC_1(VAR_12, "failed to add event");
                    return 2;
                }
            }

        } else {

            VAR_10->read_event_handler = VAR_7;
        }
    }


    if (VAR_11->ft_type) {

        if (VAR_11->ft_type & VAR_1) {
            VAR_11->no_close = 1;
        }

        FUNC_0("u->bufs_in: %p", VAR_11->bufs_in);

        if (VAR_11->bufs_in) {
            VAR_14 = FUNC_8(VAR_10, VAR_15, VAR_11, VAR_12);
            if (VAR_14 == VAR_0) {
                FUNC_2(VAR_12);
                FUNC_1(VAR_12, "no memory");
                return 2;
            }

            (void) FUNC_9(VAR_10, VAR_11, VAR_12);

            FUNC_3(VAR_12, -3);
            FUNC_4(VAR_12, -4);
            return 3;
        }

        VAR_13 = FUNC_9(VAR_10, VAR_11, VAR_12);
        FUNC_1(VAR_12, "");
        return VAR_13 + 1;
    }

    VAR_14 = FUNC_8(VAR_10, VAR_15, VAR_11, VAR_12);
    if (VAR_14 == VAR_0) {
        FUNC_2(VAR_12);
        FUNC_1(VAR_12, "no memory");
        return 2;
    }

    return 1;
}
