
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int status; } ;
struct TYPE_19__ {int expect_trailers; TYPE_1__ headers_out; struct TYPE_19__* main; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_20__ {scalar_t__ expires; TYPE_3__* trailers; TYPE_2__* headers; } ;
typedef TYPE_5__ ngx_http_headers_conf_t ;
struct TYPE_21__ {scalar_t__ (* handler ) (TYPE_4__*,TYPE_6__*,int *) ;int always; int value; } ;
typedef TYPE_6__ ngx_http_header_val_t ;
struct TYPE_18__ {size_t nelts; TYPE_6__* elts; } ;
struct TYPE_17__ {size_t nelts; TYPE_6__* elts; } ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int *,int *) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_6__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_4)
{
    ngx_str_t VAR_5;
    ngx_uint_t VAR_6, VAR_7;
    ngx_http_header_val_t *VAR_8;
    ngx_http_headers_conf_t *VAR_9;

    if (VAR_4 != VAR_4->main) {
        return FUNC_2(VAR_4);
    }

    VAR_9 = FUNC_1(VAR_4, VAR_3);

    if (VAR_9->expires == VAR_1
        && VAR_9->headers == ((void*)0)
        && VAR_9->trailers == ((void*)0))
    {
        return FUNC_2(VAR_4);
    }

    switch (VAR_4->headers_out.status) {

    case 132:
    case 137:
    case 133:
    case 131:
    case 136:
    case 135:
    case 129:
    case 134:
    case 128:
    case 130:
        VAR_7 = 1;
        break;

    default:
        VAR_7 = 0;
        break;
    }

    if (VAR_9->expires != VAR_1 && VAR_7) {
        if (FUNC_3(VAR_4, VAR_9) != VAR_2) {
            return VAR_0;
        }
    }

    if (VAR_9->headers) {
        VAR_8 = VAR_9->headers->elts;
        for (VAR_6 = 0; VAR_6 < VAR_9->headers->nelts; VAR_6++) {

            if (!VAR_7 && !VAR_8[VAR_6].always) {
                continue;
            }

            if (FUNC_0(VAR_4, &VAR_8[VAR_6].value, &VAR_5) != VAR_2) {
                return VAR_0;
            }

            if (VAR_8[VAR_6].handler(VAR_4, &VAR_8[VAR_6], &VAR_5) != VAR_2) {
                return VAR_0;
            }
        }
    }

    if (VAR_9->trailers) {
        VAR_8 = VAR_9->trailers->elts;
        for (VAR_6 = 0; VAR_6 < VAR_9->trailers->nelts; VAR_6++) {

            if (!VAR_7 && !VAR_8[VAR_6].always) {
                continue;
            }

            VAR_4->expect_trailers = 1;
            break;
        }
    }

    return FUNC_2(VAR_4);
}
