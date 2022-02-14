
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; int * vm; } ;
typedef TYPE_1__ ngx_http_lua_ngx_ctx_cleanup_data_t ;
typedef int lua_State ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
    lua_State *VAR_5;

    ngx_http_lua_ngx_ctx_cleanup_data_t *VAR_6 = VAR_4;

    FUNC_4(VAR_1, VAR_2->log, 0,
                   "lua release ngx.ctx at ref %d", VAR_6->ref);

    VAR_5 = VAR_6->vm;

    FUNC_2(VAR_5, VAR_3);
    FUNC_3(VAR_5, VAR_0);
    FUNC_0(VAR_5, -1, VAR_6->ref);
    FUNC_1(VAR_5, 1);
}
