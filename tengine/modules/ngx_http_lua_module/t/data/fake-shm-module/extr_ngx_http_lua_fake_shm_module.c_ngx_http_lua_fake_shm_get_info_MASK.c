
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; scalar_t__ data; } ;
struct TYPE_7__ {int size; TYPE_1__ name; } ;
struct TYPE_8__ {TYPE_2__ shm; scalar_t__ data; } ;
typedef TYPE_3__ ngx_shm_zone_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int isold; int isinit; } ;
typedef TYPE_4__ ngx_http_lua_fake_shm_ctx_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,int) ;
 TYPE_3__** FUNC_8 (int *,int) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_1)
{
    ngx_int_t VAR_2;
    ngx_shm_zone_t *VAR_3;
    ngx_shm_zone_t **VAR_4;
    ngx_http_lua_fake_shm_ctx_t *VAR_5;

    VAR_2 = FUNC_2(VAR_1);

    if (VAR_2 != 1) {
        return FUNC_1(VAR_1, "expecting exactly one arguments, "
                          "but only seen %d", VAR_2);
    }

    FUNC_0(VAR_1, 1, VAR_0);

    FUNC_7(VAR_1, 1, 1);
    VAR_4 = FUNC_8(VAR_1, -1);
    FUNC_3(VAR_1, 1);

    if (VAR_4 == ((void*)0)) {
        return FUNC_1(VAR_1, "bad \"zone\" argument");
    }

    VAR_3 = *VAR_4;

    VAR_5 = (ngx_http_lua_fake_shm_ctx_t *) VAR_3->data;

    FUNC_5(VAR_1, (char *) VAR_3->shm.name.data, VAR_3->shm.name.len);
    FUNC_6(VAR_1, VAR_3->shm.size);
    FUNC_4(VAR_1, VAR_5->isinit);
    FUNC_4(VAR_1, VAR_5->isold);

    return 4;
}
