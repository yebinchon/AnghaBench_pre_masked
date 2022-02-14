
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_6__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct TYPE_7__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct in6_addr {int s6_addr; } ;
typedef int ngx_uint_t ;
typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {size_t socklen; TYPE_4__* sockaddr; } ;
typedef TYPE_3__ ngx_addr_t ;
typedef scalar_t__ in_addr_t ;
struct TYPE_9__ {scalar_t__ sa_family; } ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,size_t,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,size_t) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct in6_addr*,int) ;
 TYPE_4__* FUNC_4 (int *,size_t) ;

ngx_int_t
FUNC_5(ngx_pool_t *VAR_5, ngx_addr_t *VAR_6, u_char *VAR_7, size_t VAR_8)
{
    in_addr_t VAR_9;
    ngx_uint_t VAR_10;
    struct sockaddr_in *VAR_11;
    VAR_9 = FUNC_1(VAR_7, VAR_8);

    if (VAR_9 != VAR_1) {
        VAR_10 = VAR_0;
        VAR_8 = sizeof(struct sockaddr_in);







    } else {
        return VAR_2;
    }

    VAR_6->sockaddr = FUNC_4(VAR_5, VAR_8);
    if (VAR_6->sockaddr == ((void*)0)) {
        return VAR_3;
    }

    VAR_6->sockaddr->sa_family = (u_char) VAR_10;
    VAR_6->socklen = VAR_8;

    switch (VAR_10) {
    default:
        VAR_11 = (struct sockaddr_in *) VAR_6->sockaddr;
        VAR_11->sin_addr.s_addr = VAR_9;
        break;
    }

    return VAR_4;
}
