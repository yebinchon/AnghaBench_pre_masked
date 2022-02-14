
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef char u_char ;
typedef void* time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_22__ {char* data; int len; } ;
struct TYPE_21__ {scalar_t__ hash; TYPE_6__ value; } ;
typedef TYPE_5__ ngx_table_elt_t ;
typedef TYPE_6__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_20__ {int len; scalar_t__ data; } ;
struct TYPE_23__ {int flag; scalar_t__ maxidle; int maxlife; TYPE_4__ cookie; } ;
typedef TYPE_7__ ngx_http_upstream_ss_srv_conf_t ;
struct TYPE_16__ {char* data; int len; } ;
struct TYPE_24__ {int tries; int frist; void* firstseen; void* lastseen; TYPE_6__ sid; TYPE_12__ s_lastseen; TYPE_7__* sscf; TYPE_12__ s_firstseen; } ;
typedef TYPE_8__ ngx_http_ss_ctx_t ;
struct TYPE_17__ {size_t nelts; scalar_t__ elts; } ;
struct TYPE_18__ {TYPE_1__ cookies; } ;
struct TYPE_25__ {TYPE_3__* connection; int pool; TYPE_2__ headers_in; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_19__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char) ;
 void* FUNC_1 (char*,int) ;
 TYPE_8__* FUNC_2 (TYPE_9__*,int ) ;
 int FUNC_3 (TYPE_9__*,TYPE_12__*,void*) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_6__*) ;
 int FUNC_6 (char*,char*,int) ;
 void* FUNC_7 (int ,int) ;
 char* FUNC_8 (char*,char*,int) ;
 void* FUNC_9 () ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_9)
{
    time_t VAR_10;
    u_char *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
    ngx_int_t VAR_17, VAR_18, VAR_19;
    ngx_str_t *VAR_20;
    ngx_uint_t VAR_21;
    ngx_table_elt_t **VAR_22;
    ngx_http_ss_ctx_t *VAR_23;
    ngx_http_upstream_ss_srv_conf_t *VAR_24;
    enum {
        pre_key = 0,
        key,
        pre_equal,
        pre_value,
        value
    } VAR_25;

    VAR_19 = 1;
    VAR_23 = FUNC_2(VAR_9, VAR_8);
    VAR_24 = VAR_23->sscf;
    VAR_23->tries = 1;

    VAR_11 = ((void*)0);
    VAR_20 = ((void*)0);
    VAR_10 = FUNC_9();
    VAR_22 = (ngx_table_elt_t **) VAR_9->headers_in.cookies.elts;
    for (VAR_21 = 0; VAR_21 < VAR_9->headers_in.cookies.nelts; VAR_21++) {
        VAR_20 = &VAR_22[VAR_21]->value;
        VAR_11 = FUNC_8(VAR_20->data, (char *) VAR_24->cookie.data, VAR_20->len);
        if (VAR_11 == ((void*)0)) {
            continue;
        }

        if (*(VAR_11 + VAR_24->cookie.len) == ' ' || *(VAR_11 + VAR_24->cookie.len) == '=') {
            break;
        }
    }

    if (VAR_21 >= VAR_9->headers_in.cookies.nelts) {
        goto not_found;
    }

    FUNC_5(VAR_6, VAR_9->connection->log, 0,
                   "session sticky cookie: \"%V\"", &VAR_22[VAR_21]->value);
    VAR_14 = VAR_11;
    VAR_12 = VAR_11 + VAR_24->cookie.len + 1;
    VAR_15 = VAR_20->data + VAR_20->len;

    VAR_25 = 0;
    while (VAR_11 < VAR_15) {
        switch (VAR_25) {
        case pre_key:
            if (*VAR_11 == ';') {
                goto not_found;

            } else if (!FUNC_0(*VAR_11)) {
                VAR_25 = key;
            }

            break;

        case key:
            if (FUNC_0(*VAR_11)) {
                VAR_25 = pre_equal;

            } else if (*VAR_11 == '=') {
                VAR_25 = pre_value;
            }

            break;

        case pre_equal:
            if (*VAR_11 == '=') {
                VAR_25 = pre_value;

            } else if (!FUNC_0(*VAR_11)) {
                goto not_found;
            }

            break;

        case pre_value:
            if (!FUNC_0(*VAR_11)) {
                VAR_25 = value;
                VAR_12 = VAR_11--;
            }

            break;

        case value:
            if (*VAR_11 == ';') {
                VAR_16 = VAR_11 + 1;
                goto success;
            }

            if (VAR_11 + 1 == VAR_15) {
                VAR_16 = VAR_15;
                VAR_11++;
                goto success;
            }

            break;

        default:
                break;
        }

        VAR_11++;
    }

not_found:

    FUNC_4(VAR_6, VAR_9->connection->log, 0,
                   "session sticky [firstseen]");
    VAR_23->frist = 1;
    VAR_23->sid.len = 0;
    VAR_23->sid.data = ((void*)0);
    VAR_23->firstseen = VAR_10;
    VAR_23->lastseen = VAR_10;

    FUNC_3(VAR_9, &VAR_23->s_lastseen, VAR_23->lastseen);
    FUNC_3(VAR_9, &VAR_23->s_firstseen, VAR_23->firstseen);

    if (VAR_23->s_lastseen.data == ((void*)0) || VAR_23->s_firstseen.data == ((void*)0)) {
        return VAR_1;
    }

    return VAR_7;

success:

    if (VAR_24->flag & VAR_5) {

        for (VAR_13 = VAR_12; VAR_13 < VAR_11; VAR_13++) {
            if (*VAR_13 == '~') {
                VAR_16 = VAR_13 + 1;
                break;
            }
        }
        if (VAR_13 >= VAR_11) {
            goto not_found;
        }
        VAR_14 = VAR_12;

    } else {
        VAR_13 = VAR_11;
    }

    if ((VAR_24->flag & VAR_4)
        && VAR_24->maxidle != VAR_0)
    {
        FUNC_4(VAR_6, VAR_9->connection->log, 0,
                       "session_sticky mode [insert]");

        VAR_18 = 0;
        for (VAR_11 = VAR_12; VAR_11 < VAR_13; VAR_11++) {
            if (*VAR_11 == VAR_2) {
                VAR_18++;
                if (VAR_18 == 1) {
                    VAR_23->sid.len = VAR_11 - VAR_12;
                    VAR_23->sid.data = FUNC_7(VAR_9->pool, VAR_23->sid.len);
                    if (VAR_23->sid.data == ((void*)0)) {
                        return VAR_1;
                    }
                    FUNC_6(VAR_23->sid.data, VAR_12, VAR_23->sid.len);
                    VAR_12 = VAR_11 + 1;

                } else if(VAR_18 == 2) {
                    VAR_23->s_lastseen.len = VAR_11 - VAR_12;
                    VAR_23->s_lastseen.data = FUNC_7(VAR_9->pool,
                                                       VAR_23->s_lastseen.len);
                    if (VAR_23->s_lastseen.data == ((void*)0)) {
                        return VAR_1;
                    }
                    FUNC_6(VAR_23->s_lastseen.data, VAR_12, VAR_23->s_lastseen.len);
                    VAR_12 = VAR_11 + 1;
                    break;

                } else {
                    VAR_19 = 0;
                    goto finish;
                }
            }
        }

        if (VAR_11 >= VAR_13 || VAR_12 >= VAR_13) {
            VAR_19 = 0;
            goto finish;

        }

        VAR_23->s_firstseen.len = VAR_13 - VAR_12;
        VAR_23->s_firstseen.data = FUNC_7(VAR_9->pool, VAR_23->s_firstseen.len);
        if (VAR_23->s_firstseen.data == ((void*)0)) {
            return VAR_1;
        }
        FUNC_6(VAR_23->s_firstseen.data, VAR_12, VAR_23->s_firstseen.len);

        VAR_23->firstseen = FUNC_1(VAR_23->s_firstseen.data, VAR_23->s_firstseen.len);
        VAR_23->lastseen = FUNC_1(VAR_23->s_lastseen.data, VAR_23->s_lastseen.len);

        if (VAR_23->firstseen == VAR_1 || VAR_23->lastseen == VAR_1) {
            VAR_19 = 0;
            goto finish;
        }

        if (VAR_23->sid.len != 0) {
            VAR_17 = (ngx_int_t) (VAR_10 - VAR_23->lastseen);
            if (VAR_17 > VAR_23->sscf->maxidle || VAR_17 < -86400) {
                VAR_19 = 0;
                goto finish;
            }

            VAR_17 = (ngx_int_t) (VAR_10 - VAR_23->firstseen);
            if (VAR_17 > VAR_23->sscf->maxlife || VAR_17 < -86400) {
                VAR_19 = 0;
                goto finish;
            }
        }

        FUNC_3(VAR_9, &VAR_23->s_lastseen, VAR_10);

    } else {
        VAR_23->sid.len = VAR_13 - VAR_12;
        VAR_23->sid.data = FUNC_7(VAR_9->pool, VAR_23->sid.len);
        if (VAR_23->sid.data == ((void*)0)) {
            return VAR_1;
        }
        FUNC_6(VAR_23->sid.data, VAR_12, VAR_23->sid.len);
    }

finish:

    if (VAR_24->flag
        & (VAR_5 | VAR_3))
    {
        VAR_20->len -= (VAR_16 - VAR_14);

        if (VAR_20->len == 0) {
            VAR_22[VAR_21]->hash = 0;
            return VAR_7;
        }

        while (VAR_16 < VAR_15) {
            *VAR_14++ = *VAR_16++;
        }
    }

    if (VAR_19 == 0) {
        goto not_found;
    }

    FUNC_5(VAR_6, VAR_9->connection->log, 0,
                   "session sticky sid [%V]", &VAR_23->sid);
    return VAR_7;
}
