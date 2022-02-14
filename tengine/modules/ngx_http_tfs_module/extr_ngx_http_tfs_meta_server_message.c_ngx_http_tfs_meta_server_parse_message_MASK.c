
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int code; } ;
struct TYPE_10__ {TYPE_1__ action; } ;
struct TYPE_11__ {int state; TYPE_2__ r_ctx; } ;
typedef TYPE_3__ ngx_http_tfs_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

ngx_int_t
FUNC_4(ngx_http_tfs_t *VAR_1)
{
    uint16_t VAR_2;

    VAR_2 = VAR_1->r_ctx.action.code;

    switch (VAR_2) {

    case 141:
    case 140:
    case 134:
    case 137:
    case 136:
        return FUNC_0(VAR_1);

    case 133:
        switch (VAR_1->state) {
        case 131:
            return FUNC_2(VAR_1);
        case 130:
            return FUNC_0(VAR_1);
        default:
            return VAR_0;
        }

    case 139:
    case 138:
        return FUNC_1(VAR_1);

    case 135:
        return FUNC_2(VAR_1);

    case 132:
        switch (VAR_1->state) {
        case 129:
            return FUNC_2(VAR_1);

        case 128:
            return FUNC_3(VAR_1);

        default:
            return VAR_0;
        }
    default:
        return VAR_0;
    }

    return VAR_0;
}
