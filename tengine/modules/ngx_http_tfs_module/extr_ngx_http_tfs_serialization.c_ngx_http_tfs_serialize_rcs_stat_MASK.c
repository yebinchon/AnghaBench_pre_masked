
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef size_t ngx_int_t ;
struct TYPE_4__ {int oper_app_id; int oper_type; int oper_succ; int oper_rt; int oper_size; int oper_times; } ;
typedef TYPE_1__ ngx_http_tfs_stat_rcs_t ;
struct TYPE_5__ {TYPE_1__* stat_rcs; } ;
typedef TYPE_2__ ngx_http_tfs_rcs_info_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

ngx_int_t
FUNC_0(u_char **VAR_3,
    ngx_http_tfs_rcs_info_t *VAR_4, ngx_int_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_http_tfs_stat_rcs_t *VAR_7;

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_5 = 0;
    VAR_7 = VAR_4->stat_rcs;

    for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
        if (VAR_7[VAR_6].oper_app_id == 0) {
            continue;
        }

        *((uint32_t *)*VAR_3) = (VAR_7[VAR_6].oper_app_id << 16) | VAR_7[VAR_6].oper_type;
        (*VAR_3) += sizeof(uint32_t);

        *((uint32_t *)*VAR_3) = (VAR_7[VAR_6].oper_app_id << 16) | VAR_7[VAR_6].oper_type;
        (*VAR_3) += sizeof(uint32_t);
        *((uint64_t *)*VAR_3) = VAR_7[VAR_6].oper_times;
        (*VAR_3) += sizeof(uint64_t);
        *((uint64_t *)*VAR_3) = VAR_7[VAR_6].oper_size;
        (*VAR_3) += sizeof(uint64_t);
        *((uint64_t *)*VAR_3) = VAR_7[VAR_6].oper_rt;
        (*VAR_3) += sizeof(uint64_t);
        *((uint64_t *)*VAR_3) = VAR_7[VAR_6].oper_succ;
        (*VAR_3) += sizeof(uint64_t);

        ++(*VAR_5);
    }

    return VAR_2;
}
