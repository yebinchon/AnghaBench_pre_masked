
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ storage; int deferred_closes; int user_journals; scalar_t__ system_journal; scalar_t__ runtime_journal; } ;
typedef TYPE_1__ Server ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (int ,scalar_t__ (*) (scalar_t__)) ;
 int FUNC_5 (int ,scalar_t__ (*) (scalar_t__)) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(Server *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3->storage == VAR_1)
                return 0;

        if (VAR_3->runtime_journal && !VAR_3->system_journal)
                return 0;

        FUNC_2("Relinquishing /var...");

        (void) FUNC_6(VAR_3, 0, 1);

        VAR_3->system_journal = FUNC_1(VAR_3->system_journal);
        FUNC_4(VAR_3->user_journals, FUNC_1);
        FUNC_5(VAR_3->deferred_closes, FUNC_1);

        if (FUNC_7("/run/systemd/journal/flushed") < 0 && VAR_2 != VAR_0)
                FUNC_3(VAR_2, "Failed to unlink /run/systemd/journal/flushed, ignoring: %m");

        return 0;
}
