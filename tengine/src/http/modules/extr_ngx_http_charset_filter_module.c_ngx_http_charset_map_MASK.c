
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* u_char ;
typedef int ngx_uint_t ;
struct TYPE_11__ {int len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {void** src2dst; void** dst2src; } ;
typedef TYPE_4__ ngx_http_charset_tables_t ;
struct TYPE_13__ {int characters; TYPE_2__* charset; TYPE_4__* table; } ;
typedef TYPE_5__ ngx_http_charset_conf_ctx_t ;
struct TYPE_14__ {int pool; TYPE_5__* ctx; TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_10__ {int length; scalar_t__ utf8; } ;
struct TYPE_9__ {int nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_6__*,int ,char*,...) ;
 int FUNC_1 (int *,int) ;
 void** FUNC_2 (int ,int) ;
 int FUNC_3 (void***,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    u_char *VAR_8, *VAR_9, **VAR_10;
    uint32_t VAR_11;
    ngx_int_t VAR_12, VAR_13;
    ngx_str_t *VAR_14;
    ngx_uint_t VAR_15;
    ngx_http_charset_tables_t *VAR_16;
    ngx_http_charset_conf_ctx_t *VAR_17;

    if (VAR_5->args->nelts != 2) {
        FUNC_0(VAR_3, VAR_5, 0, "invalid parameters number");
        return VAR_0;
    }

    VAR_14 = VAR_5->args->elts;

    VAR_12 = FUNC_1(VAR_14[0].data, VAR_14[0].len);
    if (VAR_12 == VAR_2 || VAR_12 > 255) {
        FUNC_0(VAR_3, VAR_5, 0,
                           "invalid value \"%V\"", &VAR_14[0]);
        return VAR_0;
    }

    VAR_17 = VAR_5->ctx;
    VAR_16 = VAR_17->table;

    if (VAR_17->charset->utf8) {
        VAR_8 = &VAR_16->src2dst[VAR_12 * VAR_4];

        *VAR_8++ = (u_char) (VAR_14[1].len / 2);

        for (VAR_15 = 0; VAR_15 < VAR_14[1].len; VAR_15 += 2) {
            VAR_13 = FUNC_1(&VAR_14[1].data[VAR_15], 2);
            if (VAR_13 == VAR_2 || VAR_13 > 255) {
                FUNC_0(VAR_3, VAR_5, 0,
                                   "invalid value \"%V\"", &VAR_14[1]);
                return VAR_0;
            }

            *VAR_8++ = (u_char) VAR_13;
        }

        VAR_15 /= 2;

        VAR_17->charset->length += VAR_15;
        VAR_17->characters++;

        VAR_8 = &VAR_16->src2dst[VAR_12 * VAR_4] + 1;

        VAR_11 = FUNC_3(&VAR_8, VAR_15);

        if (VAR_11 > 0xffff) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "invalid value \"%V\"", &VAR_14[1]);
            return VAR_0;
        }

        VAR_10 = (u_char **) &VAR_16->dst2src[0];

        VAR_9 = VAR_10[VAR_11 >> 8];

        if (VAR_9 == ((void*)0)) {
            VAR_9 = FUNC_2(VAR_5->pool, 256);
            if (VAR_9 == ((void*)0)) {
                return VAR_0;
            }

            VAR_10[VAR_11 >> 8] = VAR_9;
        }

        VAR_9[VAR_11 & 0xff] = (u_char) VAR_12;

    } else {
        VAR_13 = FUNC_1(VAR_14[1].data, VAR_14[1].len);
        if (VAR_13 == VAR_2 || VAR_13 > 255) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "invalid value \"%V\"", &VAR_14[1]);
            return VAR_0;
        }

        VAR_16->src2dst[VAR_12] = (u_char) VAR_13;
        VAR_16->dst2src[VAR_13] = (u_char) VAR_12;
    }

    return VAR_1;
}
