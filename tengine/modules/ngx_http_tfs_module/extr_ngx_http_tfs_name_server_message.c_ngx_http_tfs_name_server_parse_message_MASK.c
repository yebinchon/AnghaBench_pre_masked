
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int code; } ;
struct TYPE_11__ {int version; TYPE_1__ action; } ;
struct TYPE_10__ {size_t segment_index; int * segment_data; } ;
struct TYPE_12__ {int state; int is_process_meta_seg; int is_large_file; TYPE_3__ r_ctx; int is_rolling_back; int parent; TYPE_2__ file; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_segment_data_t ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,int ) ;

ngx_int_t
FUNC_3(ngx_http_tfs_t *VAR_4)
{
    uint16_t VAR_5;
    ngx_int_t VAR_6;
    ngx_http_tfs_segment_data_t *VAR_7;

    VAR_6 = VAR_0;
    VAR_5 = VAR_4->r_ctx.action.code;
    VAR_7 = &VAR_4->file.segment_data[VAR_4->file.segment_index];

    switch (VAR_5) {
    case 136:
        return FUNC_1(VAR_4, VAR_7);

    case 138:
        if (!VAR_4->parent
            && (VAR_4->r_ctx.version == 2
                || (VAR_4->is_large_file && !VAR_4->is_process_meta_seg)))
        {
            VAR_6 = FUNC_0(VAR_4, VAR_7);

        } else {
            VAR_6 = FUNC_1(VAR_4, VAR_7);
        }
        return VAR_6;

    case 135:
        switch(VAR_4->state) {
        case 129:
            return FUNC_2(VAR_4,
                VAR_2);

        case 128:
            return FUNC_2(VAR_4,
                VAR_3);

        case 131:
            return FUNC_2(VAR_4,
                VAR_1);

        case 130:
            if (!VAR_4->parent
                && !VAR_4->is_rolling_back
                && (VAR_4->r_ctx.version == 2
                    || (VAR_4->is_large_file && !VAR_4->is_process_meta_seg)))
            {
                VAR_6 = FUNC_0(VAR_4,
                                                                 VAR_7);

            } else {
                VAR_6 = FUNC_1(VAR_4, VAR_7);
            }
        }
        return VAR_6;

    case 137:
        switch(VAR_4->state) {
        case 133:
            VAR_6 = FUNC_2(VAR_4,
                                              VAR_2);
            return VAR_6;

        case 132:
            VAR_6 = FUNC_2(VAR_4,
                                                VAR_3);
            return VAR_6;

        case 134:
            return FUNC_1(VAR_4, VAR_7);

        default:
            break;
        }
    }

    return VAR_0;
}
