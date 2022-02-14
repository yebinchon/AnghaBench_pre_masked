
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_stream_session_t ;
struct TYPE_12__ {TYPE_2__* rules; } ;
typedef TYPE_4__ ngx_stream_access_srv_conf_t ;
struct TYPE_13__ {int mask; int addr; int deny; } ;
typedef TYPE_5__ ngx_stream_access_rule_t ;
typedef int ngx_int_t ;
typedef int in_addr_t ;
struct TYPE_10__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int,int,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_stream_session_t *VAR_2,
    ngx_stream_access_srv_conf_t *VAR_3, in_addr_t VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_stream_access_rule_t *VAR_6;

    VAR_6 = VAR_3->rules->elts;
    for (VAR_5 = 0; VAR_5 < VAR_3->rules->nelts; VAR_5++) {

        FUNC_0(VAR_1, VAR_2->connection->log, 0,
                       "access: %08XD %08XD %08XD",
                       VAR_4, VAR_6[VAR_5].mask, VAR_6[VAR_5].addr);

        if ((VAR_4 & VAR_6[VAR_5].mask) == VAR_6[VAR_5].addr) {
            return FUNC_1(VAR_2, VAR_6[VAR_5].deny);
        }
    }

    return VAR_0;
}
