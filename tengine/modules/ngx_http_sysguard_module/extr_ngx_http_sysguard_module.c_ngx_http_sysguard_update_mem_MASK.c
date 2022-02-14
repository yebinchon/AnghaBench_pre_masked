
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_7__ {int totalswap; int freeswap; scalar_t__ bufferram; scalar_t__ cachedram; scalar_t__ freeram; } ;
typedef TYPE_2__ ngx_meminfo_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_6__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_6, time_t VAR_7)
{
    ngx_int_t VAR_8;
    ngx_meminfo_t VAR_9;

    VAR_4 = FUNC_1() + VAR_7;

    VAR_8 = FUNC_0(&VAR_9, VAR_6->connection->log);
    if (VAR_8 == VAR_1) {

        VAR_5 = 0;
        VAR_3 = VAR_0;

        return VAR_1;
    }

    VAR_5 = VAR_9.totalswap == 0
        ? 0 : (VAR_9.totalswap - VAR_9.freeswap) * 100 / VAR_9.totalswap;
    VAR_3 = VAR_9.freeram + VAR_9.cachedram + VAR_9.bufferram;

    return VAR_2;
}
