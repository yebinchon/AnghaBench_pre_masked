
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lru; } ;
typedef TYPE_1__ JournalRateLimit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(JournalRateLimit *VAR_0) {
        FUNC_0(VAR_0);

        while (VAR_0->lru)
                FUNC_2(VAR_0->lru);

        FUNC_1(VAR_0);
}
