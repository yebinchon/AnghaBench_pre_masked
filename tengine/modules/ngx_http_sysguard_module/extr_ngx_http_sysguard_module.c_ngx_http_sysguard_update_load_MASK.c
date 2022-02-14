
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_4__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_4, time_t VAR_5)
{
    ngx_int_t VAR_6, VAR_7;

    VAR_3 = FUNC_1() + VAR_5;

    VAR_7 = FUNC_0(&VAR_6, 1, VAR_4->connection->log);
    if (VAR_7 == VAR_0) {

        VAR_2 = 0;

        return VAR_0;
    }

    VAR_2 = VAR_6;

    return VAR_1;
}
