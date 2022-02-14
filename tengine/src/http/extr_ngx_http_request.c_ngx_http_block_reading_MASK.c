
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {scalar_t__ active; } ;
struct TYPE_6__ {TYPE_5__* read; int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;

void
FUNC_3(ngx_http_request_t *VAR_5)
{
    FUNC_2(VAR_0, VAR_5->connection->log, 0,
                   "http reading blocked");



    if ((VAR_4 & VAR_3)
        && VAR_5->connection->read->active)
    {
        if (FUNC_0(VAR_5->connection->read, VAR_2, 0) != VAR_1) {
            FUNC_1(VAR_5, 0);
        }
    }
}
