
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_22__ {int len; scalar_t__ data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {size_t size; } ;
struct TYPE_17__ {scalar_t__ size; } ;
struct TYPE_19__ {void* left_length; } ;
struct TYPE_23__ {scalar_t__ read_ver; size_t length; TYPE_4__ stat_info; int is_process_meta_seg; scalar_t__ is_large_file; int is_stat_dup_file; TYPE_3__* readv2_rsp_tail_buf; int pool; TYPE_12__ file_stat; TYPE_2__ file; int log; TYPE_7__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
struct TYPE_16__ {scalar_t__ pos; } ;
struct TYPE_24__ {int peer_addr_text; TYPE_10__ body_buffer; } ;
typedef TYPE_7__ ngx_http_tfs_peer_connection_t ;
struct TYPE_25__ {scalar_t__ file_info_len; int file_info; } ;
typedef TYPE_8__ ngx_http_tfs_ds_readv2_response_tail_t ;
struct TYPE_18__ {int type; } ;
struct TYPE_26__ {int data_len; TYPE_1__ header; } ;
typedef TYPE_9__ ngx_http_tfs_ds_read_response_t ;
typedef TYPE_10__ ngx_buf_t ;
typedef int int32_t ;
struct TYPE_20__ {void* last; scalar_t__ pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_0 (TYPE_10__*) ;
 void* FUNC_1 (void*,scalar_t__,size_t) ;
 void* FUNC_2 (int ,size_t) ;
 scalar_t__ FUNC_3 (TYPE_6__*,size_t,scalar_t__) ;
 int FUNC_4 (int *,TYPE_12__*) ;
 int FUNC_5 (int ,int ,int ,char*,int ,int ,TYPE_5__*) ;
 void* FUNC_6 (void*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_tfs_t *VAR_8)
{
    size_t VAR_9, VAR_10, VAR_11;
    int32_t VAR_12, VAR_13;
    uint16_t VAR_14;
    ngx_int_t VAR_15;
    ngx_str_t VAR_16;
    ngx_buf_t *VAR_17;
    ngx_http_tfs_peer_connection_t *VAR_18;
    ngx_http_tfs_ds_read_response_t *VAR_19;
    ngx_http_tfs_ds_readv2_response_tail_t *VAR_20;

    VAR_19 = (ngx_http_tfs_ds_read_response_t *) VAR_8->header;
    VAR_18 = VAR_8->tfs_peer;
    VAR_14 = VAR_19->header.type;
    VAR_17 = &VAR_18->body_buffer;

    switch (VAR_14) {
    case 128:

        VAR_12 = VAR_19->data_len;
        if (VAR_12 != VAR_5) {
            VAR_13 = *(uint32_t*) (VAR_17->pos);
            if (VAR_13 > 0) {
                VAR_16.data = VAR_17->pos + sizeof(uint32_t);
                VAR_16.len = VAR_13;
            }

            FUNC_5(VAR_6, VAR_8->log, 0,
                          "read data (data server: %s) failed, "
                          "error code (%d) err_msg(%V)",
                          VAR_18->peer_addr_text, VAR_12, &VAR_16);
        }

        return VAR_1;
    }

    VAR_9 = FUNC_0(VAR_17);


    if (VAR_8->read_ver == VAR_3) {

        if (VAR_8->length < 0
            || (size_t) VAR_8->length <= VAR_4)
        {
            VAR_8->length -= VAR_9;
            if (VAR_8->length == 0) {
                VAR_8->readv2_rsp_tail_buf->last =
                         FUNC_1(VAR_8->readv2_rsp_tail_buf->last, VAR_17->pos, VAR_9);
                VAR_20 = (ngx_http_tfs_ds_readv2_response_tail_t *)
                                   VAR_8->readv2_rsp_tail_buf->pos;
                if (VAR_20->file_info_len
                    != VAR_2)
                {
                    return VAR_0;
                }
                FUNC_4(&VAR_20->file_info, &VAR_8->file_stat);
                VAR_8->file.left_length = FUNC_6(VAR_8->file.left_length, (uint64_t)VAR_8->file_stat.size);
            }
            return VAR_7;
        }


        VAR_10 = VAR_8->length - VAR_9;
        if (VAR_10 < VAR_4) {
            VAR_11 = VAR_4 - VAR_10;
            VAR_9 -= VAR_11;
            VAR_8->length -= VAR_11;

            if (VAR_10 == 0) {
                VAR_20 = (ngx_http_tfs_ds_readv2_response_tail_t *)
                                   (VAR_17->pos + VAR_9);

                if (VAR_20->file_info_len
                    != VAR_2)
                {
                    return VAR_0;
                }
                FUNC_4(&VAR_20->file_info, &VAR_8->file_stat);
                VAR_8->file.left_length = FUNC_6(VAR_8->file.left_length, (uint64_t)VAR_8->file_stat.size);


            } else if (VAR_10 > 0) {
                VAR_8->readv2_rsp_tail_buf = FUNC_2(VAR_8->pool,
                                                 VAR_4);
                if (VAR_8->readv2_rsp_tail_buf == ((void*)0)) {
                    return VAR_0;
                }
                VAR_8->readv2_rsp_tail_buf->last =
                                        FUNC_1(VAR_8->readv2_rsp_tail_buf->last,
                                                   VAR_17->pos + VAR_9, VAR_11);

            } else {
                return VAR_0;
            }


        } else if (VAR_10 == VAR_4) {
            VAR_8->readv2_rsp_tail_buf = FUNC_2(VAR_8->pool,
                                                 VAR_4);
            if (VAR_8->readv2_rsp_tail_buf == ((void*)0)) {
                return VAR_0;
            }
        }
    }

    if ((!VAR_8->is_large_file && !VAR_8->is_stat_dup_file )
        || (VAR_8->is_large_file && !VAR_8->is_process_meta_seg))
    {
        VAR_15 = FUNC_3(VAR_8, VAR_9, VAR_17->pos);
        if (VAR_15 == VAR_0) {
            return VAR_15;
        }
    }

    VAR_8->stat_info.size += VAR_9;
    VAR_8->length -= VAR_9;

    return VAR_7;
}
