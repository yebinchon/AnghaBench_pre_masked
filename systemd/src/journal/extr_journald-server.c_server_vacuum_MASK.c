
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int runtime_storage; scalar_t__ runtime_journal; int system_storage; scalar_t__ system_journal; scalar_t__ oldest_file_usec; } ;
typedef TYPE_1__ Server ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (char*) ;

int FUNC_3(Server *VAR_0, bool VAR_1) {
        FUNC_0(VAR_0);

        FUNC_2("Vacuuming...");

        VAR_0->oldest_file_usec = 0;

        if (VAR_0->system_journal)
                FUNC_1(VAR_0, &VAR_0->system_storage, VAR_1);
        if (VAR_0->runtime_journal)
                FUNC_1(VAR_0, &VAR_0->runtime_storage, VAR_1);

        return 0;
}
