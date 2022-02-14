
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int class; int leader; } ;
typedef TYPE_1__ Machine ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;

int FUNC_3(Machine *VAR_2, const char *VAR_3, int VAR_4) {
        FUNC_0(VAR_2);

        switch (VAR_2->class) {

        case 128:
                return FUNC_1(VAR_3, VAR_4);

        case 129:
                if (VAR_2->leader <= 0)
                        return -VAR_0;

                return FUNC_2(VAR_2->leader, VAR_3, VAR_4);

        default:
                return -VAR_1;
        }
}
