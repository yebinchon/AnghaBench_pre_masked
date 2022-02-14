
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char u_char ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;
typedef int ngx_array_t ;
struct TYPE_7__ {int sockaddr; } ;
typedef TYPE_2__ ngx_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,char*,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3, ngx_addr_t *VAR_4,
    u_char *VAR_5, size_t VAR_6, ngx_array_t *VAR_7, int VAR_8)
{
    u_char *VAR_9;
    ngx_int_t VAR_10;
    ngx_addr_t VAR_11;

    if (FUNC_0(VAR_4->sockaddr, VAR_7) != VAR_2) {
        return VAR_0;
    }

    for (VAR_9 = VAR_5 + VAR_6 - 1; VAR_9 > VAR_5; VAR_9--, VAR_6--) {
        if (*VAR_9 != ' ' && *VAR_9 != ',') {
            break;
        }
    }

    for ( ; VAR_9 > VAR_5; VAR_9--) {
        if (*VAR_9 == ' ' || *VAR_9 == ',') {
            VAR_9++;
            break;
        }
    }

    if (FUNC_1(VAR_3->pool, &VAR_11, VAR_9, VAR_6 - (VAR_9 - VAR_5)) != VAR_2) {
        return VAR_0;
    }

    *VAR_4 = VAR_11;

    if (VAR_8 && VAR_9 > VAR_5) {
        VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_9 - 1 - VAR_5,
                                                  VAR_7, 1);

        if (VAR_10 == VAR_0) {
            return VAR_1;
        }


        return VAR_10;
    }

    return VAR_2;
}
