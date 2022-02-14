
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int runtime_storage; scalar_t__ runtime_journal; int system_storage; scalar_t__ system_journal; } ;
typedef TYPE_1__ Server ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(Server *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        FUNC_4(VAR_1);
        FUNC_5(VAR_1, 1);

        if (VAR_1->system_journal)
                FUNC_3(&VAR_1->system_storage);
        if (VAR_1->runtime_journal)
                FUNC_3(&VAR_1->runtime_storage);


        VAR_2 = FUNC_6("/run/systemd/journal/rotated", FUNC_2(VAR_0));
        if (VAR_2 < 0)
                FUNC_1(VAR_2, "Failed to write /run/systemd/journal/rotated, ignoring: %m");
}
