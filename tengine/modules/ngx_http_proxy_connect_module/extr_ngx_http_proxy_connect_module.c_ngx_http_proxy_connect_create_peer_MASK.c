
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_in6 {void* sin6_port; } ;
struct TYPE_9__ {int socklen; int sockaddr; } ;
struct TYPE_8__ {TYPE_2__ s_addr; } ;
struct sockaddr_in {void* sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef size_t ngx_int_t ;
struct TYPE_10__ {size_t len; int * data; } ;
struct TYPE_11__ {size_t naddrs; int socklen; TYPE_3__ host; struct sockaddr* sockaddr; int port; TYPE_2__* addrs; } ;
typedef TYPE_4__ ngx_http_upstream_resolved_t ;
struct TYPE_12__ {int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;


 int VAR_0 ;

 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct sockaddr*,int,int *,int ,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr*,int ,int) ;
 struct sockaddr* FUNC_3 (int ,int) ;
 struct sockaddr* FUNC_4 (int ,int) ;
 int * FUNC_5 (int ,int ) ;
 size_t FUNC_6 () ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_4,
    ngx_http_upstream_resolved_t *VAR_5)
{
    u_char *VAR_6;
    ngx_int_t VAR_7, VAR_8;
    socklen_t VAR_9;
    struct sockaddr *VAR_10;

    VAR_7 = FUNC_6() % VAR_5->naddrs;
    VAR_9 = sizeof(struct sockaddr_in);

    VAR_10 = FUNC_4(VAR_4->pool, VAR_9);
    if (VAR_10 == ((void*)0)) {
        return VAR_1;
    }

    ((struct sockaddr_in *) VAR_10)->sin_family = VAR_0;
    ((struct sockaddr_in *) VAR_10)->sin_addr.s_addr = VAR_5->addrs[VAR_7];
    ((struct sockaddr_in *) VAR_10)->sin_port = FUNC_1(VAR_5->port);



    VAR_6 = FUNC_5(VAR_4->pool, VAR_3);
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }

    VAR_8 = FUNC_0(VAR_10, VAR_9, VAR_6, VAR_3, 1);

    VAR_5->sockaddr = VAR_10;
    VAR_5->socklen = VAR_9;

    VAR_5->host.data = VAR_6;
    VAR_5->host.len = VAR_8;
    VAR_5->naddrs = 1;

    return VAR_2;
}
