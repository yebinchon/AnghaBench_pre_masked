
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_17__ {int len; } ;
struct TYPE_13__ {int code; } ;
struct TYPE_15__ {TYPE_5__ file_path_s; TYPE_1__ action; } ;
struct TYPE_14__ {int left_length; int file_offset; } ;
struct TYPE_16__ {int * json_output; int pool; int log; TYPE_3__ r_ctx; TYPE_2__ file; int state; TYPE_5__ last_file_path; int last_dir_level; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
typedef int ngx_chain_t ;
 int VAR_0 ;
 int * FUNC_0 (TYPE_4__*,TYPE_5__*,TYPE_5__*) ;
 int * FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (TYPE_4__*,int ,int ) ;
 int * FUNC_3 (TYPE_4__*) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int ,int ,TYPE_5__*) ;

ngx_chain_t *
FUNC_6(ngx_http_tfs_t *VAR_1)
{
    uint16_t VAR_2;
    ngx_chain_t *VAR_3;

    VAR_3 = ((void*)0);
    VAR_2 = VAR_1->r_ctx.action.code;

    switch (VAR_2) {

    case 141:
    case 140:
        FUNC_5(VAR_0, VAR_1->log, 0,
                      "will create path: "
                      "last_dir_level: %i, dir_len: %i, last_file_path: %V",
                      VAR_1->last_dir_level,
                      VAR_1->last_file_path.len,
                      &VAR_1->last_file_path);
        VAR_3 = FUNC_0(VAR_1, &VAR_1->last_file_path, ((void*)0));
        break;

    case 137:
    case 136:
        VAR_3 = FUNC_0(VAR_1, &VAR_1->r_ctx.file_path_s,
                                                &VAR_1->last_file_path);
        break;

    case 134:
        VAR_3 = FUNC_0(VAR_1, &VAR_1->r_ctx.file_path_s, ((void*)0));
        break;

    case 135:
        VAR_3 = FUNC_2(VAR_1, VAR_1->file.file_offset,
                                                   VAR_1->file.left_length);
        break;

    case 132:
        switch (VAR_1->state) {
        case 129:
            VAR_3 = FUNC_2(VAR_1, 0, 0);
            break;
        case 128:
            VAR_3 = FUNC_3(VAR_1);
            break;
        }
        break;

    case 133:
        switch (VAR_1->state) {
        case 131:
            VAR_3 = FUNC_2(VAR_1, VAR_1->file.file_offset,
                                                       VAR_1->file.left_length);
            break;
        case 130:
            VAR_3 = FUNC_0(VAR_1, &VAR_1->r_ctx.file_path_s,
                                                    ((void*)0));
            break;
        }
        break;

    case 139:
    case 138:
        VAR_1->json_output = FUNC_4(VAR_1->log, VAR_1->pool);
        if (VAR_1->json_output == ((void*)0)) {
            return ((void*)0);
        }
        VAR_3 = FUNC_1(VAR_1);
        break;
    }

    return VAR_3;
}
