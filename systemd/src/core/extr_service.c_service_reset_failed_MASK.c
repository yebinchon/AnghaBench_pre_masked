
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_5__ {scalar_t__ state; int flush_n_restarts; scalar_t__ n_restarts; void* clean_result; void* reload_result; void* result; } ;
typedef TYPE_1__ Service ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(Unit *VAR_3) {
        Service *VAR_4 = FUNC_0(VAR_3);

        FUNC_1(VAR_4);

        if (VAR_4->state == VAR_1)
                FUNC_2(VAR_4, VAR_0);

        VAR_4->result = VAR_2;
        VAR_4->reload_result = VAR_2;
        VAR_4->clean_result = VAR_2;
        VAR_4->n_restarts = 0;
        VAR_4->flush_n_restarts = 0;
}
