
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
typedef size_t ngx_int_t ;
struct TYPE_15__ {size_t src; size_t dst; int * dst2src; int * src2dst; } ;
typedef TYPE_4__ ngx_http_charset_tables_t ;
struct TYPE_16__ {int ** tables; int name; } ;
typedef TYPE_5__ ngx_http_charset_t ;
struct TYPE_17__ {size_t src; size_t dst; } ;
typedef TYPE_6__ ngx_http_charset_recode_t ;
struct TYPE_14__ {int nelts; TYPE_5__* elts; } ;
struct TYPE_13__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_12__ {size_t nelts; TYPE_6__* elts; } ;
struct TYPE_18__ {TYPE_3__ charsets; TYPE_2__ tables; TYPE_1__ recodes; } ;
typedef TYPE_7__ ngx_http_charset_main_conf_t ;
struct TYPE_19__ {int pool; int log; } ;
typedef TYPE_8__ ngx_conf_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* FUNC_0 (TYPE_8__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ,char*,int *,int *) ;
 int ** FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_10)
{
    u_char **VAR_11, **VAR_12;
    ngx_int_t VAR_13;
    ngx_uint_t VAR_14, VAR_15;
    ngx_http_charset_t *VAR_16;
    ngx_http_charset_recode_t *VAR_17;
    ngx_http_charset_tables_t *VAR_18;
    ngx_http_charset_main_conf_t *VAR_19;

    VAR_19 = FUNC_0(VAR_10,
                                             VAR_4);

    VAR_17 = VAR_19->recodes.elts;
    VAR_18 = VAR_19->tables.elts;
    VAR_16 = VAR_19->charsets.elts;

    for (VAR_14 = 0; VAR_14 < VAR_19->recodes.nelts; VAR_14++) {

        VAR_13 = VAR_17[VAR_14].src;

        for (VAR_15 = 0; VAR_15 < VAR_19->tables.nelts; VAR_15++) {

            if (VAR_13 == VAR_18[VAR_15].src && VAR_17[VAR_14].dst == VAR_18[VAR_15].dst) {
                goto next;
            }

            if (VAR_13 == VAR_18[VAR_15].dst && VAR_17[VAR_14].dst == VAR_18[VAR_15].src) {
                goto next;
            }
        }

        FUNC_1(VAR_1, VAR_10->log, 0,
                   "no \"charset_map\" between the charsets \"%V\" and \"%V\"",
                   &VAR_16[VAR_13].name, &VAR_16[VAR_17[VAR_14].dst].name);
        return VAR_0;

    next:
        continue;
    }


    for (VAR_15 = 0; VAR_15 < VAR_19->tables.nelts; VAR_15++) {

        VAR_11 = VAR_16[VAR_18[VAR_15].src].tables;

        if (VAR_11 == ((void*)0)) {
            VAR_11 = FUNC_2(VAR_10->pool, sizeof(u_char *) * VAR_19->charsets.nelts);
            if (VAR_11 == ((void*)0)) {
                return VAR_0;
            }

            VAR_16[VAR_18[VAR_15].src].tables = VAR_11;
        }

        VAR_12 = VAR_16[VAR_18[VAR_15].dst].tables;

        if (VAR_12 == ((void*)0)) {
            VAR_12 = FUNC_2(VAR_10->pool, sizeof(u_char *) * VAR_19->charsets.nelts);
            if (VAR_12 == ((void*)0)) {
                return VAR_0;
            }

            VAR_16[VAR_18[VAR_15].dst].tables = VAR_12;
        }

        VAR_11[VAR_18[VAR_15].dst] = VAR_18[VAR_15].src2dst;
        VAR_12[VAR_18[VAR_15].src] = VAR_18[VAR_15].dst2src;
    }

    VAR_7 = VAR_9;
    VAR_9 = VAR_5;

    VAR_6 = VAR_8;
    VAR_8 = VAR_3;

    return VAR_2;
}
