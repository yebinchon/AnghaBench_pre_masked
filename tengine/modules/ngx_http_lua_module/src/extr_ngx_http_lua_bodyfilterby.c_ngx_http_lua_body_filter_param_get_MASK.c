
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_http_request_t ;
struct TYPE_5__ {TYPE_2__* body_filter_chain; } ;
typedef TYPE_1__ ngx_http_lua_main_conf_t ;
struct TYPE_6__ {TYPE_3__* buf; struct TYPE_6__* next; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_7__ {size_t pos; size_t last; scalar_t__ last_in_chain; scalar_t__ last_buf; } ;
typedef TYPE_3__ ngx_buf_t ;
typedef int lua_State ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,size_t,size_t) ;
 TYPE_1__* FUNC_8 (int *,int ) ;
 int VAR_0 ;

int
FUNC_9(lua_State *VAR_1, ngx_http_request_t *VAR_2)
{
    u_char *VAR_3, *VAR_4;
    size_t VAR_5;
    ngx_chain_t *VAR_6;
    ngx_buf_t *VAR_7;
    int VAR_8;
    ngx_chain_t *VAR_9;

    ngx_http_lua_main_conf_t *VAR_10;

    VAR_8 = FUNC_1(VAR_1, 2);

    FUNC_0("index: %d", VAR_8);

    if (VAR_8 != 1 && VAR_8 != 2) {
        FUNC_6(VAR_1);
        return 1;
    }

    VAR_10 = FUNC_8(VAR_2, VAR_0);
    VAR_9 = VAR_10->body_filter_chain;

    if (VAR_8 == 2) {


        for (VAR_6 = VAR_9; VAR_6; VAR_6 = VAR_6->next) {
            if (VAR_6->buf->last_buf || VAR_6->buf->last_in_chain) {
                FUNC_3(VAR_1, 1);
                return 1;
            }
        }

        FUNC_3(VAR_1, 0);
        return 1;
    }



    VAR_5 = 0;

    if (VAR_9 == ((void*)0)) {

        FUNC_4(VAR_1, "");
        return 1;
    }

    if (VAR_9->next == ((void*)0)) {

        FUNC_0("seen only single buffer");

        VAR_7 = VAR_9->buf;
        FUNC_5(VAR_1, (char *) VAR_7->pos, VAR_7->last - VAR_7->pos);
        return 1;
    }

    FUNC_0("seen multiple buffers");

    for (VAR_6 = VAR_9; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = VAR_6->buf;

        VAR_5 += VAR_7->last - VAR_7->pos;

        if (VAR_7->last_buf || VAR_7->last_in_chain) {
            break;
        }
    }

    VAR_3 = (u_char *) FUNC_2(VAR_1, VAR_5);

    for (VAR_4 = VAR_3, VAR_6 = VAR_9; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = VAR_6->buf;
        VAR_4 = FUNC_7(VAR_4, VAR_7->pos, VAR_7->last - VAR_7->pos);

        if (VAR_7->last_buf || VAR_7->last_in_chain) {
            break;
        }
    }

    FUNC_5(VAR_1, (char *) VAR_3, VAR_5);
    return 1;
}
