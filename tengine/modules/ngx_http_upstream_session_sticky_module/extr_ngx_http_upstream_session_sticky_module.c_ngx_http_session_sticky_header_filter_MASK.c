
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_25__ {int len; int data; } ;
struct TYPE_28__ {int value; TYPE_3__ key; } ;
typedef TYPE_6__ ngx_table_elt_t ;
struct TYPE_29__ {size_t nelts; struct TYPE_29__* next; scalar_t__ elts; } ;
typedef TYPE_7__ ngx_list_part_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_30__ {scalar_t__ uscf; } ;
typedef TYPE_8__ ngx_http_ss_loc_conf_t ;
struct TYPE_31__ {TYPE_4__* sscf; } ;
typedef TYPE_9__ ngx_http_ss_ctx_t ;
struct TYPE_23__ {TYPE_7__ part; } ;
struct TYPE_24__ {scalar_t__ status; TYPE_1__ headers; } ;
struct TYPE_22__ {TYPE_5__* connection; TYPE_2__ headers_out; } ;
typedef TYPE_10__ ngx_http_request_t ;
struct TYPE_27__ {int log; } ;
struct TYPE_26__ {int flag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_9__* FUNC_0 (TYPE_10__*,int ) ;
 TYPE_8__* FUNC_1 (TYPE_10__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_10__*) ;
 scalar_t__ FUNC_3 (TYPE_10__*,TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_10__*,TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_10__*) ;
 int VAR_11 ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,char*,int *) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_9 (int ,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_12)
{
    ngx_int_t VAR_13;
    ngx_uint_t VAR_14;
    ngx_list_part_t *VAR_15;
    ngx_table_elt_t *VAR_16;
    ngx_http_ss_ctx_t *VAR_17;
    ngx_http_ss_loc_conf_t *VAR_18;

    if (VAR_12->headers_out.status >= VAR_3) {
        return FUNC_5(VAR_12);
    }

    VAR_18 = FUNC_1(VAR_12,
               VAR_11);

    VAR_17 = FUNC_0(VAR_12, VAR_11);
    if (VAR_17 == ((void*)0) || VAR_17->sscf == ((void*)0) || VAR_17->sscf->flag == 0) {
        return FUNC_5(VAR_12);
    }

    if ((VAR_18->uscf == VAR_1)
         && ((VAR_17->sscf->flag & VAR_6)
            || (VAR_17->sscf->flag & VAR_4)))
    {
        return FUNC_5(VAR_12);
    }

    if (VAR_17->sscf->flag
        & (VAR_6 | VAR_7))
    {
        VAR_15 = &VAR_12->headers_out.headers.part;
        while (VAR_15) {
            VAR_16 = (ngx_table_elt_t *) VAR_15->elts;
            for (VAR_14 = 0; VAR_14 < VAR_15->nelts; VAR_14++) {
                if (VAR_16[VAR_14].key.len == (sizeof("set-cookie") - 1)
                    && FUNC_9(VAR_16[VAR_14].key.data,
                                       (u_char *) "set-cookie",
                                       VAR_16[VAR_14].key.len) == 0)
                {
                    if (VAR_17->sscf->flag & VAR_7) {

                        VAR_13 = FUNC_4(VAR_12, &VAR_16[VAR_14]);
                        if (VAR_13 == VAR_0) {
                            continue;

                        } else if (VAR_13 == VAR_2) {
                            FUNC_8(VAR_9, VAR_12->connection->log, 0,
                                          "session_sticky [rewrite]"
                                          "set-cookie failed");
                        }

                        FUNC_7(VAR_8, VAR_12->connection->log,
                                       0,
                                       "session_sticky [rewrite] set-cookie:%V",
                                       &VAR_16[VAR_14].value);

                        return FUNC_5(VAR_12);
                    }

                    VAR_13 = FUNC_3(VAR_12, &VAR_16[VAR_14]);
                    if (VAR_13 == VAR_0) {
                        continue;

                    } else if (VAR_13 == VAR_2) {
                        FUNC_8(VAR_9, VAR_12->connection->log, 0,
                                      "session_sticky [prefix]"
                                      "set-cookie failed");
                    }

                    FUNC_7(VAR_8, VAR_12->connection->log,
                                   0, "session_sticky [prefix]"
                                   "set-cookie: %V",
                                   &VAR_16[VAR_14].value);

                    return FUNC_5(VAR_12);
                }
            }

            VAR_15 = VAR_15->next;
        }

    } else if (VAR_17->sscf->flag & VAR_5) {
        FUNC_6(VAR_8, VAR_12->connection->log, 0,
                       "session_sticky [insert]");

        VAR_13 = FUNC_2(VAR_12);
        if (VAR_13 != VAR_10) {
            FUNC_8(VAR_9, VAR_12->connection->log, 0,
                          "session_sticky [insert] failed");
        }
    }

    return FUNC_5(VAR_12);
}
