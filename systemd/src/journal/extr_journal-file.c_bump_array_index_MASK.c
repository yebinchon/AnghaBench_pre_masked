
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ direction_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(uint64_t *VAR_1, direction_t VAR_2, uint64_t VAR_3) {



        if (VAR_2 == VAR_0) {
                if (*VAR_1 >= VAR_3 - 1)
                        return 0;

                (*VAR_1) ++;
        } else {
                if (*VAR_1 <= 0)
                        return 0;

                (*VAR_1) --;
        }

        return 1;
}
