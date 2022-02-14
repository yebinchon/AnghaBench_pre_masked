
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_6__ {int state; } ;
typedef TYPE_1__ Swap ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;







 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int const,int ) ;

__attribute__((used)) static int FUNC_6(Unit *VAR_2) {
        Swap *VAR_3 = FUNC_0(VAR_2);

        FUNC_1(VAR_3);

        switch (VAR_3->state) {

        case 130:
        case 128:
        case 129:

                return 0;

        case 134:
        case 133:

                FUNC_5(VAR_3, 128, VAR_1);
                return 0;

        case 132:
                if (FUNC_3() > 0)
                        return -VAR_0;

                FUNC_4(VAR_3);
                return 1;

        case 131:

                FUNC_5(VAR_3, 129, VAR_1);
                return 0;

        default:
                FUNC_2("Unexpected state.");
        }
}
