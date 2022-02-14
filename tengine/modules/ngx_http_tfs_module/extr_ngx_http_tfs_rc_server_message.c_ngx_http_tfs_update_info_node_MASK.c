
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {TYPE_9__* server; } ;
typedef TYPE_1__ ngx_http_tfs_tair_server_addr_info_t ;
struct TYPE_18__ {TYPE_3__* rc_info_node; } ;
typedef TYPE_2__ ngx_http_tfs_t ;
struct TYPE_25__ {scalar_t__ len; int * data; } ;
struct TYPE_19__ {size_t logical_cluster_count; size_t unlink_cluster_group_count; TYPE_8__* unlink_cluster_groups; TYPE_9__ remote_block_cache_info; scalar_t__ need_duplicate; TYPE_6__* logical_clusters; scalar_t__ rc_servers_count; int * rc_servers; } ;
typedef TYPE_3__ ngx_http_tfs_rcs_info_t ;
struct TYPE_20__ {int shpool; } ;
typedef TYPE_4__ ngx_http_tfs_rc_ctx_t ;
struct TYPE_21__ {TYPE_9__ ns_vip_text; scalar_t__ cluster_id; TYPE_9__ cluster_id_text; } ;
typedef TYPE_5__ ngx_http_tfs_physical_cluster_t ;
struct TYPE_22__ {int dup_server_addr_hash; size_t rw_cluster_count; TYPE_5__* rw_clusters; scalar_t__ need_duplicate; TYPE_1__ dup_server_info; } ;
typedef TYPE_6__ ngx_http_tfs_logical_cluster_t ;
struct TYPE_23__ {TYPE_9__ ns_vip_text; } ;
typedef TYPE_7__ ngx_http_tfs_group_info_t ;
struct TYPE_24__ {size_t info_count; TYPE_7__* group_info; } ;
typedef TYPE_8__ ngx_http_tfs_cluster_group_info_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_9__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_tfs_t *VAR_3, ngx_http_tfs_rc_ctx_t *VAR_4,
    ngx_http_tfs_rcs_info_t *VAR_5, u_char *VAR_6)
{
    u_char *VAR_7;
    ngx_int_t VAR_8;
    ngx_uint_t VAR_9, VAR_10;
    ngx_http_tfs_group_info_t *VAR_11;
    ngx_http_tfs_logical_cluster_t *VAR_12;
    ngx_http_tfs_physical_cluster_t *VAR_13;
    ngx_http_tfs_cluster_group_info_t *VAR_14;
    ngx_http_tfs_tair_server_addr_info_t *VAR_15;

    VAR_7 = VAR_6;


    if (VAR_5->rc_servers != ((void*)0)) {
        FUNC_2(VAR_4->shpool, VAR_5->rc_servers);
    }
    VAR_5->rc_servers_count = 0;


    VAR_12 = VAR_5->logical_clusters;
    for (VAR_9 = 0; VAR_9 < VAR_5->logical_cluster_count; VAR_9++) {

        if (VAR_12->need_duplicate) {
            VAR_15 = &VAR_12->dup_server_info;

            for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
                if (VAR_15->server[VAR_10].data == ((void*)0)) {
                    break;
                }
                FUNC_2(VAR_4->shpool,
                                     VAR_15->server[VAR_10].data);
                FUNC_3(&VAR_15->server[VAR_10]);
            }
            VAR_12->dup_server_addr_hash = -1;
            VAR_12->need_duplicate = 0;
        }

        VAR_13 = VAR_12->rw_clusters;
        for (VAR_10 = 0; VAR_10 < VAR_12->rw_cluster_count; VAR_9++) {
            if (VAR_13->cluster_id_text.len <= 0
                || VAR_13->cluster_id_text.data == ((void*)0))
            {
                break;
            }
            FUNC_2(VAR_4->shpool,
                                 VAR_13->cluster_id_text.data);
            FUNC_3(&VAR_13->cluster_id_text);
            VAR_13->cluster_id = 0;

            if (VAR_13->ns_vip_text.len <= 0
                || VAR_13->ns_vip_text.data == ((void*)0))
            {
                break;
            }
            FUNC_2(VAR_4->shpool,
                                 VAR_13->ns_vip_text.data);
            FUNC_3(&VAR_13->ns_vip_text);

            VAR_13++;
        }
        VAR_12->rw_cluster_count = 0;

        VAR_12++;
    }
    VAR_5->logical_cluster_count = 0;


    VAR_5->need_duplicate = 0;


    if (VAR_5->remote_block_cache_info.len > 0
        && VAR_5->remote_block_cache_info.data != ((void*)0))
    {
        FUNC_2(VAR_4->shpool,
                             VAR_5->remote_block_cache_info.data);
        FUNC_3(&VAR_5->remote_block_cache_info);
    }
    VAR_5->remote_block_cache_info.len = 0;


    VAR_14 = VAR_5->unlink_cluster_groups;
    for (VAR_9 = 0; VAR_9 < VAR_5->unlink_cluster_group_count; VAR_9++) {
        for (VAR_10 = 0; VAR_10 < VAR_14[VAR_9].info_count; VAR_10++) {
            VAR_11 = &VAR_14[VAR_9].group_info[VAR_10];
            if (VAR_11->ns_vip_text.len <= 0
                || VAR_11->ns_vip_text.data == ((void*)0))
            {
                break;
            }
            FUNC_2(VAR_4->shpool, VAR_11->ns_vip_text.data);
            FUNC_3(&VAR_11->ns_vip_text);
        }
    }
    VAR_5->unlink_cluster_group_count = 0;


    VAR_8 = FUNC_0(VAR_5, VAR_4, VAR_7);
    if (VAR_8 == VAR_0) {
        return VAR_0;
    }

    VAR_3->rc_info_node = VAR_5;
    FUNC_1(VAR_3, VAR_5);

    return VAR_2;
}
