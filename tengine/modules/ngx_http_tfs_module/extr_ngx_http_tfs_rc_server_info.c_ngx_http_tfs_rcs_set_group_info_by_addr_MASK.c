
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef void* ngx_int_t ;
struct TYPE_5__ {size_t unlink_cluster_group_count; TYPE_3__* unlink_cluster_groups; } ;
typedef TYPE_1__ ngx_http_tfs_rcs_info_t ;
typedef int ngx_http_tfs_inet_t ;
struct TYPE_6__ {void* group_seq; int ns_vip; } ;
typedef TYPE_2__ ngx_http_tfs_group_info_t ;
struct TYPE_7__ {size_t info_count; void* group_count; TYPE_2__* group_info; } ;
typedef TYPE_3__ ngx_http_tfs_cluster_group_info_t ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

void
FUNC_1(ngx_http_tfs_rcs_info_t *VAR_0,
    ngx_int_t VAR_1, ngx_int_t VAR_2, ngx_http_tfs_inet_t VAR_3)
{
    ngx_uint_t VAR_4, VAR_5;
    ngx_http_tfs_group_info_t *VAR_6;
    ngx_http_tfs_cluster_group_info_t *VAR_7;

    VAR_7 = VAR_0->unlink_cluster_groups;

    for (VAR_4 = 0; VAR_4 < VAR_0->unlink_cluster_group_count; VAR_4++) {
        VAR_6 = VAR_7[VAR_4].group_info;

        for (VAR_5 = 0; VAR_5 < VAR_7[VAR_4].info_count; VAR_5++) {

            if (FUNC_0(&VAR_6[VAR_5].ns_vip, &VAR_3,
                           sizeof(ngx_http_tfs_inet_t)) == 0)
            {
                VAR_6[VAR_5].group_seq = VAR_2;
                VAR_7[VAR_4].group_count = VAR_1;
                return;
            }
        }
    }
}
