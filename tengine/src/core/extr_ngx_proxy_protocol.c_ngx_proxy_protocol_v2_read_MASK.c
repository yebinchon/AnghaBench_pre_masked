
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
typedef int socklen_t ;
typedef int ngx_uint_t ;
struct TYPE_11__ {int sin6_addr; int sin6_port; int sin6_family; } ;
struct TYPE_10__ {int sin_addr; int sin_port; int sin_family; } ;
struct TYPE_12__ {int sockaddr; TYPE_2__ sockaddr_in6; TYPE_1__ sockaddr_in; } ;
typedef TYPE_3__ ngx_sockaddr_t ;
struct TYPE_13__ {int src_port; int src_addr; } ;
typedef TYPE_4__ ngx_proxy_protocol_inet_addrs_t ;
struct TYPE_14__ {int src_port; int src_addr; } ;
typedef TYPE_5__ ngx_proxy_protocol_inet6_addrs_t ;
struct TYPE_15__ {int version_command; int family_transport; int len; } ;
typedef TYPE_6__ ngx_proxy_protocol_header_t ;
struct TYPE_17__ {int * data; int len; } ;
struct TYPE_16__ {int log; void* proxy_protocol_port; TYPE_9__ proxy_protocol_addr; int pool; } ;
typedef TYPE_7__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_9__*,void*) ;
 int FUNC_3 (int ,int ,int ,char*,...) ;
 int * FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int *,int ,int ) ;

__attribute__((used)) static u_char *
FUNC_7(ngx_connection_t *VAR_5, u_char *VAR_6, u_char *VAR_7)
{
    u_char *VAR_8;
    size_t VAR_9;
    socklen_t VAR_10;
    ngx_uint_t VAR_11, VAR_12, VAR_13, VAR_14;
    ngx_sockaddr_t VAR_15;
    ngx_proxy_protocol_header_t *VAR_16;
    ngx_proxy_protocol_inet_addrs_t *VAR_17;




    VAR_16 = (ngx_proxy_protocol_header_t *) VAR_6;

    VAR_6 += sizeof(ngx_proxy_protocol_header_t);

    VAR_11 = VAR_16->version_command >> 4;

    if (VAR_11 != 2) {
        FUNC_3(VAR_3, VAR_5->log, 0,
                      "unknown PROXY protocol version: %ui", VAR_11);
        return ((void*)0);
    }

    VAR_9 = FUNC_5(VAR_16->len);

    if ((size_t) (VAR_7 - VAR_6) < VAR_9) {
        FUNC_3(VAR_3, VAR_5->log, 0, "header is too large");
        return ((void*)0);
    }

    VAR_8 = VAR_6 + VAR_9;

    VAR_12 = VAR_16->version_command & 0x0f;


    if (VAR_12 != 1) {
        FUNC_1(VAR_2, VAR_5->log, 0,
                       "PROXY protocol v2 unsupported command %ui", VAR_12);
        return VAR_8;
    }

    VAR_14 = VAR_16->family_transport & 0x0f;


    if (VAR_14 != 1) {
        FUNC_1(VAR_2, VAR_5->log, 0,
                       "PROXY protocol v2 unsupported transport %ui",
                       VAR_14);
        return VAR_8;
    }

    VAR_13 = VAR_16->family_transport >> 4;

    switch (VAR_13) {

    case 129:

        if ((size_t) (VAR_8 - VAR_6) < sizeof(ngx_proxy_protocol_inet_addrs_t)) {
            return ((void*)0);
        }

        VAR_17 = (ngx_proxy_protocol_inet_addrs_t *) VAR_6;

        VAR_15.sockaddr_in.sin_family = VAR_0;
        VAR_15.sockaddr_in.sin_port = 0;
        FUNC_0(&VAR_15.sockaddr_in.sin_addr, VAR_17->src_addr, 4);

        VAR_5->proxy_protocol_port = FUNC_5(VAR_17->src_port);

        VAR_10 = sizeof(struct sockaddr_in);

        VAR_6 += sizeof(ngx_proxy_protocol_inet_addrs_t);

        break;
    default:
        FUNC_1(VAR_2, VAR_5->log, 0,
                       "PROXY protocol v2 unsupported address family %ui",
                       VAR_13);
        return VAR_8;
    }

    VAR_5->proxy_protocol_addr.data = FUNC_4(VAR_5->pool, VAR_4);
    if (VAR_5->proxy_protocol_addr.data == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5->proxy_protocol_addr.len = FUNC_6(&VAR_15.sockaddr, VAR_10,
                                               VAR_5->proxy_protocol_addr.data,
                                               VAR_4, 0);

    FUNC_2(VAR_2, VAR_5->log, 0,
                   "PROXY protocol v2 address: %V %d", &VAR_5->proxy_protocol_addr,
                   VAR_5->proxy_protocol_port);

    if (VAR_6 < VAR_8) {
        FUNC_1(VAR_2, VAR_5->log, 0,
                       "PROXY protocol v2 %z bytes of tlv ignored", VAR_8 - VAR_6);
    }

    return VAR_8;
}
