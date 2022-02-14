
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef char u_char ;
typedef char off_t ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_19__ {char content_length_n; } ;
struct TYPE_18__ {TYPE_2__* range; } ;
struct TYPE_20__ {TYPE_4__ headers_out; TYPE_3__ headers_in; int pool; struct TYPE_20__* main; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_21__ {char start; char end; } ;
typedef TYPE_6__ ngx_http_range_t ;
struct TYPE_15__ {scalar_t__ nelts; } ;
struct TYPE_22__ {TYPE_13__ ranges; } ;
typedef TYPE_7__ ngx_http_range_filter_ctx_t ;
struct TYPE_16__ {char* data; } ;
struct TYPE_17__ {TYPE_1__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_13__*,int ,int,int) ;
 TYPE_6__* FUNC_1 (TYPE_13__*) ;
 TYPE_7__* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_6, ngx_http_range_filter_ctx_t *VAR_7,
    ngx_uint_t VAR_8)
{
    u_char *VAR_9;
    off_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
                                  VAR_15;
    ngx_uint_t VAR_16;
    ngx_http_range_t *VAR_17;
    ngx_http_range_filter_ctx_t *VAR_18;

    if (VAR_6 != VAR_6->main) {
        VAR_18 = FUNC_2(VAR_6->main,
                                       VAR_5);
        if (VAR_18) {
            VAR_7->ranges = VAR_18->ranges;
            return VAR_4;
        }
    }

    if (FUNC_0(&VAR_7->ranges, VAR_6->pool, 1, sizeof(ngx_http_range_t))
        != VAR_4)
    {
        return VAR_1;
    }

    VAR_9 = VAR_6->headers_in.range->value.data + 6;
    VAR_12 = 0;
    VAR_13 = VAR_6->headers_out.content_length_n;

    VAR_14 = VAR_3 / 10;
    VAR_15 = VAR_3 % 10;

    for ( ;; ) {
        VAR_10 = 0;
        VAR_11 = 0;
        VAR_16 = 0;

        while (*VAR_9 == ' ') { VAR_9++; }

        if (*VAR_9 != '-') {
            if (*VAR_9 < '0' || *VAR_9 > '9') {
                return VAR_2;
            }

            while (*VAR_9 >= '0' && *VAR_9 <= '9') {
                if (VAR_10 >= VAR_14 && (VAR_10 > VAR_14 || *VAR_9 - '0' > VAR_15)) {
                    return VAR_2;
                }

                VAR_10 = VAR_10 * 10 + (*VAR_9++ - '0');
            }

            while (*VAR_9 == ' ') { VAR_9++; }

            if (*VAR_9++ != '-') {
                return VAR_2;
            }

            while (*VAR_9 == ' ') { VAR_9++; }

            if (*VAR_9 == ',' || *VAR_9 == '\0') {
                VAR_11 = VAR_13;
                goto found;
            }

        } else {
            VAR_16 = 1;
            VAR_9++;
        }

        if (*VAR_9 < '0' || *VAR_9 > '9') {
            return VAR_2;
        }

        while (*VAR_9 >= '0' && *VAR_9 <= '9') {
            if (VAR_11 >= VAR_14 && (VAR_11 > VAR_14 || *VAR_9 - '0' > VAR_15)) {
                return VAR_2;
            }

            VAR_11 = VAR_11 * 10 + (*VAR_9++ - '0');
        }

        while (*VAR_9 == ' ') { VAR_9++; }

        if (*VAR_9 != ',' && *VAR_9 != '\0') {
            return VAR_2;
        }

        if (VAR_16) {
            VAR_10 = (VAR_11 < VAR_13) ? VAR_13 - VAR_11 : 0;
            VAR_11 = VAR_13 - 1;
        }

        if (VAR_11 >= VAR_13) {
            VAR_11 = VAR_13;

        } else {
            VAR_11++;
        }

    found:

        if (VAR_10 < VAR_11) {
            VAR_17 = FUNC_1(&VAR_7->ranges);
            if (VAR_17 == ((void*)0)) {
                return VAR_1;
            }

            VAR_17->start = VAR_10;
            VAR_17->end = VAR_11;

            if (VAR_12 > VAR_3 - (VAR_11 - VAR_10)) {
                return VAR_2;
            }

            VAR_12 += VAR_11 - VAR_10;

            if (VAR_8-- == 0) {
                return VAR_0;
            }

        } else if (VAR_10 == 0) {
            return VAR_0;
        }

        if (*VAR_9++ != ',') {
            break;
        }
    }

    if (VAR_7->ranges.nelts == 0) {
        return VAR_2;
    }

    if (VAR_12 > VAR_13) {
        return VAR_0;
    }

    return VAR_4;
}
