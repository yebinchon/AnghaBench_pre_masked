
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int deferred_closes; } ;
typedef TYPE_1__ Server ;
typedef int JournalFile ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(Server *VAR_1) {
        FUNC_0(VAR_1);


        if (FUNC_4(VAR_1->deferred_closes) < VAR_0)
                return;


        FUNC_3(VAR_1);


        while (FUNC_4(VAR_1->deferred_closes) >= VAR_0) {
                JournalFile *VAR_2;

                FUNC_1(VAR_2 = FUNC_5(VAR_1->deferred_closes));
                FUNC_2(VAR_2);
        }
}
