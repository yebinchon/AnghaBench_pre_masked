
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ManagerTimestamp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;

ManagerTimestamp FUNC_1(ManagerTimestamp VAR_3) {
        if (FUNC_0() &&
            VAR_3 >= VAR_1 &&
            VAR_3 <= VAR_2)
                return VAR_3 - VAR_1 + VAR_0;
        return VAR_3;
}
