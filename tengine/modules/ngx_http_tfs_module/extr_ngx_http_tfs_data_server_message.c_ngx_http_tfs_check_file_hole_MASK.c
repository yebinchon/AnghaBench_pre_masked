
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {scalar_t__ offset; } ;
struct TYPE_8__ {scalar_t__ oper_size; TYPE_1__ segment_info; } ;
typedef TYPE_2__ ngx_http_tfs_segment_data_t ;
struct TYPE_9__ {scalar_t__ segment_count; scalar_t__ file_offset; scalar_t__ left_length; int still_have; TYPE_2__* segment_data; } ;
typedef TYPE_3__ ngx_http_tfs_file_t ;
struct TYPE_10__ {scalar_t__ offset; scalar_t__ length; } ;
typedef TYPE_4__ ngx_http_tfs_file_hole_info_t ;
typedef int ngx_array_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

ngx_int_t
FUNC_3(ngx_http_tfs_file_t *VAR_4, ngx_array_t *VAR_5, ngx_log_t *VAR_6)
{
    int64_t VAR_7;
    uint32_t VAR_8, VAR_9;
    ngx_http_tfs_segment_data_t *VAR_10;
    ngx_http_tfs_file_hole_info_t *VAR_11;

    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
        return VAR_1;
    }

    VAR_10 = VAR_4->segment_data;
    if (VAR_10 != ((void*)0)) {
        VAR_8 = VAR_4->segment_count;
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++, VAR_10++) {
            if (VAR_4->file_offset < VAR_10->segment_info.offset) {
                VAR_7 = FUNC_2(VAR_4->left_length,
                    (uint64_t)(VAR_10->segment_info.offset - VAR_4->file_offset));
                VAR_11 = FUNC_0(VAR_5);
                if (VAR_11 == ((void*)0)) {
                    return VAR_1;
                }

                VAR_11->offset = VAR_4->file_offset;
                VAR_11->length = VAR_7;

                FUNC_1(VAR_2, VAR_6, 0,
                              "find file hole, offset: %uL, length: %uL",
                              VAR_11->offset, VAR_11->length);

                VAR_4->file_offset += VAR_7;
                VAR_4->left_length -= VAR_7;
                if (VAR_4->left_length == 0) {
                    break;
                }
            }
            VAR_4->file_offset += VAR_10->oper_size;
            VAR_4->left_length -= VAR_10->oper_size;
            if (VAR_4->left_length == 0) {
                break;
            }
        }
    }

    if (!VAR_4->still_have) {

        if (VAR_4->left_length > 0) {
            VAR_11 = FUNC_0(VAR_5);
            if (VAR_11 == ((void*)0)) {
                return VAR_1;
            }

            VAR_11->offset = VAR_4->file_offset;
            VAR_11->length = VAR_4->left_length;

            FUNC_1(VAR_2, VAR_6, 0,
                          "find file hole, offset: %uL, length: %uL",
                          VAR_11->offset, VAR_11->length);
            VAR_4->file_offset += VAR_4->left_length;
            VAR_4->left_length = 0;
        }

        return VAR_0;
    }

    return VAR_3;
}
