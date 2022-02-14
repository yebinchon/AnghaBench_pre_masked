
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ show_status; } ;
typedef scalar_t__ ShowStatus ;
typedef TYPE_1__ Manager ;


 TYPE_1__* FUNC_0 (scalar_t__,int ,scalar_t__,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

void FUNC_6(Manager *VAR_4, ShowStatus VAR_5) {
        FUNC_2(VAR_4);
        FUNC_2(FUNC_0(VAR_5, VAR_0, VAR_1, VAR_3, VAR_2));

        if (!FUNC_1(VAR_4))
                return;

        if (VAR_4->show_status != VAR_5)
                FUNC_3("%s showing of status.",
                          VAR_5 == VAR_1 ? "Disabling" : "Enabling");
        VAR_4->show_status = VAR_5;

        if (FUNC_0(VAR_5, VAR_2, VAR_3))
                (void) FUNC_4("/run/systemd/show-status");
        else
                (void) FUNC_5("/run/systemd/show-status");
}
