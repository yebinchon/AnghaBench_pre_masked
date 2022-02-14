
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef size_t ngx_uint_t ;
struct TYPE_32__ {int data; } ;
typedef TYPE_8__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_30__ {int code; } ;
struct TYPE_25__ {scalar_t__ block_id; } ;
struct TYPE_28__ {scalar_t__ cluster_id; TYPE_1__ file; } ;
struct TYPE_31__ {int version; TYPE_6__ action; TYPE_4__ fsname; int is_raw_update; } ;
struct TYPE_29__ {scalar_t__ cluster_id; TYPE_3__* segment_data; } ;
struct TYPE_33__ {size_t logical_cluster_index; size_t rw_cluster_index; void* state; int log; TYPE_7__ r_ctx; TYPE_5__ file; } ;
typedef TYPE_9__ ngx_http_tfs_t ;
struct TYPE_20__ {size_t logical_cluster_count; size_t unlink_cluster_group_count; TYPE_12__* logical_clusters; TYPE_14__* unlink_cluster_groups; } ;
typedef TYPE_10__ ngx_http_tfs_rcs_info_t ;
struct TYPE_21__ {scalar_t__ cluster_id; int ns_vip; TYPE_8__ ns_vip_text; TYPE_8__ cluster_id_text; int access_type; } ;
typedef TYPE_11__ ngx_http_tfs_physical_cluster_t ;
struct TYPE_22__ {size_t rw_cluster_count; TYPE_11__* rw_clusters; } ;
typedef TYPE_12__ ngx_http_tfs_logical_cluster_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_23__ {TYPE_8__ ns_vip_text; int ns_vip; int group_seq; } ;
typedef TYPE_13__ ngx_http_tfs_group_info_t ;
struct TYPE_24__ {scalar_t__ cluster_id; scalar_t__ info_count; int group_count; TYPE_13__* group_info; } ;
typedef TYPE_14__ ngx_http_tfs_cluster_group_info_t ;
struct TYPE_26__ {scalar_t__ block_id; } ;
struct TYPE_27__ {TYPE_2__ segment_info; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_8__*) ;
 int FUNC_3 (int ,int ,int ,char*,size_t,size_t,TYPE_8__*) ;
 int FUNC_4 (int ,int ,int ,char*,...) ;

