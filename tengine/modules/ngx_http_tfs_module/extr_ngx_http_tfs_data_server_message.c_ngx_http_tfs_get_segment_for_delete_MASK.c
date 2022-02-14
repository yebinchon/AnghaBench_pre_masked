
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_12__ {int segment_count; TYPE_6__* segment_data; scalar_t__ segment_index; } ;
struct TYPE_13__ {TYPE_2__ file; int pool; TYPE_4__* seg_head; int log; TYPE_1__* meta_segment_data; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_segment_info_t ;
struct TYPE_14__ {int count; } ;
typedef TYPE_4__ ngx_http_tfs_segment_head_t ;
typedef int ngx_http_tfs_segment_data_t ;
struct TYPE_15__ {int * last; scalar_t__ pos; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_16__ {int segment_info; } ;
struct TYPE_11__ {TYPE_5__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_6__* FUNC_1 (int ,TYPE_6__*,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,int,int) ;
 int FUNC_3 (TYPE_6__*,int) ;

ngx_int_t
FUNC_4(ngx_http_tfs_t *VAR_3)
{
    uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
    ngx_buf_t *VAR_8;
    ngx_http_tfs_segment_info_t *VAR_9;

    if (VAR_3->meta_segment_data == ((void*)0)) {
        return VAR_0;
    }
    VAR_8 = VAR_3->meta_segment_data->buf;
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4 = FUNC_0(VAR_8);
    if (VAR_4 < (sizeof(ngx_http_tfs_segment_head_t) +
                    sizeof(ngx_http_tfs_segment_info_t)))
    {
        return VAR_0;
    }

    VAR_3->seg_head = (ngx_http_tfs_segment_head_t*)(VAR_8->pos);
    VAR_9 = (ngx_http_tfs_segment_info_t*)
        (VAR_8->pos + sizeof(ngx_http_tfs_segment_head_t));


    VAR_5 = VAR_3->seg_head->count + 1;
    VAR_6 = (VAR_8->last - (u_char *) VAR_9)
                    / sizeof(ngx_http_tfs_segment_info_t);
    if (VAR_3->seg_head->count > VAR_6) {
        FUNC_2(VAR_1, VAR_3->log, 0,
                      "seg_count in seg_head larger than max seg_count, "
                      "%uD > %uD, seg_head may be corrupted",
                      VAR_3->seg_head->count, VAR_6);
        VAR_5 = VAR_6;
    }

    VAR_3->file.segment_data = FUNC_1(VAR_3->pool, VAR_3->file.segment_data,
                              sizeof(ngx_http_tfs_segment_data_t),
                              sizeof(ngx_http_tfs_segment_data_t) * VAR_5);
    if (VAR_3->file.segment_data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(&VAR_3->file.segment_data[1],
                sizeof(ngx_http_tfs_segment_data_t) * (VAR_5 - 1));

    VAR_3->file.segment_index = 0;
    VAR_3->file.segment_count = VAR_5;

    for (VAR_7 = 1; VAR_7 < VAR_3->file.segment_count; VAR_7++) {
        VAR_3->file.segment_data[VAR_7].segment_info = VAR_9[VAR_7-1];
    }
    return VAR_2;
}
