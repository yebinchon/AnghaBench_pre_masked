
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__* s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct TYPE_14__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
typedef int socklen_t ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_15__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_16__ {int sockaddr; } ;
typedef TYPE_4__ ngx_sockaddr_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {int local_socklen; TYPE_6__* local_sockaddr; int pool; int fd; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_18__ {int sa_family; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int*) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*,int) ;
 TYPE_6__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_6__*,int,int ,int ,scalar_t__) ;
 int VAR_2 ;

ngx_int_t
FUNC_5(ngx_connection_t *VAR_3, ngx_str_t *VAR_4,
    ngx_uint_t VAR_5)
{
    socklen_t VAR_6;
    ngx_uint_t VAR_7;
    ngx_sockaddr_t VAR_8;
    struct sockaddr_in *VAR_9;





    VAR_7 = 0;

    if (VAR_3->local_socklen) {
        switch (VAR_3->local_sockaddr->sa_family) {
        default:
            VAR_9 = (struct sockaddr_in *) VAR_3->local_sockaddr;
            VAR_7 = VAR_9->sin_addr.s_addr;
            break;
        }
    }

    if (VAR_7 == 0) {

        VAR_6 = sizeof(ngx_sockaddr_t);

        if (FUNC_0(VAR_3->fd, &VAR_8.sockaddr, &VAR_6) == -1) {
            FUNC_1(VAR_3, VAR_2, "getsockname() failed");
            return VAR_0;
        }

        VAR_3->local_sockaddr = FUNC_3(VAR_3->pool, VAR_6);
        if (VAR_3->local_sockaddr == ((void*)0)) {
            return VAR_0;
        }

        FUNC_2(VAR_3->local_sockaddr, &VAR_8, VAR_6);

        VAR_3->local_socklen = VAR_6;
    }

    if (VAR_4 == ((void*)0)) {
        return VAR_1;
    }

    VAR_4->len = FUNC_4(VAR_3->local_sockaddr, VAR_3->local_socklen,
                           VAR_4->data, VAR_4->len, VAR_5);

    return VAR_1;
}
