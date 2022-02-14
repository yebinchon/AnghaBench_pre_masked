
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct in6_addr {int* s6_addr; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_stream_session_t ;
typedef int ngx_stream_geoip_conf_t ;
struct TYPE_11__ {TYPE_2__* sockaddr; int socklen; } ;
typedef TYPE_5__ ngx_addr_t ;
typedef int in_addr_t ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
struct TYPE_7__ {int socklen; TYPE_2__* sockaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u_long
FUNC_2(ngx_stream_session_t *VAR_3, ngx_stream_geoip_conf_t *VAR_4)
{
    ngx_addr_t VAR_5;
    struct sockaddr_in *VAR_6;

    VAR_5.sockaddr = VAR_3->connection->sockaddr;
    VAR_5.socklen = VAR_3->connection->socklen;
    if (VAR_5.sockaddr->sa_family != VAR_0) {
        return VAR_2;
    }

    VAR_6 = (struct sockaddr_in *) VAR_5.sockaddr;
    return FUNC_1(VAR_6->sin_addr.s_addr);
}
