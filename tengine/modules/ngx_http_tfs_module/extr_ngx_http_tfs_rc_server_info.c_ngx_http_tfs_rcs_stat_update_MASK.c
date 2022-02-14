
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_10__ {TYPE_1__ stat_info; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_11__ {scalar_t__ app_id; TYPE_2__* stat_rcs; } ;
typedef TYPE_4__ ngx_http_tfs_rcs_info_t ;
typedef scalar_t__ ngx_http_tfs_oper_type_e ;
typedef size_t int32_t ;
struct TYPE_9__ {scalar_t__ oper_app_id; int oper_rt; int oper_succ; int oper_size; int oper_times; scalar_t__ oper_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;

ngx_int_t
FUNC_1(ngx_http_tfs_t *VAR_3,
    ngx_http_tfs_rcs_info_t *VAR_4, ngx_http_tfs_oper_type_e VAR_5)
{
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 >= VAR_1) {
        return VAR_0;
    }

    int32_t VAR_6 = VAR_5;

    if (VAR_4->stat_rcs[VAR_6].oper_app_id == 0 ) {
        VAR_4->stat_rcs[VAR_6].oper_app_id = VAR_4->app_id;
        VAR_4->stat_rcs[VAR_6].oper_type = VAR_5;
    }

    ++VAR_4->stat_rcs[VAR_6].oper_times;
    VAR_4->stat_rcs[VAR_6].oper_size += VAR_3->stat_info.size;
    ++VAR_4->stat_rcs[VAR_6].oper_succ;
    VAR_4->stat_rcs[VAR_6].oper_rt += FUNC_0(VAR_3);

    return VAR_2;
}
