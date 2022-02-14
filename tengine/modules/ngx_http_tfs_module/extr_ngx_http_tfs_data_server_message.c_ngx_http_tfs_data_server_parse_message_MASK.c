
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_13__ {int code; } ;
struct TYPE_14__ {TYPE_2__ action; } ;
struct TYPE_12__ {size_t segment_index; int * segment_data; } ;
struct TYPE_15__ {int state; TYPE_3__ r_ctx; TYPE_1__ file; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_segment_data_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_4__*) ;

ngx_int_t
FUNC_6(ngx_http_tfs_t *VAR_1)
{
    ngx_http_tfs_segment_data_t *VAR_2;

    VAR_2 = &VAR_1->file.segment_data[VAR_1->file.segment_index];

    switch (VAR_1->r_ctx.action.code) {
    case 139:
        return FUNC_2(VAR_1);

    case 137:
        return FUNC_4(VAR_1, VAR_2);

    case 136:
        switch(VAR_1->state) {
        case 129:
            return FUNC_4(VAR_1, VAR_2);
        case 131:
            return FUNC_1(VAR_1, VAR_2);
        case 128:
            return FUNC_5(VAR_1);
        case 132:
            return FUNC_0(VAR_1);
        case 130:
            return FUNC_3(VAR_1);
        default:
            return VAR_0;
        }

    case 138:
        switch(VAR_1->state) {
        case 133:
            return FUNC_4(VAR_1, VAR_2);
        case 134:
            return FUNC_2(VAR_1);
        case 135:
            return FUNC_3(VAR_1);
        default:
            return VAR_0;
        }
    }

    return VAR_0;
}
