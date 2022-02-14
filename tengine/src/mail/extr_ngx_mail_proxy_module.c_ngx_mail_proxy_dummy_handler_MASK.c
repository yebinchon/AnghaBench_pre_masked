
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_mail_session_t ;
struct TYPE_5__ {TYPE_2__* data; int log; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {int * data; } ;
typedef TYPE_2__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(ngx_event_t *VAR_2)
{
    ngx_connection_t *VAR_3;
    ngx_mail_session_t *VAR_4;

    FUNC_1(VAR_0, VAR_2->log, 0, "mail proxy dummy handler");

    if (FUNC_0(VAR_2, 0) != VAR_1) {
        VAR_3 = VAR_2->data;
        VAR_4 = VAR_3->data;

        FUNC_2(VAR_4);
    }
}
