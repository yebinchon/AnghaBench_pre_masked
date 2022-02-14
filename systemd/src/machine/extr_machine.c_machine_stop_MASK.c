
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int stopping; int manager; int class; } ;
typedef TYPE_1__ Machine ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

int FUNC_5(Machine *VAR_3) {
        int VAR_4;
        FUNC_1(VAR_3);

        if (!FUNC_0(VAR_3->class, VAR_1, VAR_2))
                return -VAR_0;

        VAR_4 = FUNC_3(VAR_3);

        VAR_3->stopping = 1;

        FUNC_2(VAR_3);
        (void) FUNC_4(VAR_3->manager);

        return VAR_4;
}
