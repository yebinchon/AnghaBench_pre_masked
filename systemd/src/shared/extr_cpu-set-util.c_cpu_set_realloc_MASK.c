
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int cpu_set_t ;
struct TYPE_4__ {size_t allocated; int * set; } ;
typedef TYPE_1__ CPUSet ;


 size_t FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,size_t) ;

int FUNC_4(CPUSet *VAR_1, unsigned VAR_2) {
        size_t VAR_3;

        FUNC_1(VAR_1);

        VAR_3 = FUNC_0(VAR_2);
        if (VAR_3 > VAR_1->allocated) {
                cpu_set_t *VAR_4;

                VAR_4 = FUNC_3(VAR_1->set, VAR_3);
                if (!VAR_4)
                        return -VAR_0;

                FUNC_2((uint8_t*) VAR_4 + VAR_1->allocated, VAR_3 - VAR_1->allocated);

                VAR_1->set = VAR_4;
                VAR_1->allocated = VAR_3;
        }

        return 0;
}
