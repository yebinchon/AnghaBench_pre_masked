
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {scalar_t__ block_id; scalar_t__ seq_id; scalar_t__ suffix; } ;
struct TYPE_6__ {scalar_t__ cluster_id; TYPE_1__ file; } ;
typedef TYPE_2__ ngx_http_tfs_raw_fsname_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,TYPE_2__*) ;
 int VAR_2 ;

ngx_int_t
FUNC_1(ngx_str_t *VAR_3,
    ngx_http_tfs_raw_fsname_t* VAR_4)
{
    ngx_int_t VAR_5;
    ngx_str_t VAR_6 = VAR_2;
    ngx_http_tfs_raw_fsname_t VAR_7;

    VAR_5 = FUNC_0(VAR_3, &VAR_6,
                                       &VAR_7);
    if (VAR_5 == VAR_1) {
        if (VAR_4->cluster_id == VAR_7.cluster_id
            && VAR_4->file.block_id == VAR_7.file.block_id
            && VAR_4->file.seq_id == VAR_7.file.seq_id
            && VAR_4->file.suffix == VAR_7.file.suffix)
        {
            return VAR_1;
        }
    }

    return VAR_0;
}
