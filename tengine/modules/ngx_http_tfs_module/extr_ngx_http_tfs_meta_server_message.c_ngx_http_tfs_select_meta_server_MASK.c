
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int u_char ;
struct TYPE_9__ {int user_id; int app_id; } ;
struct TYPE_10__ {TYPE_2__* loc_conf; TYPE_3__ r_ctx; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_11__ {void* user_id; void* app_id; } ;
typedef TYPE_5__ ngx_http_tfs_meta_hh_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_7__ {int * table; } ;
struct TYPE_8__ {TYPE_1__ meta_server_table; } ;


 size_t VAR_0 ;
 void* FUNC_0 (int ) ;
 size_t FUNC_1 (int *,int) ;

ngx_http_tfs_inet_t *
FUNC_2(ngx_http_tfs_t *VAR_1)
{
    uint32_t VAR_2, VAR_3;
    ngx_http_tfs_meta_hh_t VAR_4;

    VAR_4.app_id = FUNC_0(VAR_1->r_ctx.app_id);
    VAR_4.user_id = FUNC_0(VAR_1->r_ctx.user_id);

    VAR_2 = FUNC_1((u_char *) &VAR_4,
                                    sizeof(ngx_http_tfs_meta_hh_t));

    VAR_3 = VAR_2 % VAR_0;

    return &(VAR_1->loc_conf->meta_server_table.table[VAR_3]);
}
