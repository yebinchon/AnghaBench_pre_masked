
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_15__ {int len; TYPE_3__* data; } ;
struct TYPE_17__ {int co_ref; int * pool; int delay; int * co; TYPE_2__* vm_state; TYPE_1__ client_addr_text; TYPE_4__* lmcf; } ;
typedef TYPE_3__ ngx_http_lua_timer_ctx_t ;
struct TYPE_18__ {int pending_timers; int * lua; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
struct TYPE_19__ {int log; TYPE_3__* data; int handler; } ;
typedef TYPE_5__ ngx_event_t ;
typedef int lua_State ;
struct TYPE_16__ {int count; int * vm; } ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int,char*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (TYPE_5__*,int ) ;
 int * FUNC_15 (int,int ) ;
 int * FUNC_16 (int,int ) ;
 TYPE_12__* VAR_5 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int VAR_6 ;
 int FUNC_22 (int ,int ,int ,char*,int *,int ) ;
 int FUNC_23 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_24 (TYPE_5__*,int) ;
 TYPE_3__* FUNC_25 (int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_26(ngx_http_lua_timer_ctx_t *VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    u_char *VAR_11;
    lua_State *VAR_12;
    lua_State *VAR_13;
    lua_State *VAR_14;
    ngx_event_t *VAR_15 = ((void*)0);
    ngx_http_lua_timer_ctx_t *VAR_16 = ((void*)0);
    ngx_http_lua_main_conf_t *VAR_17;


    VAR_14 = VAR_7->co;

    VAR_17 = VAR_7->lmcf;

    VAR_12 = VAR_7->vm_state ? VAR_7->vm_state->vm : VAR_17->lua;

    VAR_13 = FUNC_5(VAR_12);


    FUNC_3(VAR_13, 0, 0);



    FUNC_3(VAR_13, 0, 1);
    FUNC_19(VAR_13);
    FUNC_11(VAR_13, -2, "__index");
    FUNC_12(VAR_13, -2);



    FUNC_21(VAR_13);




    FUNC_0("stack top: %d", FUNC_4(VAR_14));

    FUNC_13(VAR_12, VAR_14, 1);




    FUNC_8(VAR_14, 1);



    FUNC_13(VAR_14, VAR_13, 1);





    FUNC_19(VAR_13);
    FUNC_10(VAR_13, -2);




    FUNC_7(VAR_14, FUNC_20(
                          VAR_4));
    FUNC_9(VAR_14, VAR_0);



    FUNC_8(VAR_14, -2);



    VAR_9 = FUNC_1(VAR_14, -2);
    FUNC_6(VAR_14, 2);



    VAR_8 = FUNC_4(VAR_14);
    if (VAR_8 > 1) {
        for (VAR_10 = 2; VAR_10 <= VAR_8; VAR_10++) {
            FUNC_8(VAR_14, VAR_10);
        }



        FUNC_13(VAR_14, VAR_13, VAR_8 - 1);



    }

    VAR_11 = FUNC_15(sizeof(ngx_event_t) + sizeof(ngx_http_lua_timer_ctx_t),
                  VAR_5->log);
    if (VAR_11 == ((void*)0)) {
        goto nomem;
    }

    VAR_15 = (ngx_event_t *) VAR_11;

    FUNC_24(VAR_15, sizeof(ngx_event_t));

    VAR_11 += sizeof(ngx_event_t);

    VAR_16 = (ngx_http_lua_timer_ctx_t *) VAR_11;

    FUNC_23(VAR_16, VAR_7, sizeof(ngx_http_lua_timer_ctx_t));

    VAR_16->co_ref = VAR_9;
    VAR_16->co = VAR_13;

    VAR_16->pool = FUNC_16(128, VAR_5->log);
    if (VAR_16->pool == ((void*)0)) {
        goto nomem;
    }

    if (VAR_16->client_addr_text.len) {
        VAR_16->client_addr_text.data = FUNC_25(VAR_16->pool,
                                                 VAR_16->client_addr_text.len);
        if (VAR_16->client_addr_text.data == ((void*)0)) {
            goto nomem;
        }

        FUNC_23(VAR_16->client_addr_text.data, VAR_7->client_addr_text.data,
                   VAR_16->client_addr_text.len);
    }

    if (VAR_16->vm_state) {
        VAR_16->vm_state->count++;
    }

    VAR_15->handler = VAR_6;
    VAR_15->data = VAR_16;
    VAR_15->log = VAR_5->log;

    VAR_17->pending_timers++;

    FUNC_14(VAR_15, VAR_16->delay);

    FUNC_22(VAR_2, VAR_5->log, 0,
                   "created next timer (co: %p delay: %M ms)", VAR_16->co,
                   VAR_16->delay);

    return VAR_3;

nomem:

    if (VAR_16 && VAR_16->pool) {
        FUNC_17(VAR_16->pool);
    }

    if (VAR_15) {
        FUNC_18(VAR_15);
    }



    FUNC_7(VAR_14, FUNC_20(
                          VAR_4));
    FUNC_9(VAR_14, VAR_0);
    FUNC_2(VAR_14, -1, VAR_9);



    FUNC_6(VAR_14, 1);

    return VAR_1;
}
