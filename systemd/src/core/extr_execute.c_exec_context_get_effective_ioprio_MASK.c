
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ioprio; scalar_t__ ioprio_set; } ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(const ExecContext *VAR_2) {
        int VAR_3;

        FUNC_1(VAR_2);

        if (VAR_2->ioprio_set)
                return VAR_2->ioprio;

        VAR_3 = FUNC_2(VAR_1, 0);
        if (VAR_3 < 0)
                return FUNC_0(VAR_0, 4);

        return VAR_3;
}
