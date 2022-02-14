
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {scalar_t__ connect_port_n; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {TYPE_1__* allow_ports; scalar_t__ allow_port_all; } ;
typedef TYPE_3__ ngx_http_proxy_connect_loc_conf_t ;
typedef scalar_t__ in_port_t ;
struct TYPE_6__ {scalar_t__** elts; size_t nelts; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_2,
    ngx_http_proxy_connect_loc_conf_t *VAR_3)
{
    ngx_uint_t VAR_4, VAR_5;
    in_port_t (*VAR_6)[2];

    VAR_5 = 0;

    if (VAR_3->allow_port_all) {
        VAR_5 = 1;

    } else if (VAR_3->allow_ports) {
        VAR_6 = VAR_3->allow_ports->elts;

        for (VAR_4 = 0; VAR_4 < VAR_3->allow_ports->nelts; VAR_4++) {





            if ((VAR_6[VAR_4][1] == 0 && VAR_2->connect_port_n == VAR_6[VAR_4][0])
                || (VAR_6[VAR_4][0] <= VAR_2->connect_port_n && VAR_2->connect_port_n <= VAR_6[VAR_4][1]))
            {
                VAR_5 = 1;
                break;
            }
        }

    } else {
        if (VAR_2->connect_port_n == 443 || VAR_2->connect_port_n == 563) {
            VAR_5 = 1;
        }
    }

    if (VAR_5 == 0) {
        return VAR_0;
    }

    return VAR_1;
}
