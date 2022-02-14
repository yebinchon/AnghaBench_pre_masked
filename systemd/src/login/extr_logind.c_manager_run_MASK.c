
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(Manager *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        for (;;) {
                VAR_2 = FUNC_3(VAR_1->event);
                if (VAR_2 < 0)
                        return VAR_2;
                if (VAR_2 == VAR_0)
                        return 0;

                FUNC_2(VAR_1, 1);

                VAR_2 = FUNC_1(VAR_1, 0);
                if (VAR_2 < 0)
                        return VAR_2;
                if (VAR_2 > 0)
                        continue;

                VAR_2 = FUNC_4(VAR_1->event, (uint64_t) -1);
                if (VAR_2 < 0)
                        return VAR_2;
        }
}
