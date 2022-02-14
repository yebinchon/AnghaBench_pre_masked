
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; int log_file; struct TYPE_4__* msg; struct TYPE_4__* posstr; struct TYPE_4__* tstr; struct TYPE_4__* id; } ;
typedef TYPE_1__ Logger ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(Logger *VAR_0)
{

    return;


    if (!VAR_0)
        return;

    FUNC_4(VAR_0->mutex);
    FUNC_1(VAR_0->id);
    FUNC_1(VAR_0->tstr);
    FUNC_1(VAR_0->posstr);
    FUNC_1(VAR_0->msg);

    if (FUNC_0(VAR_0->log_file) != 0)
        FUNC_2("Could not close log file");

    FUNC_5(VAR_0->mutex);
    FUNC_3(VAR_0->mutex);

    FUNC_1(VAR_0);
}