ngx_int_t
FUNC_5(ngx_http_tfs_t *VAR_13,
    ngx_http_tfs_rcs_info_t *VAR_14, ngx_http_tfs_inet_t *VAR_15,
    ngx_str_t *VAR_16)
{
    uint32_t VAR_17, VAR_18, VAR_19,
                                        VAR_20;
    ngx_str_t *VAR_21;
    ngx_uint_t VAR_22, VAR_23;
    ngx_http_tfs_group_info_t *VAR_24;
    ngx_http_tfs_logical_cluster_t *VAR_25;
    ngx_http_tfs_physical_cluster_t *VAR_26;
    ngx_http_tfs_cluster_group_info_t *VAR_27;

    VAR_18 = 0;

    if (VAR_14 == ((void*)0)) {
        return VAR_0;
    }
    if (VAR_13->r_ctx.version == 1) {
        VAR_18 = VAR_13->r_ctx.fsname.cluster_id;

    } else if (VAR_13->r_ctx.version == 2){
        VAR_18 = VAR_13->file.cluster_id;
    }

    switch(VAR_13->r_ctx.action.code) {
    case 129:
    case 131:
        for (;
             VAR_13->logical_cluster_index < VAR_14->logical_cluster_count;
             VAR_13->logical_cluster_index++)
        {
            VAR_25 =
                           &VAR_14->logical_clusters[VAR_13->logical_cluster_index];
            for (;
                 VAR_13->rw_cluster_index < VAR_25->rw_cluster_count;
                 VAR_13->rw_cluster_index++)
            {
                VAR_26 =
                             &VAR_25->rw_clusters[VAR_13->rw_cluster_index];
                VAR_21 = &VAR_26->cluster_id_text;
                VAR_17 = FUNC_0(VAR_21->data);
                if (VAR_18 > 0 && VAR_17 != VAR_18) {
                    continue;
                }
                FUNC_3(VAR_10, VAR_13->log, 0,
                               "read/stat, select logical cluster "
                               "index: %ui, rw_cluster_index: %ui, "
                               "nameserver: %V",
                               VAR_13->logical_cluster_index, VAR_13->rw_cluster_index,
                               &VAR_26->ns_vip_text);
                (*VAR_15) = VAR_26->ns_vip;
                (*VAR_16) = VAR_26->ns_vip_text;
                return VAR_12;
            }
            VAR_13->rw_cluster_index = 0;
        }

        break;

    case 128:
        if (VAR_13->r_ctx.is_raw_update == VAR_2) {
            for (;
                 VAR_13->logical_cluster_index < VAR_14->logical_cluster_count;
                 VAR_13->logical_cluster_index++)
            {
                VAR_25 =
                               &VAR_14->logical_clusters[VAR_13->logical_cluster_index];
                for (;
                     VAR_13->rw_cluster_index < VAR_25->rw_cluster_count;
                     VAR_13->rw_cluster_index++)
                {
                    VAR_26 =
                                 &VAR_25->rw_clusters[VAR_13->rw_cluster_index];
                    if (VAR_26->access_type
                        == VAR_1)
                    {


                        if (VAR_18 > 0) {
                            VAR_21 = &VAR_26->cluster_id_text;
                            VAR_17 =
                                FUNC_0(VAR_21->data);
                            if (VAR_17 != VAR_18) {
                                continue;
                            }
                        }
                        FUNC_3(VAR_10, VAR_13->log, 0,
                                       "write, select logical cluster "
                                       "index: %ui, rw_cluster_index: %ui, "
                                       "nameserver: %V",
                                       VAR_13->logical_cluster_index,
                                       VAR_13->rw_cluster_index,
                                       &VAR_26->ns_vip_text);
                        (*VAR_15) = VAR_26->ns_vip;
                        (*VAR_16) = VAR_26->ns_vip_text;


                        if (VAR_13->state == VAR_7) {
                            if (VAR_26->cluster_id > 0) {
                                VAR_13->file.cluster_id = VAR_26->cluster_id;

                            } else {
                                VAR_13->state = VAR_6;
                            }
                        }

                        return VAR_12;
                    }
                }
                VAR_13->rw_cluster_index = 0;
            }

            break;
        }


    case 130:
        for (VAR_22 = 0; VAR_22 < VAR_14->unlink_cluster_group_count; VAR_22++) {
            VAR_27 = &VAR_14->unlink_cluster_groups[VAR_22];
            VAR_24 = VAR_27->group_info;
            VAR_17 = VAR_27->cluster_id;
            VAR_19 = VAR_27->info_count;

            if ((VAR_18 > 0 && VAR_17 != VAR_18)
                || VAR_19 < 1)
            {
                continue;
            }


            if (VAR_19 == 1) {
                (*VAR_15) = VAR_24[0].ns_vip;
                (*VAR_16) = VAR_24[0].ns_vip_text;
                if (VAR_13->r_ctx.action.code == 130) {
                    VAR_13->state = VAR_3;

                } else if (VAR_13->r_ctx.action.code == 128) {
                    VAR_13->state = VAR_7;
                }
                FUNC_2(VAR_10, VAR_13->log, 0,
                               "unlink, select nameserver: %V",
                               &VAR_24[0].ns_vip_text);
                goto find_logical_cluster_index;
            }


            if (VAR_27->group_count <= 0) {
                (*VAR_15) = VAR_24[0].ns_vip;
                (*VAR_16) = VAR_24[0].ns_vip_text;
                if (VAR_13->r_ctx.action.code == 130) {
                    VAR_13->state = VAR_4;

                } else if (VAR_13->r_ctx.action.code == 128) {
                    VAR_13->state = VAR_8;
                }
                return VAR_12;
            }


            if (VAR_27->group_count == 1) {
                FUNC_4(VAR_11, VAR_13->log, 0,
                               "unlink, can not select nameserver.");
                return VAR_0;
            }

            for (VAR_23 = 0; VAR_23 < VAR_19; VAR_23++) {
                if (VAR_24[VAR_23].group_seq < 0) {
                    (*VAR_15) = VAR_24[VAR_23].ns_vip;
                    (*VAR_16) = VAR_24[VAR_23].ns_vip_text;
                    if (VAR_13->r_ctx.action.code == 130) {
                        VAR_13->state = VAR_5;

                    } else if (VAR_13->r_ctx.action.code == 128) {
                        VAR_13->state = VAR_9;
                    }
                    return VAR_12;
                }

                if (VAR_13->r_ctx.version == 1) {
                    VAR_20 = VAR_13->r_ctx.fsname.file.block_id;
                } else {
                    VAR_20 =
                        VAR_13->file.segment_data[0].segment_info.block_id;
                }
                if (FUNC_1(VAR_20,
                                              VAR_27->group_count,
                                              VAR_24[VAR_23].group_seq))
                {
                    (*VAR_15) = VAR_24[VAR_23].ns_vip;
                    (*VAR_16) = VAR_24[VAR_23].ns_vip_text;
                    if (VAR_13->r_ctx.action.code == 130) {
                        VAR_13->state = VAR_3;

                    } else if (VAR_13->r_ctx.action.code == 128) {
                        VAR_13->state = VAR_7;
                    }

                    FUNC_2(VAR_10, VAR_13->log, 0,
                                   "unlink, select nameserver: %V",
                                   &VAR_24[VAR_23].ns_vip_text);
                    goto find_logical_cluster_index;
                }
            }
        }

        return VAR_0;

find_logical_cluster_index:




        VAR_13->logical_cluster_index = 0;
        for ( ;
              VAR_13->logical_cluster_index < VAR_14->logical_cluster_count;
              VAR_13->logical_cluster_index++)
        {
            VAR_25 =
                &VAR_14->logical_clusters[VAR_13->logical_cluster_index];
            VAR_13->rw_cluster_index = 0;
            for ( ;
                  VAR_13->rw_cluster_index < VAR_25->rw_cluster_count;
                  VAR_13->rw_cluster_index++)
            {
                VAR_26 =
                    &VAR_25->rw_clusters[VAR_13->rw_cluster_index];
                if (*(uint64_t*)(&VAR_26->ns_vip)
                    == *(uint64_t*)(VAR_15))
                {
                    return VAR_12;
                }
            }
        }
        FUNC_4(VAR_11, VAR_13->log, 0,
                      "can not find logical cluster index of ns: %V",
                      VAR_16);
        return VAR_0;
    }

    return VAR_0;
}
