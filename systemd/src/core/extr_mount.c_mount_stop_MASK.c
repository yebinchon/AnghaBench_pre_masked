
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_7__ {int state; } ;
typedef TYPE_1__ Mount ;


 TYPE_1__* FUNC_0 (int *) ;







 int VAR_0 ;



 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int const,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int const) ;

__attribute__((used)) static int FUNC_6(Unit *VAR_1) {
        Mount *VAR_2 = FUNC_0(VAR_1);

        FUNC_1(VAR_2);

        switch (VAR_2->state) {

        case 130:
        case 129:
        case 128:

                return 0;

        case 135:
        case 134:
        case 133:

                FUNC_3(VAR_2, 128, VAR_0);
                return 0;

        case 131:

                FUNC_5(VAR_2, 128);
                return 0;

        case 132:

                FUNC_5(VAR_2, 129);
                return 0;

        case 136:
                FUNC_4(VAR_2);
                return 1;

        case 137:

                FUNC_3(VAR_2, 129, VAR_0);
                return 0;

        default:
                FUNC_2("Unexpected state.");
        }
}
