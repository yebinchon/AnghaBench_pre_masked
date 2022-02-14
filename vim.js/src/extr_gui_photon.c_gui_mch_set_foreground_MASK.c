
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int event ;
struct TYPE_6__ {int vimWindow; } ;
struct TYPE_5__ {int rid; int event_state; int event_f; } ;
typedef TYPE_1__ PhWindowEvent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void
FUNC_3()
{
    PhWindowEvent_t VAR_3;

    FUNC_2(&VAR_3, 0, sizeof (VAR_3));
    VAR_3.event_f = VAR_1;
    VAR_3.event_state = VAR_0;
    VAR_3.rid = FUNC_1(VAR_2.vimWindow);
    FUNC_0(&VAR_3);
}
