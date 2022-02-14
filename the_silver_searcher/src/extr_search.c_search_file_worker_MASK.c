
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* path; struct TYPE_5__* next; } ;
typedef TYPE_1__ work_queue_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

void *FUNC_7(void *VAR_6) {
    work_queue_t *VAR_7;
    int VAR_8 = *(int *)VAR_6;

    FUNC_1("Worker %i started", VAR_8);
    while (VAR_0) {
        FUNC_4(&VAR_4);
        while (VAR_3 == ((void*)0)) {
            if (VAR_1) {
                FUNC_5(&VAR_4);
                FUNC_1("Worker %i finished.", VAR_8);
                FUNC_3(((void*)0));
            }
            FUNC_2(&VAR_2, &VAR_4);
        }
        VAR_7 = VAR_3;
        VAR_3 = VAR_3->next;
        if (VAR_3 == ((void*)0)) {
            VAR_5 = ((void*)0);
        }
        FUNC_5(&VAR_4);

        FUNC_6(VAR_7->path);
        FUNC_0(VAR_7->path);
        FUNC_0(VAR_7);
    }
}
