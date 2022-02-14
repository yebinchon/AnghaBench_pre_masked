
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int set; int allocated; } ;
typedef TYPE_1__ CPUSet ;


 int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_2(CPUSet *VAR_1, unsigned VAR_2) {
        int VAR_3;

        if (VAR_2 >= 8192)

                return -VAR_0;

        VAR_3 = FUNC_1(VAR_1, VAR_2 + 1);
        if (VAR_3 < 0)
                return VAR_3;

        FUNC_0(VAR_2, VAR_1->allocated, VAR_1->set);
        return 0;
}
