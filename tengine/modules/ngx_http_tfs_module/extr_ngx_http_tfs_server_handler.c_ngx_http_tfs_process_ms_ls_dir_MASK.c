
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


typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {scalar_t__ file_count; scalar_t__ rest_file_count; struct TYPE_23__* next; } ;
struct TYPE_19__ {int file_type; int chk_exist; } ;
struct TYPE_18__ {scalar_t__ still_have; } ;
struct TYPE_20__ {scalar_t__ length; TYPE_7__ meta_info; int state; TYPE_3__ r_ctx; int json_output; TYPE_8__* out_bufs; TYPE_2__ file; int log; TYPE_1__* loc_conf; int pool; TYPE_5__* tfs_peer_servers; TYPE_5__* tfs_peer; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_25__ {scalar_t__ last; scalar_t__ end; scalar_t__ start; scalar_t__ pos; } ;
struct TYPE_21__ {TYPE_9__ body_buffer; } ;
typedef TYPE_5__ ngx_http_tfs_peer_connection_t ;
struct TYPE_22__ {int still_have; scalar_t__ count; } ;
typedef TYPE_6__ ngx_http_tfs_ms_ls_response_t ;
typedef int ngx_http_tfs_inet_t ;
typedef TYPE_7__ ngx_http_tfs_custom_meta_info_t ;
struct TYPE_24__ {struct TYPE_24__* next; } ;
typedef TYPE_8__ ngx_chain_t ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_17__ {int meta_root_server; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*) ;
 TYPE_8__* FUNC_2 (int ,TYPE_7__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_5__*,int *) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;

ngx_int_t
FUNC_7(ngx_http_tfs_t *VAR_10)
{
    ngx_buf_t *VAR_11;
    ngx_int_t VAR_12;
    ngx_chain_t *VAR_13, **VAR_14;
    ngx_http_tfs_ms_ls_response_t *VAR_15;
    ngx_http_tfs_peer_connection_t *VAR_16;
    ngx_http_tfs_peer_connection_t *VAR_17;
    ngx_http_tfs_custom_meta_info_t *VAR_18;

    VAR_17 = VAR_10->tfs_peer;
    VAR_11 = &VAR_17->body_buffer;
    VAR_16 = VAR_10->tfs_peer_servers;

    if (VAR_10->length != FUNC_0(VAR_11) && VAR_11->last != VAR_11->end) {
        return VAR_0;
    }

    VAR_12 = FUNC_3(VAR_10);
    if (VAR_12 == VAR_2) {
        return VAR_2;
    }


    if (VAR_12 == VAR_3
        || VAR_12 == VAR_4)
    {
        VAR_10->state = VAR_7;
        FUNC_1(VAR_11);

        FUNC_4(VAR_10->pool,
                                   &VAR_16[VAR_5],
                                   (ngx_http_tfs_inet_t *)
                                    &VAR_10->loc_conf->meta_root_server);

        FUNC_5(VAR_8, VAR_10->log, 0,
                      "need update meta table, rc: %i", VAR_12);

        return VAR_9;
    }

    if (VAR_12 == VAR_9) {
        if (VAR_10->length == 0) {
            if (!VAR_10->r_ctx.chk_exist) {
                if (VAR_10->file.still_have) {
                    FUNC_1(VAR_11);
                    return VAR_9;
                }

                if (VAR_10->meta_info.file_count > 0) {

                    for (VAR_13 = VAR_10->out_bufs, VAR_14 = &VAR_10->out_bufs; VAR_13; VAR_13 = VAR_13->next)
                    {
                        VAR_14 = &VAR_13->next;
                    }

                    VAR_13 = FUNC_2(VAR_10->json_output,
                                                            &VAR_10->meta_info,
                                                            VAR_10->r_ctx.file_type);
                    if (VAR_13 == ((void*)0)) {
                        return VAR_2;
                    }

                    *VAR_14 = VAR_13;
                }
            }

            VAR_10->state = VAR_6;
            return VAR_1;
        }



        for(VAR_18 = &VAR_10->meta_info;
            VAR_18->next;
            VAR_18 = VAR_18->next);

        if (VAR_18->rest_file_count > 0) {

            VAR_15 = (ngx_http_tfs_ms_ls_response_t *) VAR_11->start;
            VAR_15->still_have = 1;
            VAR_15->count = VAR_18->rest_file_count;
            VAR_11->last =
                FUNC_6(VAR_11->start + sizeof(ngx_http_tfs_ms_ls_response_t),
                            VAR_11->pos, FUNC_0(VAR_11));
            VAR_11->pos = VAR_11->start;

            VAR_10->length += FUNC_0(VAR_11);
            return VAR_0;
        }

    }

    return VAR_12;
}
