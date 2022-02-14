
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int crc; int flag; int create_time; int modify_time; int u_size; int size; int offset; int id; } ;
typedef TYPE_1__ ngx_http_tfs_raw_file_stat_t ;
struct TYPE_6__ {int crc; int flag; int create_time; int modify_time; int u_size; int size; int offset; int id; } ;
typedef TYPE_2__ ngx_http_tfs_raw_file_info_t ;



void
FUNC_0(ngx_http_tfs_raw_file_info_t *VAR_0,
    ngx_http_tfs_raw_file_stat_t *VAR_1)
{
    if (VAR_0 != ((void*)0) && VAR_1 != ((void*)0)) {
        VAR_1->id = VAR_0->id;
        VAR_1->offset = VAR_0->offset;
        VAR_1->size = VAR_0->size;
        VAR_1->u_size = VAR_0->u_size;
        VAR_1->modify_time = VAR_0->modify_time;
        VAR_1->create_time = VAR_0->create_time;
        VAR_1->flag = VAR_0->flag;
        VAR_1->crc = VAR_0->crc;
    }
}
