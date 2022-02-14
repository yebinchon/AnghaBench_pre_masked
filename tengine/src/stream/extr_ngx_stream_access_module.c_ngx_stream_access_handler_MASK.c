
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int u_char ;
struct TYPE_16__ {int* s6_addr; } ;
struct sockaddr_in6 {TYPE_15__ sin6_addr; } ;
struct TYPE_17__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct TYPE_20__ {TYPE_3__* connection; } ;
typedef TYPE_4__ ngx_stream_session_t ;
struct TYPE_21__ {int rules_un; int rules6; int rules; } ;
typedef TYPE_5__ ngx_stream_access_srv_conf_t ;
typedef int ngx_int_t ;
typedef int in_addr_t ;
struct TYPE_19__ {TYPE_2__* sockaddr; } ;
struct TYPE_18__ {int sa_family; } ;





 int FUNC_0 (TYPE_15__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*,int*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*) ;
 TYPE_5__* FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_stream_session_t *VAR_2)
{
    struct sockaddr_in *VAR_3;
    ngx_stream_access_srv_conf_t *VAR_4;






    VAR_4 = FUNC_5(VAR_2, VAR_1);

    switch (VAR_2->connection->sockaddr->sa_family) {

    case 130:
        if (VAR_4->rules) {
            VAR_3 = (struct sockaddr_in *) VAR_2->connection->sockaddr;
            return FUNC_2(VAR_2, VAR_4, VAR_3->sin_addr.s_addr);
        }
        break;
    }

    return VAR_0;
}
