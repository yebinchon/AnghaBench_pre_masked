
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int show_status; scalar_t__ no_console_output; } ;
typedef scalar_t__ StatusType ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (int ,int ,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_5(Manager *VAR_6, StatusType VAR_7) {
        FUNC_2(VAR_6);

        if (!FUNC_1(VAR_6))
                return 0;

        if (VAR_6->no_console_output)
                return 0;

        if (!FUNC_0(FUNC_4(VAR_6), VAR_0, VAR_1, VAR_2))
                return 0;


        if (VAR_7 != VAR_5 && FUNC_3(VAR_6) > 0)
                return 0;

        return FUNC_0(VAR_6->show_status, VAR_3, VAR_4);
}
