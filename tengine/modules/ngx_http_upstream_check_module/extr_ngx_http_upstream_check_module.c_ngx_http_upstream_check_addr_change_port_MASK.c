
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
typedef int ngx_uint_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {size_t len; int * data; } ;
struct TYPE_10__ {TYPE_1__ name; int socklen; TYPE_3__* sockaddr; } ;
typedef TYPE_2__ ngx_addr_t ;
struct TYPE_11__ {int sa_family; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (TYPE_3__*,int ,int *,size_t,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_pool_t *VAR_4, ngx_addr_t *VAR_5,
    ngx_addr_t *VAR_6, ngx_uint_t VAR_7)
{
    size_t VAR_8;
    u_char *VAR_9;
    struct sockaddr_in *VAR_10;




    VAR_5->socklen = VAR_6->socklen;
    VAR_5->sockaddr = FUNC_2(VAR_4, VAR_5->socklen);
    if (VAR_5->sockaddr == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(VAR_5->sockaddr, VAR_6->sockaddr, VAR_5->socklen);

    switch (VAR_5->sockaddr->sa_family) {

    case 129:

        VAR_8 = VAR_2 + sizeof(":65535") - 1;
        VAR_10 = (struct sockaddr_in *) VAR_5->sockaddr;
        VAR_10->sin_port = FUNC_0(VAR_7);

        break;
    default:
        return VAR_0;
    }

    VAR_9 = FUNC_3(VAR_4, VAR_8);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8 = FUNC_4(VAR_5->sockaddr, VAR_5->socklen, VAR_9, VAR_8, 1);

    VAR_5->name.len = VAR_8;
    VAR_5->name.data = VAR_9;

    return VAR_3;
}
