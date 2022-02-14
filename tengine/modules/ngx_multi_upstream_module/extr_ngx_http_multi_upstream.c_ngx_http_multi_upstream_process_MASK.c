
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_6__ {TYPE_2__* log; } ;
typedef TYPE_1__ ngx_connection_t ;
struct TYPE_7__ {char* action; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*,int ,char*) ;

void
FUNC_3(ngx_connection_t *VAR_1, ngx_uint_t VAR_2)
{
    if (VAR_2) {

        FUNC_2(VAR_0, VAR_1->log, 0,
                "multi: http upstream process write");

        VAR_1->log->action = "multi sending to upstream";

        FUNC_1(VAR_1);
        return;
    } else {

        FUNC_2(VAR_0, VAR_1->log, 0,
                "multi: http upstream process read");

        VAR_1->log->action = "multi reading from upstream";

        FUNC_0(VAR_1);
        return;
    }
}
