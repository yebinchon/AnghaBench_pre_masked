
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; int genl; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(Manager *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_1(&VAR_1->genl);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_3(VAR_1->genl, VAR_0);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_2(VAR_1->genl, VAR_1->event, 0);
        if (VAR_2 < 0)
                return VAR_2;

        return 0;
}
