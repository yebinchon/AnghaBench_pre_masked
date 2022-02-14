
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* data; scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_http_tfs_raw_file_type_e ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

ngx_http_tfs_raw_file_type_e
FUNC_0(ngx_str_t *VAR_6)
{
    ngx_http_tfs_raw_file_type_e VAR_7 = VAR_1;

    if (VAR_6->data != ((void*)0)
        && VAR_6->len >= VAR_0)
    {
        if (VAR_6->data[0] == VAR_2) {
            VAR_7 = VAR_3;

        } else if (VAR_6->data[0] == VAR_4) {
            VAR_7 = VAR_5;
        }
    }

    return VAR_7;
}
