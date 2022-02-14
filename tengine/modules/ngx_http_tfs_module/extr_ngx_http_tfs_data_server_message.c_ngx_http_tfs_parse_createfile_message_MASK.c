
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint16_t ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int seq_id; } ;
struct TYPE_14__ {TYPE_1__ file; } ;
struct TYPE_16__ {TYPE_10__ fsname; int file_suffix; } ;
struct TYPE_18__ {TYPE_2__ r_ctx; int log; TYPE_6__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_17__ {int file_id; } ;
struct TYPE_19__ {int write_file_number; TYPE_3__ segment_info; } ;
typedef TYPE_5__ ngx_http_tfs_segment_data_t ;
struct TYPE_23__ {scalar_t__ pos; } ;
struct TYPE_20__ {TYPE_9__ body_buffer; } ;
typedef TYPE_6__ ngx_http_tfs_peer_connection_t ;
struct TYPE_21__ {int type; } ;
typedef TYPE_7__ ngx_http_tfs_header_t ;
struct TYPE_22__ {int file_number; int file_id; } ;
typedef TYPE_8__ ngx_http_tfs_ds_cf_reponse_t ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_10__) ;
 int FUNC_1 (TYPE_10__*,int *) ;
 int FUNC_2 (TYPE_9__*,int *,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int ,int ) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_tfs_t *VAR_2,
    ngx_http_tfs_segment_data_t *VAR_3)
{
    uint16_t VAR_4;
    ngx_str_t VAR_5;
    ngx_http_tfs_header_t *VAR_6;
    ngx_http_tfs_ds_cf_reponse_t *VAR_7;
    ngx_http_tfs_peer_connection_t *VAR_8;

    VAR_6 = (ngx_http_tfs_header_t *) VAR_2->header;
    VAR_8 = VAR_2->tfs_peer;
    VAR_4 = VAR_6->type;

    switch (VAR_4) {

    case 128:
        FUNC_4(&VAR_5, "create file(data server)");
        return FUNC_2(&VAR_8->body_buffer, &VAR_5, VAR_2->log);
    }

    VAR_7 = (ngx_http_tfs_ds_cf_reponse_t *) VAR_8->body_buffer.pos;

    VAR_2->r_ctx.fsname.file.seq_id = VAR_7->file_id;
    FUNC_1((&VAR_2->r_ctx.fsname),
                                       (&VAR_2->r_ctx.file_suffix));
    VAR_3->segment_info.file_id =
                          FUNC_0(VAR_2->r_ctx.fsname);
    VAR_3->write_file_number = VAR_7->file_number;

    FUNC_3(VAR_0, VAR_2->log, 0,
                   "create file success, seq id: %uD, "
                   "file id: %uL, file number: %uL",
                   VAR_2->r_ctx.fsname.file.seq_id,
                   VAR_3->segment_info.file_id,
                   VAR_3->write_file_number);

    return VAR_1;
}
