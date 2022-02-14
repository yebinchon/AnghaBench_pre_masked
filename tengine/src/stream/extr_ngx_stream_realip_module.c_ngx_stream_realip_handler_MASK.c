
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_stream_session_t ;
struct TYPE_14__ {int * from; } ;
typedef TYPE_3__ ngx_stream_realip_srv_conf_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {scalar_t__ len; int data; } ;
struct TYPE_15__ {int proxy_protocol_port; TYPE_1__ proxy_protocol_addr; int pool; int sockaddr; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_16__ {int sockaddr; } ;
typedef TYPE_5__ ngx_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*,int ,scalar_t__) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_stream_session_t *VAR_3)
{
    ngx_addr_t VAR_4;
    ngx_connection_t *VAR_5;
    ngx_stream_realip_srv_conf_t *VAR_6;

    VAR_6 = FUNC_3(VAR_3, VAR_2);

    if (VAR_6->from == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = VAR_3->connection;

    if (VAR_5->proxy_protocol_addr.len == 0) {
        return VAR_0;
    }

    if (FUNC_0(VAR_5->sockaddr, VAR_6->from) != VAR_1) {
        return VAR_0;
    }

    if (FUNC_2(VAR_5->pool, &VAR_4, VAR_5->proxy_protocol_addr.data,
                       VAR_5->proxy_protocol_addr.len)
        != VAR_1)
    {
        return VAR_0;
    }

    FUNC_1(VAR_4.sockaddr, VAR_5->proxy_protocol_port);

    return FUNC_4(VAR_3, &VAR_4);
}
