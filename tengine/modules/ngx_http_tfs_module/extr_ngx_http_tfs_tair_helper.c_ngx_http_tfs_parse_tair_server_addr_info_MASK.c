
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_slab_pool_t ;
typedef int ngx_pool_t ;
typedef size_t ngx_int_t ;
struct TYPE_5__ {size_t area; TYPE_1__* server; } ;
typedef TYPE_2__ ngx_http_tfs_tair_server_addr_info_t ;
struct TYPE_4__ {int len; int * data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 size_t FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int *,char) ;

ngx_int_t
FUNC_5(
    ngx_http_tfs_tair_server_addr_info_t *VAR_3,
    u_char *VAR_4, uint32_t VAR_5, void *VAR_6, uint8_t VAR_7)
{
    u_char *VAR_8, *VAR_9;
    ssize_t VAR_10;
    ngx_int_t VAR_11;

    VAR_9 = VAR_4;

    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
        VAR_8 = FUNC_4(VAR_9, VAR_9 + VAR_5, ';');
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }

        VAR_10 = VAR_8 - VAR_9;
        if (VAR_7) {
            VAR_3->server[VAR_11].data =
                FUNC_3((ngx_slab_pool_t *)VAR_6, VAR_10);
        } else {
            VAR_3->server[VAR_11].data = FUNC_2((ngx_pool_t *)VAR_6, VAR_10);
        }
        if (VAR_3->server[VAR_11].data == ((void*)0)) {
            return VAR_0;
        }
        VAR_3->server[VAR_11].len = VAR_10;
        FUNC_0(VAR_3->server[VAR_11].data, VAR_9, VAR_10);

        VAR_9 += VAR_10 + 1;
        VAR_5 -= (VAR_10 + 1);
        if (VAR_5 <= 0) {
            return VAR_0;
        }
    }

    VAR_3->area = FUNC_1(VAR_9, VAR_5);
    if (VAR_3->area == VAR_0) {
        return VAR_0;
    }

    return VAR_2;
}
