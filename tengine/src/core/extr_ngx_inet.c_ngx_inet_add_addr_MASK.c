
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
struct TYPE_7__ {int last_port; int port; int naddrs; TYPE_3__* addrs; } ;
typedef TYPE_2__ ngx_url_t ;
typedef int ngx_uint_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {size_t len; int * data; } ;
struct TYPE_8__ {TYPE_1__ name; int socklen; struct sockaddr* sockaddr; } ;
typedef TYPE_3__ ngx_addr_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,int ) ;
 TYPE_3__* FUNC_2 (int *,int) ;
 struct sockaddr* FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (struct sockaddr*,int ,int *,size_t,int) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_pool_t *VAR_4, ngx_url_t *VAR_5, struct sockaddr *VAR_6,
    socklen_t VAR_7, ngx_uint_t VAR_8)
{
    u_char *VAR_9;
    size_t VAR_10;
    ngx_uint_t VAR_11, VAR_12;
    ngx_addr_t *VAR_13;
    struct sockaddr *VAR_14;

    VAR_12 = VAR_5->last_port ? VAR_5->last_port - VAR_5->port + 1 : 1;

    if (VAR_5->addrs == ((void*)0)) {
        VAR_5->addrs = FUNC_2(VAR_4, VAR_8 * VAR_12 * sizeof(ngx_addr_t));
        if (VAR_5->addrs == ((void*)0)) {
            return VAR_0;
        }
    }

    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
        VAR_14 = FUNC_3(VAR_4, VAR_7);
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        FUNC_1(VAR_14, VAR_6, VAR_7);

        FUNC_0(VAR_14, VAR_5->port + VAR_11);

        switch (VAR_14->sa_family) {







        default:
            VAR_10 = VAR_2 + sizeof(":65535") - 1;
        }

        VAR_9 = FUNC_4(VAR_4, VAR_10);
        if (VAR_9 == ((void*)0)) {
            return VAR_0;
        }

        VAR_10 = FUNC_5(VAR_14, VAR_7, VAR_9, VAR_10, 1);

        VAR_13 = &VAR_5->addrs[VAR_5->naddrs++];

        VAR_13->sockaddr = VAR_14;
        VAR_13->socklen = VAR_7;

        VAR_13->name.len = VAR_10;
        VAR_13->name.data = VAR_9;
    }

    return VAR_3;
}
