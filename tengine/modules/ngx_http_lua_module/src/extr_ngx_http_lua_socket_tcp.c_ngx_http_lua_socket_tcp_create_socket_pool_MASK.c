
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_15__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_17__ {int backlog; int size; int free; scalar_t__ key; int cache; int wait_connect_op; int cache_connect_op; int lua_vm; scalar_t__ connections; } ;
typedef TYPE_4__ ngx_http_lua_socket_pool_t ;
struct TYPE_18__ {TYPE_4__* socket_pool; int queue; } ;
typedef TYPE_5__ ngx_http_lua_socket_pool_item_t ;
typedef int lua_State ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_5__*) ;
 int FUNC_1 (int *,char*) ;
 TYPE_4__* FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 size_t FUNC_8 (int ,int) ;
 void* FUNC_9 (TYPE_5__*,int) ;
 int * FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_15 (int ,int ,int ,char*,int,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_18(lua_State *VAR_3, ngx_http_request_t *VAR_4,
    ngx_str_t VAR_5, ngx_int_t VAR_6, ngx_int_t VAR_7,
    ngx_http_lua_socket_pool_t **VAR_8)
{
    u_char *VAR_9;
    size_t VAR_10, VAR_11;
    ngx_int_t VAR_12;
    ngx_http_lua_socket_pool_t *VAR_13;
    ngx_http_lua_socket_pool_item_t *VAR_14;

    FUNC_15(VAR_1, VAR_4->connection->log, 0,
                   "lua tcp socket connection pool size: %i, backlog: %i",
                   VAR_6, VAR_7);

    VAR_11 = FUNC_8(VAR_5.len + 1, sizeof(void *));

    VAR_10 = sizeof(ngx_http_lua_socket_pool_t) - 1 + VAR_11
           + sizeof(ngx_http_lua_socket_pool_item_t) * VAR_6;





    VAR_13 = FUNC_2(VAR_3, VAR_10);
    if (VAR_13 == ((void*)0)) {
        FUNC_1(VAR_3, "no memory");
        return;
    }

    FUNC_4(VAR_3, FUNC_13(
                          VAR_2));
    FUNC_5(VAR_3, VAR_0);
    FUNC_7(VAR_3, -2);

    FUNC_14(VAR_1, VAR_4->connection->log, 0,
                   "lua tcp socket keepalive create connection pool for key"
                   " \"%V\"", &VAR_5);
    FUNC_6(VAR_3, -3);


    FUNC_3(VAR_3, 1);

    VAR_13->backlog = VAR_7;
    VAR_13->size = VAR_6;
    VAR_13->connections = 0;
    VAR_13->lua_vm = FUNC_12(VAR_4, ((void*)0));

    FUNC_16(&VAR_13->cache_connect_op);
    FUNC_16(&VAR_13->wait_connect_op);
    FUNC_16(&VAR_13->cache);
    FUNC_16(&VAR_13->free);

    VAR_9 = FUNC_10(VAR_13->key, VAR_5.data, VAR_5.len);
    *VAR_9++ = '\0';

    VAR_14 = (ngx_http_lua_socket_pool_item_t *) (VAR_13->key + VAR_11);

    FUNC_0("items: %p", VAR_14);

    FUNC_11((void *) VAR_14 == FUNC_9(VAR_14, sizeof(void *)));

    for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
        FUNC_17(&VAR_13->free, &VAR_14[VAR_12].queue);
        VAR_14[VAR_12].socket_pool = VAR_13;
    }

    *VAR_8 = VAR_13;
}
