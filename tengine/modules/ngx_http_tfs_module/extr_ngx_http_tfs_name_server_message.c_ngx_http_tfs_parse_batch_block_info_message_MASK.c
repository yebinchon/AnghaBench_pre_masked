
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_20__ {size_t segment_count; size_t segment_index; size_t curr_batch_count; int open_mode; } ;
struct TYPE_22__ {TYPE_1__ file; int log; int pool; int block_cache_ctx; int name_server_addr; int name_server_addr_text; TYPE_5__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_27__ {size_t ds_count; TYPE_11__* ds_addrs; void* lease_id; void* version; } ;
struct TYPE_21__ {size_t block_id; } ;
struct TYPE_23__ {scalar_t__ ds_retry; TYPE_8__ block_info; TYPE_2__ segment_info; } ;
typedef TYPE_4__ ngx_http_tfs_segment_data_t ;
struct TYPE_19__ {int * pos; } ;
struct TYPE_24__ {TYPE_12__ body_buffer; } ;
typedef TYPE_5__ ngx_http_tfs_peer_connection_t ;
struct TYPE_25__ {size_t block_count; } ;
typedef TYPE_6__ ngx_http_tfs_ns_batch_block_info_response_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_26__ {int type; } ;
typedef TYPE_7__ ngx_http_tfs_header_t ;
typedef TYPE_8__ ngx_http_tfs_block_info_t ;
struct TYPE_28__ {size_t ds_count; int * ds_addrs; } ;
typedef TYPE_9__ ngx_http_tfs_block_cache_value_t ;
struct TYPE_17__ {size_t block_id; int ns_addr; } ;
typedef TYPE_10__ ngx_http_tfs_block_cache_key_t ;
typedef int int64_t ;
typedef void* int32_t ;
struct TYPE_18__ {size_t ip; size_t port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,TYPE_10__*,TYPE_9__*) ;
 int FUNC_1 (TYPE_12__*,int *,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int *,size_t,size_t,void*,void*) ;
 TYPE_11__* FUNC_3 (int ,int) ;
 int FUNC_4 (int *,char*) ;

ngx_int_t
FUNC_5(ngx_http_tfs_t *VAR_8,
    ngx_http_tfs_segment_data_t *VAR_9)
{
    u_char *VAR_10;
    uint16_t VAR_11;
    uint32_t VAR_12, VAR_13,
                                                  VAR_14, VAR_15;
    ngx_str_t VAR_16;
    ngx_uint_t VAR_17, VAR_18, VAR_19;
    ngx_http_tfs_header_t *VAR_20;
    ngx_http_tfs_block_info_t *VAR_21;
    ngx_http_tfs_peer_connection_t *VAR_22;
    ngx_http_tfs_block_cache_key_t VAR_23;
    ngx_http_tfs_block_cache_value_t VAR_24;
    ngx_http_tfs_ns_batch_block_info_response_t *VAR_25;

    VAR_20 = (ngx_http_tfs_header_t *) VAR_8->header;
    VAR_22 = VAR_8->tfs_peer;
    VAR_11 = VAR_20->type;

    switch (VAR_11) {
    case 128:
        FUNC_4(&VAR_16, "batch get block info (name server)");
        return FUNC_1(&VAR_22->body_buffer, &VAR_16, VAR_8->log);
    }

    VAR_25 = (ngx_http_tfs_ns_batch_block_info_response_t *) VAR_22->body_buffer.pos;

    VAR_10 = VAR_22->body_buffer.pos
         + sizeof(ngx_http_tfs_ns_batch_block_info_response_t);

    VAR_12 = VAR_8->file.segment_count - VAR_8->file.segment_index;
    if (VAR_12 > VAR_3) {
        VAR_12 = VAR_3;
    }
    VAR_8->file.curr_batch_count = VAR_25->block_count;

    for (VAR_17 = 0; VAR_17 < VAR_25->block_count; VAR_17++) {
        VAR_18 = VAR_17;

        VAR_15 = *(uint32_t *) VAR_10;
        VAR_10 += sizeof(uint32_t);

        if (VAR_8->file.open_mode & VAR_4) {
            for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
                if (VAR_9[VAR_18].segment_info.block_id == VAR_15) {
                    break;
                }
            }
            if (VAR_18 == VAR_12) {
                return VAR_1;
            }
        }
        VAR_9[VAR_18].segment_info.block_id = VAR_15;

        VAR_21 = &VAR_9[VAR_18].block_info;


        VAR_14 = *(uint32_t *) VAR_10;
        VAR_10 += sizeof(uint32_t);

        if (VAR_8->file.open_mode & VAR_5) {
            if (VAR_14 <= 3) {
                return VAR_2;
            }


            VAR_21->ds_count = VAR_14 - 3;

        } else {
            if (VAR_14 < 1) {
                return VAR_2;
            }

            VAR_21->ds_count = VAR_14;
        }

        VAR_21->ds_addrs = FUNC_3(VAR_8->pool,
                                        sizeof(ngx_http_tfs_inet_t) * VAR_14);
        if (VAR_21->ds_addrs == ((void*)0)) {
            return VAR_0;
        }

        for (VAR_19 = 0; VAR_19 < VAR_21->ds_count; VAR_19++) {
            VAR_21->ds_addrs[VAR_19].ip = *(uint32_t *) VAR_10;
            VAR_21->ds_addrs[VAR_19].port = *(uint32_t *) (VAR_10 + sizeof(uint32_t));

            VAR_10 += sizeof(uint32_t) * 2;
        }

        if (VAR_8->file.open_mode & VAR_5) {

            VAR_10 += sizeof(uint64_t);

            VAR_21->version = *((int32_t *) VAR_10);
            VAR_10 += sizeof(int64_t);

            VAR_21->lease_id = *((int32_t *) VAR_10);
            VAR_10 += sizeof(int64_t);
        }

        FUNC_2(VAR_6, VAR_8->log, 0,
                       "batch get block info from nameserver: "
                       "%V, block id: %uD, "
                       "ds count: %uD, version: %D, lease id: %D",
                       &VAR_8->name_server_addr_text, VAR_15,
                       VAR_21->ds_count,
                       VAR_21->version, VAR_21->lease_id);


        if (VAR_8->file.open_mode & VAR_4) {
            VAR_23.ns_addr = *((uint64_t *)(&VAR_8->name_server_addr));
            VAR_23.block_id = VAR_15;
            VAR_24.ds_count = VAR_21->ds_count;
            VAR_24.ds_addrs = (uint64_t *)VAR_21->ds_addrs;
            FUNC_0(&VAR_8->block_cache_ctx,
                                            VAR_8->pool, VAR_8->log, &VAR_23, &VAR_24);
        }


        VAR_9[VAR_18].ds_retry = 0;
    }


    if (VAR_8->file.open_mode & VAR_4) {
        VAR_13 = 0;
        for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
            if (VAR_9[VAR_17].block_info.ds_addrs != ((void*)0)) {
                VAR_13++;
                continue;
            }


            for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
                if (VAR_9[VAR_17].segment_info.block_id
                    != VAR_9[VAR_18].segment_info.block_id)
                {
                    continue;
                }


                VAR_9[VAR_17].block_info = VAR_9[VAR_18].block_info;
                VAR_9[VAR_17].ds_retry = 0;
                VAR_13++;
                break;
            }
        }
        if (VAR_13 != VAR_12) {
            return VAR_1;
        }
    }

    return VAR_7;
}
