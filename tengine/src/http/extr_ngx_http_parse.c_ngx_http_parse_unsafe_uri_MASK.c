
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_10__ {size_t len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (int ,size_t) ;
 int FUNC_4 (char**,char**,size_t,int ) ;
 unsigned int* VAR_5 ;

ngx_int_t
FUNC_5(ngx_http_request_t *VAR_6, ngx_str_t *VAR_7,
    ngx_str_t *VAR_8, ngx_uint_t *VAR_9)
{
    u_char VAR_10, *VAR_11, *VAR_12, *VAR_13;
    size_t VAR_14;
    ngx_uint_t VAR_15;

    VAR_14 = VAR_7->len;
    VAR_11 = VAR_7->data;
    VAR_15 = 0;

    if (VAR_14 == 0 || VAR_11[0] == '?') {
        goto unsafe;
    }

    if (VAR_11[0] == '.' && VAR_14 > 1 && VAR_11[1] == '.'
        && (VAR_14 == 2 || FUNC_2(VAR_11[2])))
    {
        goto unsafe;
    }

    for ( ; VAR_14; VAR_14--) {

        VAR_10 = *VAR_11++;

        if (VAR_10 == '%') {
            VAR_15 = 1;
            continue;
        }

        if (VAR_5[VAR_10 >> 5] & (1U << (VAR_10 & 0x1f))) {
            continue;
        }

        if (VAR_10 == '?') {
            VAR_8->len = VAR_14 - 1;
            VAR_8->data = VAR_11;
            VAR_7->len -= VAR_14;

            break;
        }

        if (VAR_10 == '\0') {
            goto unsafe;
        }

        if (FUNC_2(VAR_10) && VAR_14 > 2) {



            if (VAR_11[0] == '.' && VAR_11[1] == '.'
                && (VAR_14 == 3 || FUNC_2(VAR_11[2])))
            {
                goto unsafe;
            }
        }
    }

    if (VAR_15) {
        FUNC_0(VAR_2, VAR_6->connection->log, 0,
                       "escaped URI: \"%V\"", VAR_7);

        VAR_12 = VAR_7->data;

        VAR_13 = FUNC_3(VAR_6->pool, VAR_7->len);
        if (VAR_13 == ((void*)0)) {
            return VAR_0;
        }

        VAR_7->data = VAR_13;

        FUNC_4(&VAR_13, &VAR_12, VAR_7->len, 0);

        VAR_7->len = VAR_13 - VAR_7->data;

        FUNC_0(VAR_2, VAR_6->connection->log, 0,
                       "unescaped URI: \"%V\"", VAR_7);

        VAR_14 = VAR_7->len;
        VAR_11 = VAR_7->data;

        if (VAR_11[0] == '.' && VAR_14 > 1 && VAR_11[1] == '.'
            && (VAR_14 == 2 || FUNC_2(VAR_11[2])))
        {
            goto unsafe;
        }

        for ( ; VAR_14; VAR_14--) {

            VAR_10 = *VAR_11++;

            if (VAR_10 == '\0') {
                goto unsafe;
            }

            if (FUNC_2(VAR_10) && VAR_14 > 2) {



                if (VAR_11[0] == '.' && VAR_11[1] == '.'
                    && (VAR_14 == 3 || FUNC_2(VAR_11[2])))
                {
                    goto unsafe;
                }
            }
        }
    }

    return VAR_4;

unsafe:

    if (*VAR_9 & VAR_1) {
        FUNC_1(VAR_3, VAR_6->connection->log, 0,
                      "unsafe URI \"%V\" was detected", VAR_7);
    }

    return VAR_0;
}
