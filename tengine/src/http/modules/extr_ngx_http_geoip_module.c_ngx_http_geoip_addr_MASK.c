
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct in6_addr {int* s6_addr; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_17__ {int s_addr; } ;
struct sockaddr_in {TYPE_4__ sin_addr; } ;
struct TYPE_20__ {scalar_t__ nelts; } ;
struct TYPE_15__ {TYPE_7__ x_forwarded_for; } ;
struct TYPE_18__ {TYPE_2__ headers_in; TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_19__ {int proxy_recursive; int * proxies; } ;
typedef TYPE_6__ ngx_http_geoip_conf_t ;
typedef TYPE_7__ ngx_array_t ;
struct TYPE_21__ {TYPE_3__* sockaddr; int socklen; } ;
typedef TYPE_8__ ngx_addr_t ;
typedef int in_addr_t ;
struct TYPE_16__ {scalar_t__ sa_family; } ;
struct TYPE_14__ {int socklen; TYPE_3__* sockaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,TYPE_8__*,TYPE_7__*,int *,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u_long
FUNC_3(ngx_http_request_t *VAR_3, ngx_http_geoip_conf_t *VAR_4)
{
    ngx_addr_t VAR_5;
    ngx_array_t *VAR_6;
    struct sockaddr_in *VAR_7;

    VAR_5.sockaddr = VAR_3->connection->sockaddr;
    VAR_5.socklen = VAR_3->connection->socklen;


    VAR_6 = &VAR_3->headers_in.x_forwarded_for;

    if (VAR_6->nelts > 0 && VAR_4->proxies != ((void*)0)) {
        (void) FUNC_1(VAR_3, &VAR_5, VAR_6, ((void*)0),
                                           VAR_4->proxies, VAR_4->proxy_recursive);
    }
    if (VAR_5.sockaddr->sa_family != VAR_0) {
        return VAR_2;
    }

    VAR_7 = (struct sockaddr_in *) VAR_5.sockaddr;
    return FUNC_2(VAR_7->sin_addr.s_addr);
}
