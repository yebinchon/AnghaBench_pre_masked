
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_12__ {int len; scalar_t__ data; } ;
struct TYPE_13__ {TYPE_2__ name; } ;
struct TYPE_14__ {TYPE_3__ shm; } ;
typedef TYPE_4__ ngx_shm_zone_t ;
struct TYPE_15__ {TYPE_1__* shm_zones; } ;
typedef TYPE_5__ ngx_http_lua_fake_shm_main_conf_t ;
struct TYPE_16__ {TYPE_5__** main_conf; } ;
typedef TYPE_6__ ngx_http_conf_ctx_t ;
struct TYPE_17__ {scalar_t__* conf_ctx; } ;
typedef TYPE_7__ ngx_cycle_t ;
typedef int lua_State ;
struct TYPE_19__ {size_t ctx_index; } ;
struct TYPE_18__ {size_t index; } ;
struct TYPE_11__ {int nelts; TYPE_4__** elts; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 TYPE_4__** FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_9__ VAR_2 ;
 TYPE_8__ VAR_3 ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_4)
{
    ngx_http_lua_fake_shm_main_conf_t *VAR_5;
    ngx_http_conf_ctx_t *VAR_6;
    ngx_cycle_t *VAR_7;

    ngx_uint_t VAR_8;
    ngx_shm_zone_t **VAR_9;
    ngx_shm_zone_t **VAR_10;

    VAR_7 = (ngx_cycle_t *) VAR_0;

    VAR_6 = (ngx_http_conf_ctx_t *) VAR_7->conf_ctx[VAR_3.index];
    VAR_5 = VAR_6->main_conf[VAR_2.ctx_index];

    if (VAR_5->shm_zones != ((void*)0)) {
        FUNC_0(VAR_4, 0, VAR_5->shm_zones->nelts );

        FUNC_0(VAR_4, 0 , 2 );

        FUNC_4(VAR_4, VAR_1);
        FUNC_9(VAR_4, -2, "get_info");

        FUNC_6(VAR_4, -1);
        FUNC_9(VAR_4, -2, "__index");

        VAR_9 = VAR_5->shm_zones->elts;

        for (VAR_8 = 0; VAR_8 < VAR_5->shm_zones->nelts; VAR_8++) {
            FUNC_5(VAR_4, (char *) VAR_9[VAR_8]->shm.name.data,
                            VAR_9[VAR_8]->shm.name.len);



            FUNC_0(VAR_4, 1 , 0 );

            VAR_10 = FUNC_2(VAR_4, sizeof(ngx_shm_zone_t *));

            *VAR_10 = VAR_9[VAR_8];
            FUNC_8(VAR_4, -2, 1);
            FUNC_6(VAR_4, -3);
            FUNC_10(VAR_4, -2);
            FUNC_7(VAR_4, -4);
        }

        FUNC_3(VAR_4, 1);

    } else {
        FUNC_1(VAR_4);
    }

    return 1;
}
