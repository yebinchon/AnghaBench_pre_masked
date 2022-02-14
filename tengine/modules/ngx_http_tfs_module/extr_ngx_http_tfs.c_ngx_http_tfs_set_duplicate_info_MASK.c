
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {TYPE_4__* segment_data; } ;
struct TYPE_9__ {scalar_t__ code; } ;
struct TYPE_10__ {TYPE_1__ action; } ;
struct TYPE_14__ {int state; TYPE_5__ file; int * out_bufs; void* use_dedup; void* is_stat_dup_file; TYPE_2__ r_ctx; int log; int pool; int dedup_ctx; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
struct TYPE_11__ {int file_id; int block_id; } ;
struct TYPE_12__ {TYPE_3__ segment_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_6__*,scalar_t__) ;

ngx_int_t
FUNC_2(ngx_http_tfs_t *VAR_6)
{
    ngx_int_t VAR_7;

    VAR_7 = FUNC_0(&VAR_6->dedup_ctx, VAR_6->pool,
                                VAR_6->log);

    if (VAR_7 == VAR_1) {
        if (VAR_6->r_ctx.action.code == VAR_2) {
            switch (VAR_6->state) {
            case 128:


                VAR_6->state = VAR_4;
                VAR_6->is_stat_dup_file = VAR_3;
                VAR_6->use_dedup = VAR_3;

                VAR_6->out_bufs = ((void*)0);

                VAR_6->file.segment_data[0].segment_info.block_id = 0;
                VAR_6->file.segment_data[0].segment_info.file_id = 0;
                VAR_7 = VAR_5;
                break;
            case 129:
                VAR_7 = VAR_0;
            }
        }

        FUNC_1(VAR_6, VAR_7);
    }

    return VAR_5;
}
