
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int start_limit_hit; int reboot_arg; int start_limit_action; int manager; int id; int start_ratelimit; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int,int ,int,char const*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (char*,int ,char*) ;

int FUNC_5(Unit *VAR_3) {
        const char *VAR_4;

        FUNC_0(VAR_3);

        if (FUNC_3(&VAR_3->start_ratelimit)) {
                VAR_3->start_limit_hit = 0;
                return 0;
        }

        FUNC_2(VAR_3, "Start request repeated too quickly.");
        VAR_3->start_limit_hit = 1;

        VAR_4 = FUNC_4("unit ", VAR_3->id, " failed");

        FUNC_1(VAR_3->manager, VAR_3->start_limit_action,
                         VAR_1|VAR_2,
                         VAR_3->reboot_arg, -1, VAR_4);

        return -VAR_0;
}
