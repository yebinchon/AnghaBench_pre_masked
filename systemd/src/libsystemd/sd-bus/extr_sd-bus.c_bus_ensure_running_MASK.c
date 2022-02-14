
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ state; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4(sd_bus *VAR_5) {
        int VAR_6;

        FUNC_1(VAR_5);

        if (FUNC_0(VAR_5->state, VAR_3, VAR_0, VAR_1))
                return -VAR_4;
        if (VAR_5->state == VAR_2)
                return 1;

        for (;;) {
                VAR_6 = FUNC_2(VAR_5, ((void*)0));
                if (VAR_6 < 0)
                        return VAR_6;
                if (VAR_5->state == VAR_2)
                        return 1;
                if (VAR_6 > 0)
                        continue;

                VAR_6 = FUNC_3(VAR_5, (uint64_t) -1);
                if (VAR_6 < 0)
                        return VAR_6;
        }
}
