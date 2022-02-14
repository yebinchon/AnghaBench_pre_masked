
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr_storage {int member_0; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; scalar_t__ sin6_family; } ;
struct sockaddr_in {int sin_port; int sin_addr; scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sock_t ;
struct TYPE_9__ {int in6_addr; } ;
struct TYPE_8__ {int in_addr; } ;
struct TYPE_10__ {scalar_t__ family; TYPE_2__ ip6; TYPE_1__ ip4; } ;
struct TYPE_12__ {int port; TYPE_3__ ip; } ;
struct TYPE_11__ {scalar_t__ proxy_type; TYPE_5__ ip_port; } ;
typedef TYPE_4__ TCP_Proxy_Info ;
typedef TYPE_5__ IP_Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct sockaddr*,size_t) ;

__attribute__((used)) static int FUNC_1(sock_t VAR_3, IP_Port VAR_4, TCP_Proxy_Info *VAR_5)
{
    if (VAR_5->proxy_type != VAR_2) {
        VAR_4 = VAR_5->ip_port;
    }

    struct sockaddr_storage VAR_6 = {0};

    size_t VAR_7;

    if (VAR_4.ip.family == VAR_0) {
        struct sockaddr_in *VAR_8 = (struct sockaddr_in *)&VAR_6;

        VAR_7 = sizeof(struct sockaddr_in);
        VAR_8->sin_family = VAR_0;
        VAR_8->sin_addr = VAR_4.ip.ip4.in_addr;
        VAR_8->sin_port = VAR_4.port;
    } else if (VAR_4.ip.family == VAR_1) {
        struct sockaddr_in6 *VAR_9 = (struct sockaddr_in6 *)&VAR_6;

        VAR_7 = sizeof(struct sockaddr_in6);
        VAR_9->sin6_family = VAR_1;
        VAR_9->sin6_addr = VAR_4.ip.ip6.in6_addr;
        VAR_9->sin6_port = VAR_4.port;
    } else {
        return 0;
    }


    FUNC_0(VAR_3, (struct sockaddr *)&VAR_6, VAR_7);
    return 1;
}
