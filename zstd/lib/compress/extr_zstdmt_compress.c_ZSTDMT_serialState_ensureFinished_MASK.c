
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int nextJobID; int mutex; int ldmWindowMutex; int ldmWindowCond; int ldmWindow; int cond; } ;
typedef TYPE_1__ serialState_t ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(serialState_t* VAR_0,
                                              unsigned VAR_1, size_t VAR_2)
{
    FUNC_1(&VAR_0->mutex);
    if (VAR_0->nextJobID <= VAR_1) {
        FUNC_7(FUNC_2(VAR_2)); (void)VAR_2;
        FUNC_0(5, "Skipping past job %u because of error", VAR_1);
        VAR_0->nextJobID = VAR_1 + 1;
        FUNC_3(&VAR_0->cond);

        FUNC_1(&VAR_0->ldmWindowMutex);
        FUNC_6(&VAR_0->ldmWindow);
        FUNC_4(&VAR_0->ldmWindowCond);
        FUNC_5(&VAR_0->ldmWindowMutex);
    }
    FUNC_5(&VAR_0->mutex);

}
