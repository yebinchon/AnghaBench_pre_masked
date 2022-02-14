
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int state; int length; size_t padding; } ;
typedef TYPE_1__ ngx_http_upstream_check_ctx_t ;
struct TYPE_9__ {int code; } ;
typedef TYPE_2__ ngx_http_status_t ;
typedef int ngx_http_fastcgi_state_e ;
struct TYPE_10__ {int* pos; int* last; } ;
typedef TYPE_3__ ngx_buf_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_7__* VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(
    ngx_http_upstream_check_ctx_t *VAR_6, ngx_buf_t *VAR_7, ngx_http_status_t *VAR_8)
{
    u_char VAR_9, *VAR_10;
    ngx_http_fastcgi_state_e VAR_11;

    VAR_11 = VAR_6->state;

    for (VAR_10 = VAR_7->pos; VAR_10 < VAR_7->last; VAR_10++) {

        VAR_9 = *VAR_10;

        FUNC_0(VAR_2, VAR_5->log, 0,
                       "http fastcgi record byte: %02Xd", VAR_9);

        switch (VAR_11) {

        case 128:
            if (VAR_9 != 1) {
                FUNC_1(VAR_3, VAR_5->log, 0,
                              "upstream sent unsupported FastCGI "
                              "protocol version: %d", VAR_9);
                return VAR_1;
            }
            VAR_11 = 129;
            break;

        case 129:
            switch (VAR_9) {
            case 138:
            case 139:
            case 140:
                VAR_8->code = (ngx_uint_t) VAR_9;
                break;
            default:
                FUNC_1(VAR_3, VAR_5->log, 0,
                              "upstream sent invalid FastCGI "
                              "record type: %d", VAR_9);
                return VAR_1;

            }
            VAR_11 = 132;
            break;



        case 132:
            if (VAR_9 != 0) {
                FUNC_1(VAR_3, VAR_5->log, 0,
                              "upstream sent unexpected FastCGI "
                              "request id high byte: %d", VAR_9);
                return VAR_1;
            }
            VAR_11 = 131;
            break;

        case 131:
            if (VAR_9 != 1) {
                FUNC_1(VAR_3, VAR_5->log, 0,
                              "upstream sent unexpected FastCGI "
                              "request id low byte: %d", VAR_9);
                return VAR_1;
            }
            VAR_11 = 137;
            break;

        case 137:
            VAR_6->length = VAR_9 << 8;
            VAR_11 = 136;
            break;

        case 136:
            VAR_6->length |= (size_t) VAR_9;
            VAR_11 = 133;
            break;

        case 133:
            VAR_6->padding = (size_t) VAR_9;
            VAR_11 = 130;
            break;

        case 130:
            VAR_11 = 135;

            VAR_7->pos = VAR_10 + 1;
            VAR_6->state = VAR_11;

            return VAR_4;


        case 135:
        case 134:
            break;
        }
    }

    VAR_6->state = VAR_11;

    return VAR_0;
}
