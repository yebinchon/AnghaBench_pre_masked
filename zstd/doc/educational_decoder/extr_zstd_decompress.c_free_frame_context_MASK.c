
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_dtable; int ml_dtable; int ll_dtable; int literals_dtable; } ;
typedef TYPE_1__ frame_context_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__* const,int ,int) ;

__attribute__((used)) static void FUNC_3(frame_context_t *const VAR_0) {
    FUNC_1(&VAR_0->literals_dtable);

    FUNC_0(&VAR_0->ll_dtable);
    FUNC_0(&VAR_0->ml_dtable);
    FUNC_0(&VAR_0->of_dtable);

    FUNC_2(VAR_0, 0, sizeof(frame_context_t));
}
