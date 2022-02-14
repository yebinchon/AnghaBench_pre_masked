
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int allocated; int set; } ;
typedef TYPE_1__ CPUSet ;


 scalar_t__ FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

int FUNC_2(CPUSet *VAR_0, const CPUSet *VAR_1) {
        int VAR_2;


        for (unsigned VAR_3 = VAR_1->allocated * 8; VAR_3 > 0; VAR_3--)
                if (FUNC_0(VAR_3 - 1, VAR_1->allocated, VAR_1->set)) {
                        VAR_2 = FUNC_1(VAR_0, VAR_3 - 1);
                        if (VAR_2 < 0)
                                return VAR_2;
                }

        return 0;
}
