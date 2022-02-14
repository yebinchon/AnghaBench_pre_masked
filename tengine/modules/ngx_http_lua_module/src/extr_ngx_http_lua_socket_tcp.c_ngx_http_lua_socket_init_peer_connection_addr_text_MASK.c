
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int socklen; TYPE_4__* sockaddr; int log; TYPE_3__* connection; } ;
typedef TYPE_2__ ngx_peer_connection_t ;
struct TYPE_6__ {int * data; int len; } ;
struct TYPE_8__ {TYPE_1__ addr_text; int pool; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_9__ {int sa_family; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int * FUNC_1 (int ,size_t) ;
 int FUNC_2 (TYPE_4__*,int ,int *,size_t,int ) ;

__attribute__((used)) static void
FUNC_3(ngx_peer_connection_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    size_t VAR_7;

    VAR_6 = VAR_5->connection;

    switch (VAR_5->sockaddr->sa_family) {
    case 130:
        VAR_7 = VAR_1;
        break;

    default:
        VAR_7 = VAR_3;
        break;
    }

    VAR_6->addr_text.data = FUNC_1(VAR_6->pool, VAR_7);
    if (VAR_6->addr_text.data == ((void*)0)) {
        FUNC_0(VAR_2, VAR_5->log, 0,
                      "init peer connection addr_text failed: no memory");
        return;
    }

    VAR_6->addr_text.len = FUNC_2(VAR_5->sockaddr, VAR_5->socklen,
                                     VAR_6->addr_text.data,
                                     VAR_7, 0);
}
