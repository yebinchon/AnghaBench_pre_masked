
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_5__ {TYPE_4__* connection; int status; } ;
typedef TYPE_1__ ngx_stream_session_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(ngx_stream_session_t *VAR_1, ngx_uint_t VAR_2)
{
    FUNC_0(VAR_0, VAR_1->connection->log, 0,
                   "finalize stream session: %i", VAR_2);

    VAR_1->status = VAR_2;

    FUNC_2(VAR_1);

    FUNC_1(VAR_1->connection);
}
