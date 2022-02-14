
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
typedef int ngx_event_handler_pt ;
struct TYPE_3__ {int log; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_event_handler_pt VAR_6)
{
    VAR_5.handler = VAR_6;

    if (FUNC_1(VAR_3, 0, &VAR_5) != 0) {
        FUNC_0(VAR_1, VAR_5.log, VAR_4,
                      "port_send() failed");
        return VAR_0;
    }

    return VAR_2;
}
