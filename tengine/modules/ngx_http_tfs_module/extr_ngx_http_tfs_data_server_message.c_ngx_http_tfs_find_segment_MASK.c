
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ offset; } ;
typedef TYPE_1__ ngx_http_tfs_segment_info_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;



int32_t
FUNC_0(uint32_t VAR_0,
    ngx_http_tfs_segment_info_t *VAR_1, int64_t VAR_2)
{
    int32_t VAR_3, VAR_4, VAR_5;

    VAR_3 = 0;
    VAR_4 = VAR_0 - 1;
    VAR_5 = (VAR_3 + VAR_4) / 2;
    while (VAR_3 <= VAR_4) {
        if (VAR_1[VAR_5].offset == VAR_2) {
            return VAR_5;
        }
        if (VAR_1[VAR_5].offset < VAR_2) {
            VAR_3 = VAR_5 + 1;

        } else {
            VAR_4 = VAR_5 - 1;
        }
        VAR_5 = (VAR_3 + VAR_4) / 2;
    }
    return -VAR_3;
}
