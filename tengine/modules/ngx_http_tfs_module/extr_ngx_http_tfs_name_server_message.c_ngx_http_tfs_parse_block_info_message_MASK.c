
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_30__ {int open_mode; } ;
struct TYPE_26__ {int block_id; } ;
struct TYPE_27__ {TYPE_1__ file; } ;
struct TYPE_28__ {TYPE_2__ fsname; } ;
struct TYPE_31__ {int name_server_addr_text; int log; TYPE_5__ file; int pool; int block_cache_ctx; int name_server_addr; TYPE_3__ r_ctx; TYPE_8__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
struct TYPE_21__ {int ds_count; void* lease_id; void* version; TYPE_14__* ds_addrs; } ;
struct TYPE_29__ {int block_id; } ;
struct TYPE_32__ {scalar_t__ ds_retry; TYPE_11__ block_info; TYPE_4__ segment_info; } ;
typedef TYPE_7__ ngx_http_tfs_segment_data_t ;
struct TYPE_25__ {int * pos; } ;
struct TYPE_33__ {TYPE_15__ body_buffer; } ;
typedef TYPE_8__ ngx_http_tfs_peer_connection_t ;
struct TYPE_34__ {int ds_count; int block_id; } ;
typedef TYPE_9__ ngx_http_tfs_ns_block_info_response_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_20__ {int type; } ;
typedef TYPE_10__ ngx_http_tfs_header_t ;
typedef TYPE_11__ ngx_http_tfs_block_info_t ;
struct TYPE_22__ {int ds_count; int * ds_addrs; } ;
typedef TYPE_12__ ngx_http_tfs_block_cache_value_t ;
struct TYPE_23__ {int block_id; int ns_addr; } ;
typedef TYPE_13__ ngx_http_tfs_block_cache_key_t ;
typedef int int64_t ;
typedef void* int32_t ;
struct TYPE_24__ {int ip; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,TYPE_13__*,TYPE_12__*) ;
 int FUNC_1 (TYPE_15__*,int *,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int *,int ,int,void*,void*) ;
 TYPE_14__* FUNC_3 (int ,int) ;
 int FUNC_4 (int *,char*) ;

ngx_int_t
FUNC_5(ngx_http_tfs_t *VAR_7,
    ngx_http_tfs_segment_data_t *VAR_8)
{
    u_char *VAR_9;
    uint16_t VAR_10;
    uint32_t VAR_11;
    ngx_str_t VAR_12;
    ngx_uint_t VAR_13;
    ngx_http_tfs_header_t *VAR_14;
    ngx_http_tfs_block_info_t *VAR_15;
    ngx_http_tfs_block_cache_key_t VAR_16;
    ngx_http_tfs_block_cache_value_t VAR_17;
    ngx_http_tfs_peer_connection_t *VAR_18;
    ngx_http_tfs_ns_block_info_response_t *VAR_19;

    VAR_14 = (ngx_http_tfs_header_t *) VAR_7->header;
    VAR_18 = VAR_7->tfs_peer;
    VAR_10 = VAR_14->type;

    switch (VAR_10) {
    case 128:
        FUNC_4(&VAR_12, "get block info (name server)");
        return FUNC_1(&VAR_18->body_buffer, &VAR_12, VAR_7->log);
    }

    VAR_19 = (ngx_http_tfs_ns_block_info_response_t *) VAR_18->body_buffer.pos;

    VAR_9 = VAR_18->body_buffer.pos + sizeof(ngx_http_tfs_ns_block_info_response_t);

    if (VAR_7->file.open_mode & VAR_4) {
        if (VAR_19->ds_count <= 3) {
            return VAR_1;
        }


        VAR_11 = VAR_19->ds_count - 3;

    } else {
        VAR_11 = VAR_19->ds_count;
    }

    VAR_7->r_ctx.fsname.file.block_id = VAR_19->block_id;

    VAR_8->segment_info.block_id = VAR_19->block_id;
    VAR_15 = &VAR_8->block_info;

    VAR_15->ds_count = VAR_11;
    VAR_15->ds_addrs = FUNC_3(VAR_7->pool,
                                       sizeof(ngx_http_tfs_inet_t) * VAR_11);
    if (VAR_15->ds_addrs == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
        VAR_15->ds_addrs[VAR_13].ip = *(uint32_t *) VAR_9;
        VAR_15->ds_addrs[VAR_13].port = *(uint32_t *) (VAR_9 + sizeof(uint32_t));

        VAR_9 += sizeof(uint32_t) * 2;
    }


    if (VAR_7->file.open_mode & VAR_2
        || VAR_7->file.open_mode & VAR_3)
    {
        VAR_16.ns_addr = *((uint64_t*)(&VAR_7->name_server_addr));
        VAR_16.block_id = VAR_19->block_id;
        VAR_17.ds_count = VAR_15->ds_count;
        VAR_17.ds_addrs = (uint64_t *)VAR_15->ds_addrs;
        FUNC_0(&VAR_7->block_cache_ctx,
                                        VAR_7->pool, VAR_7->log, &VAR_16, &VAR_17);
    }

    if (VAR_7->file.open_mode & VAR_4) {

        VAR_9 += sizeof(uint64_t);

        VAR_15->version = *((int32_t *) VAR_9);
        VAR_9 += sizeof(int64_t);

        VAR_15->lease_id = *((int32_t *) VAR_9);
    }

    VAR_8->ds_retry = 0;

    FUNC_2(VAR_5, VAR_7->log, 0,
                   "get block info from "
                   "nameserver: %V, block id: %uD, ds count: %uD, "
                   "version: %D, lease id: %D",
                   &VAR_7->name_server_addr_text, VAR_19->block_id,
                   VAR_15->ds_count,
                   VAR_15->version, VAR_15->lease_id);

    return VAR_6;
}
