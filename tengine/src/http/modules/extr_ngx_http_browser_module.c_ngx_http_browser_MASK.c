
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_20__ {size_t len; int data; } ;
typedef TYPE_7__ ngx_str_t ;
struct TYPE_16__ {TYPE_2__* user_agent; } ;
struct TYPE_21__ {TYPE_5__* connection; TYPE_3__ headers_in; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_22__ {int skip; size_t version; int add; int name; } ;
typedef TYPE_9__ ngx_http_modern_browser_t ;
struct TYPE_13__ {scalar_t__ modern_unlisted_browsers; TYPE_6__* ancient_browsers; scalar_t__ netscape4; TYPE_4__* modern_browsers; } ;
typedef TYPE_10__ ngx_http_browser_conf_t ;
struct TYPE_19__ {size_t nelts; TYPE_7__* elts; } ;
struct TYPE_18__ {int log; } ;
struct TYPE_17__ {size_t nelts; TYPE_9__* elts; } ;
struct TYPE_14__ {char* data; size_t len; } ;
struct TYPE_15__ {TYPE_1__ value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,char*,size_t,...) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int * FUNC_3 (char*,int ) ;

__attribute__((used)) static ngx_uint_t
FUNC_4(ngx_http_request_t *VAR_3, ngx_http_browser_conf_t *VAR_4)
{
    size_t VAR_5;
    u_char *VAR_6, *VAR_7, *VAR_8, VAR_9;
    ngx_str_t *VAR_10;
    ngx_uint_t VAR_11, VAR_12, VAR_13, VAR_14;
    ngx_http_modern_browser_t *VAR_15;

    if (VAR_3->headers_in.user_agent == ((void*)0)) {
        if (VAR_4->modern_unlisted_browsers) {
            return VAR_1;
        }

        return VAR_0;
    }

    VAR_7 = VAR_3->headers_in.user_agent->value.data;
    VAR_5 = VAR_3->headers_in.user_agent->value.len;
    VAR_8 = VAR_7 + VAR_5;

    if (VAR_4->modern_browsers) {
        VAR_15 = VAR_4->modern_browsers->elts;

        for (VAR_11 = 0; VAR_11 < VAR_4->modern_browsers->nelts; VAR_11++) {
            VAR_6 = VAR_7 + VAR_15[VAR_11].skip;

            if (VAR_6 >= VAR_8) {
                continue;
            }

            VAR_6 = (u_char *) FUNC_3(VAR_6, VAR_15[VAR_11].name);

            if (VAR_6 == ((void*)0)) {
                continue;
            }

            FUNC_0(VAR_2, VAR_3->connection->log, 0,
                           "browser: \"%s\"", VAR_6);

            VAR_6 += VAR_15[VAR_11].add;

            if (VAR_6 >= VAR_8) {
                continue;
            }

            FUNC_1(VAR_2, VAR_3->connection->log, 0,
                           "version: \"%ui\" \"%s\"", VAR_15[VAR_11].version, VAR_6);

            VAR_12 = 0;
            VAR_13 = 0;
            VAR_14 = 1000000;

            while (VAR_6 < VAR_8) {

                VAR_9 = *VAR_6++;

                if (VAR_9 >= '0' && VAR_9 <= '9') {
                    VAR_13 = VAR_13 * 10 + (VAR_9 - '0');
                    continue;
                }

                if (VAR_9 == '.') {
                    VAR_12 += VAR_13 * VAR_14;

                    FUNC_1(VAR_2, VAR_3->connection->log, 0,
                                   "version: \"%ui\" \"%ui\"",
                                   VAR_15[VAR_11].version, VAR_12);

                    if (VAR_12 > VAR_15[VAR_11].version) {
                        return VAR_1;
                    }

                    VAR_13 = 0;
                    VAR_14 /= 100;
                    continue;
                }

                break;
            }

            VAR_12 += VAR_13 * VAR_14;

            FUNC_1(VAR_2, VAR_3->connection->log, 0,
                           "version: \"%ui\" \"%ui\"",
                           VAR_15[VAR_11].version, VAR_12);

            if (VAR_12 >= VAR_15[VAR_11].version) {
                return VAR_1;
            }

            return VAR_0;
        }

        if (!VAR_4->modern_unlisted_browsers) {
            return VAR_0;
        }
    }

    if (VAR_4->netscape4) {
        if (VAR_5 > sizeof("Mozilla/4.72 ") - 1
            && FUNC_2(VAR_7, "Mozilla/", sizeof("Mozilla/") - 1) == 0
            && VAR_7[8] > '0' && VAR_7[8] < '5')
        {
            return VAR_0;
        }
    }

    if (VAR_4->ancient_browsers) {
        VAR_10 = VAR_4->ancient_browsers->elts;

        for (VAR_11 = 0; VAR_11 < VAR_4->ancient_browsers->nelts; VAR_11++) {
            if (VAR_5 >= VAR_10[VAR_11].len
                && FUNC_3(VAR_7, VAR_10[VAR_11].data) != ((void*)0))
            {
                return VAR_0;
            }
        }
    }

    if (VAR_4->modern_unlisted_browsers) {
        return VAR_1;
    }

    return VAR_0;
}
