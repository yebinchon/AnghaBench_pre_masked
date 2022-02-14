
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_4__ {scalar_t__ n_groups; scalar_t__ lru_tail; } ;
typedef TYPE_1__ JournalRateLimit ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(JournalRateLimit *VAR_1, usec_t VAR_2) {
        FUNC_0(VAR_1);




        while (VAR_1->n_groups >= VAR_0 ||
               (VAR_1->lru_tail && FUNC_1(VAR_1->lru_tail, VAR_2)))
                FUNC_2(VAR_1->lru_tail);
}
