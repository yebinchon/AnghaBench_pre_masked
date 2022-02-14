
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; int pid_file; } ;
typedef TYPE_1__ Service ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(Service *VAR_3) {
        int VAR_4;

        FUNC_1(VAR_3->pid_file);
        FUNC_1(FUNC_0(VAR_3->state, VAR_0, VAR_1));

        VAR_4 = FUNC_3(VAR_3, 0);
        if (VAR_4 < 0)
                return VAR_4;

        FUNC_4(VAR_3);

        FUNC_2(VAR_3, VAR_2);
        return 0;
}
