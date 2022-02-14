
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int uint8_t ;
typedef void* uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_char ;
typedef scalar_t__ ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_tfs_tair_server_addr_info_t ;
struct TYPE_14__ {int len; int * data; } ;
struct TYPE_15__ {int rc_servers_count; int logical_cluster_count; int need_duplicate; int report_interval; scalar_t__ unlink_cluster_group_count; int use_remote_block_cache; TYPE_8__* unlink_cluster_groups; TYPE_2__ remote_block_cache_info; void* meta_root_server; void* modify_time; TYPE_6__* logical_clusters; int * rc_servers; } ;
typedef TYPE_3__ ngx_http_tfs_rcs_info_t ;
struct TYPE_16__ {int shpool; } ;
typedef TYPE_4__ ngx_http_tfs_rc_ctx_t ;
struct TYPE_12__ {int len; int * data; } ;
struct TYPE_13__ {int len; int * data; } ;
struct TYPE_17__ {int cluster_stat; int access_type; int ns_vip; TYPE_11__ ns_vip_text; TYPE_1__ cluster_id_text; scalar_t__ cluster_id; } ;
typedef TYPE_5__ ngx_http_tfs_physical_cluster_t ;
struct TYPE_18__ {int rw_cluster_count; TYPE_5__* rw_clusters; int dup_server_addr_hash; int dup_server_info; scalar_t__ need_duplicate; } ;
typedef TYPE_6__ ngx_http_tfs_logical_cluster_t ;
struct TYPE_19__ {int group_seq; int ns_vip; TYPE_11__ ns_vip_text; } ;
typedef TYPE_7__ ngx_http_tfs_group_info_t ;
struct TYPE_20__ {int cluster_id; scalar_t__ info_count; TYPE_7__* group_info; scalar_t__ group_count; } ;
typedef TYPE_8__ ngx_http_tfs_cluster_group_info_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_11__*,int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__*,scalar_t__,int ,int) ;
 int FUNC_5 (int *,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,scalar_t__) ;
 void* FUNC_7 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_tfs_rcs_info_t *VAR_2,
    ngx_http_tfs_rc_ctx_t *VAR_3, u_char *VAR_4)
{
    u_char *VAR_5;
    uint32_t VAR_6, VAR_7;
    uint32_t VAR_8, VAR_9;
    ngx_int_t VAR_10, VAR_11;
    ngx_uint_t VAR_12, VAR_13;
    ngx_http_tfs_group_info_t *VAR_14;
    ngx_http_tfs_logical_cluster_t *VAR_15;
    ngx_http_tfs_physical_cluster_t *VAR_16;
    ngx_http_tfs_cluster_group_info_t *VAR_17;
    ngx_http_tfs_tair_server_addr_info_t *VAR_18;

    VAR_5 = VAR_4;


    VAR_2->rc_servers_count = *((uint32_t *) VAR_5);
    VAR_5 += sizeof(uint32_t);

    if (VAR_2->rc_servers_count > 0) {
        VAR_2->rc_servers =
            FUNC_7(VAR_3->shpool,
                                  VAR_2->rc_servers_count
                                   * sizeof(uint64_t));
        if (VAR_2->rc_servers == ((void*)0)) {
            FUNC_1(VAR_2->rc_servers,
                                          VAR_2->rc_servers_count
                                           * sizeof(uint64_t));
        }

        FUNC_5(VAR_2->rc_servers, VAR_5,
                   VAR_2->rc_servers_count * sizeof(uint64_t));
        VAR_5 += sizeof(uint64_t) * VAR_2->rc_servers_count;
    }


    VAR_2->logical_cluster_count = *((uint32_t *) VAR_5);
    VAR_5 += sizeof(uint32_t);

    VAR_15 = VAR_2->logical_clusters;
    for (VAR_12 = 0; VAR_12 < VAR_2->logical_cluster_count; VAR_12++) {
        VAR_15->need_duplicate = *VAR_5;
        VAR_5 += sizeof(uint8_t);

        if (VAR_15->need_duplicate) {
            VAR_8 = *((uint32_t *) VAR_5);
            VAR_5 += sizeof(uint32_t);

            if (VAR_8 > 0) {
                VAR_10 = VAR_8 - 1;
                VAR_18 = &VAR_15->dup_server_info;

                VAR_11 = FUNC_4(VAR_18,
                                                              VAR_5,
                                                              VAR_10,
                                                              VAR_3->shpool,
                                                              1);
                if (VAR_11 == VAR_0) {
                    return VAR_0;
                }

                VAR_15->dup_server_addr_hash =
                    FUNC_6(VAR_5, VAR_10);
                VAR_5 += VAR_10 + 1;

                VAR_2->need_duplicate = 1;
            }
        }

        VAR_15->rw_cluster_count = *((uint32_t *) VAR_5);
        VAR_5 += sizeof(uint32_t);

        VAR_16 = VAR_15->rw_clusters;
        for (VAR_13 = 0; VAR_13 < VAR_15->rw_cluster_count; VAR_13++) {

            VAR_16->cluster_stat = *((uint32_t *) VAR_5);
            VAR_5 += sizeof(uint32_t);


            VAR_16->access_type = *((uint32_t *) VAR_5);
            VAR_5 += sizeof(uint32_t);


            VAR_8 = *((uint32_t *) VAR_5);
            if (VAR_8 <= 0) {
                VAR_16->cluster_id_text.len = 0;
                return VAR_0;
            }

            VAR_16->cluster_id_text.len = VAR_8 - 1;
            VAR_5 += sizeof(uint32_t);

            VAR_16->cluster_id_text.data =
                FUNC_7(VAR_3->shpool,
                                      VAR_16->cluster_id_text.len);
            if (VAR_16->cluster_id_text.data == ((void*)0)) {
                FUNC_1(
                                         VAR_16->cluster_id_text.data,
                                         VAR_16->cluster_id_text.len);
            }
            FUNC_5(VAR_16->cluster_id_text.data, VAR_5,
                       VAR_16->cluster_id_text.len);

            VAR_16->cluster_id = 0;
            VAR_5 += VAR_16->cluster_id_text.len + 1;


            VAR_8 = *((uint32_t *) VAR_5);
            if (VAR_8 <= 0) {
                VAR_16->ns_vip_text.len = 0;
                return VAR_0;
            }

            VAR_16->ns_vip_text.len = VAR_8 - 1;
            VAR_5 += sizeof(uint32_t);

            VAR_16->ns_vip_text.data =
                FUNC_7(VAR_3->shpool,
                                      VAR_16->ns_vip_text.len);
            if (VAR_16->ns_vip_text.data == ((void*)0)) {
                FUNC_1(VAR_16->ns_vip_text.data,
                                             VAR_16->ns_vip_text.len);
            }
            FUNC_5(VAR_16->ns_vip_text.data, VAR_5,
                       VAR_16->ns_vip_text.len);

            VAR_5 += VAR_16->ns_vip_text.len + 1;

            FUNC_3(&VAR_16->ns_vip_text,
                                    &VAR_16->ns_vip);

            VAR_16++;
        }

        VAR_15++;
    }


    VAR_2->report_interval = *((uint32_t *) VAR_5);
    VAR_5 += sizeof(uint32_t);


    VAR_2->modify_time = *((uint64_t *) VAR_5);
    VAR_5 += sizeof(uint64_t);


    VAR_2->meta_root_server = *((uint64_t *) VAR_5);
    VAR_5 += sizeof(uint64_t);


    VAR_8 = *((uint32_t *) VAR_5);
    VAR_5 += sizeof(uint32_t);
    VAR_2->remote_block_cache_info.len = 0;

    if (VAR_8 > 0) {
        VAR_2->remote_block_cache_info.len = VAR_8 - 1;

        VAR_2->remote_block_cache_info.data =
            FUNC_7(VAR_3->shpool,
                                  VAR_2->remote_block_cache_info.len);
        if (VAR_2->remote_block_cache_info.data == ((void*)0)) {
            FUNC_1(
                                     VAR_2->remote_block_cache_info.data,
                                     VAR_2->remote_block_cache_info.len);
        }

        FUNC_5(VAR_2->remote_block_cache_info.data, VAR_5,
                   VAR_8 - 1);
        VAR_5 += VAR_8;
    }



    VAR_9 = *((uint32_t *) VAR_5);
    VAR_5 += sizeof(uint32_t);

    VAR_2->unlink_cluster_group_count = 0;

    for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {

        VAR_5 += sizeof(uint32_t);

        VAR_5 += sizeof(uint32_t);

        VAR_7 = *((uint32_t *) VAR_5);
        VAR_5 += sizeof(uint32_t);

        VAR_6 = FUNC_2(VAR_5);
        VAR_5 += VAR_7;

        for (VAR_13 = 0; VAR_13 < VAR_2->unlink_cluster_group_count; VAR_13++) {

            if (VAR_2->unlink_cluster_groups[VAR_13].cluster_id == VAR_6) {
                VAR_17 = &VAR_2->unlink_cluster_groups[VAR_13];
                break;
            }
        }


        if (VAR_13 >= VAR_2->unlink_cluster_group_count) {
            VAR_17 = &VAR_2->unlink_cluster_groups[VAR_2->unlink_cluster_group_count++];
            VAR_17->info_count = 0;
            VAR_17->group_count = 0;
            VAR_17->cluster_id = VAR_6;
        }

        VAR_14 = &VAR_17->group_info[VAR_17->info_count++];


        VAR_8 = *((uint32_t *) VAR_5);
        if (VAR_8 <= 0) {
            VAR_14->ns_vip_text.len = 0;
            return VAR_0;
        }

        VAR_14->ns_vip_text.len = VAR_8 - 1;
        VAR_5 += sizeof(uint32_t);

        VAR_14->ns_vip_text.data =
            FUNC_7(VAR_3->shpool, VAR_14->ns_vip_text.len);
        if (VAR_14->ns_vip_text.data == ((void*)0)) {
            FUNC_1(VAR_14->ns_vip_text.data,
                                          VAR_14->ns_vip_text.len);
        }

        FUNC_0(VAR_14->ns_vip_text.data, VAR_5, VAR_14->ns_vip_text.len);

        VAR_14->group_seq = -1;
        VAR_5 += VAR_8;

        FUNC_3(&VAR_14->ns_vip_text, &VAR_14->ns_vip);
    }


    VAR_2->use_remote_block_cache = *((uint32_t *) VAR_5);
    return VAR_1;
}
