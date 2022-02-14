
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


struct sockaddr {scalar_t__ sa_family; } ;
typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_21__ {struct sockaddr* sockaddr; } ;
typedef TYPE_2__ ngx_http_listen_opt_t ;
typedef int ngx_http_core_srv_conf_t ;
struct TYPE_22__ {TYPE_17__* ports; } ;
typedef TYPE_3__ ngx_http_core_main_conf_t ;
struct TYPE_20__ {int * elts; } ;
struct TYPE_23__ {scalar_t__ family; TYPE_1__ addrs; int port; } ;
typedef TYPE_4__ ngx_http_conf_port_t ;
struct TYPE_24__ {int temp_pool; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int in_port_t ;
struct TYPE_19__ {size_t nelts; TYPE_4__* elts; } ;


 int VAR_0 ;
 TYPE_17__* FUNC_0 (int ,int,int) ;
 TYPE_4__* FUNC_1 (TYPE_17__*) ;
 int FUNC_2 (TYPE_5__*,int *,TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_5__*,int *,TYPE_4__*,TYPE_2__*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct sockaddr*) ;

ngx_int_t
FUNC_6(ngx_conf_t *VAR_2, ngx_http_core_srv_conf_t *VAR_3,
    ngx_http_listen_opt_t *VAR_4)
{
    in_port_t VAR_5;
    ngx_uint_t VAR_6;
    struct sockaddr *VAR_7;
    ngx_http_conf_port_t *VAR_8;
    ngx_http_core_main_conf_t *VAR_9;

    VAR_9 = FUNC_4(VAR_2, VAR_1);

    if (VAR_9->ports == ((void*)0)) {
        VAR_9->ports = FUNC_0(VAR_2->temp_pool, 2,
                                       sizeof(ngx_http_conf_port_t));
        if (VAR_9->ports == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_7 = VAR_4->sockaddr;
    VAR_5 = FUNC_5(VAR_7);

    VAR_8 = VAR_9->ports->elts;
    for (VAR_6 = 0; VAR_6 < VAR_9->ports->nelts; VAR_6++) {

        if (VAR_5 != VAR_8[VAR_6].port || VAR_7->sa_family != VAR_8[VAR_6].family) {
            continue;
        }



        return FUNC_3(VAR_2, VAR_3, &VAR_8[VAR_6], VAR_4);
    }



    VAR_8 = FUNC_1(VAR_9->ports);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->family = VAR_7->sa_family;
    VAR_8->port = VAR_5;
    VAR_8->addrs.elts = ((void*)0);

    return FUNC_2(VAR_2, VAR_3, VAR_8, VAR_4);
}
