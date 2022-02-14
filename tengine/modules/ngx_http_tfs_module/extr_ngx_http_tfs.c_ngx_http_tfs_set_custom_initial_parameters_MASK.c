
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int code; } ;
struct TYPE_8__ {int size; int offset; int file_type; int file_path_s; int file_path_d; TYPE_1__ action; int file_suffix; } ;
struct TYPE_7__ {int left_length; int file_offset; } ;
struct TYPE_9__ {int last_file_pid; TYPE_3__ r_ctx; TYPE_2__ file; int last_file_type; int last_file_path; int file_name; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
void
FUNC_0(ngx_http_tfs_t *VAR_0)
{

    VAR_0->file_name = VAR_0->r_ctx.file_path_s;
    VAR_0->r_ctx.file_suffix = VAR_0->r_ctx.file_path_d;

    switch(VAR_0->r_ctx.action.code) {
    case 135:
    case 134:
        VAR_0->last_file_path = VAR_0->r_ctx.file_path_s;
        break;

    case 131:
    case 130:
        VAR_0->last_file_path = VAR_0->r_ctx.file_path_d;
        break;

    case 133:
    case 132:

        VAR_0->last_file_path = VAR_0->r_ctx.file_path_s;
        VAR_0->last_file_pid = -1;
        VAR_0->last_file_type = VAR_0->r_ctx.file_type;
        break;

    case 129:
    case 128:
        VAR_0->file.file_offset = VAR_0->r_ctx.offset;
        VAR_0->file.left_length = VAR_0->r_ctx.size;
        break;
    }
}
