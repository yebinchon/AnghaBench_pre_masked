
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_8__ {size_t nelts; TYPE_4__* elts; struct TYPE_8__* next; } ;
typedef TYPE_2__ ngx_list_part_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ flushing; } ;
struct TYPE_9__ {scalar_t__ flushing_coros; TYPE_4__* cur_co_ctx; TYPE_1__* user_co_ctx; TYPE_4__ entry_co_ctx; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef TYPE_4__ ngx_http_lua_co_ctx_t ;
struct TYPE_7__ {TYPE_2__ part; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3,
    ngx_http_lua_ctx_t *VAR_4)
{
    ngx_int_t VAR_5, VAR_6;
    ngx_uint_t VAR_7;
    ngx_list_part_t *VAR_8;
    ngx_http_lua_co_ctx_t *VAR_9;

    FUNC_0("processing flushing coroutines");

    VAR_9 = &VAR_4->entry_co_ctx;
    VAR_6 = VAR_4->flushing_coros;

    if (VAR_9->flushing) {
        VAR_9->flushing = 0;

        VAR_4->flushing_coros--;
        VAR_6--;
        VAR_4->cur_co_ctx = VAR_9;

        VAR_5 = FUNC_1(VAR_3, VAR_4);
        if (VAR_5 == VAR_1 || VAR_5 >= VAR_2) {
            return VAR_5;
        }


    }

    if (VAR_6) {

        if (VAR_4->user_co_ctx == ((void*)0)) {
            return VAR_1;
        }

        VAR_8 = &VAR_4->user_co_ctx->part;
        VAR_9 = VAR_8->elts;

        for (VAR_7 = 0; ; VAR_7++) {

            if (VAR_7 >= VAR_8->nelts) {
                if (VAR_8->next == ((void*)0)) {
                    break;
                }

                VAR_8 = VAR_8->next;
                VAR_9 = VAR_8->elts;
                VAR_7 = 0;
            }

            if (VAR_9[VAR_7].flushing) {
                VAR_9[VAR_7].flushing = 0;
                VAR_4->flushing_coros--;
                VAR_6--;
                VAR_4->cur_co_ctx = &VAR_9[VAR_7];

                VAR_5 = FUNC_1(VAR_3, VAR_4);
                if (VAR_5 == VAR_1 || VAR_5 >= VAR_2) {
                    return VAR_5;
                }



                if (VAR_6 == 0) {
                    return VAR_0;
                }
            }
        }
    }

    if (VAR_6) {
        return VAR_1;
    }

    return VAR_0;
}
