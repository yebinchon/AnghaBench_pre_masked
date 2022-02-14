
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ direction_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(uint64_t VAR_1, uint64_t VAR_2, direction_t VAR_3) {


        if (VAR_2 == 0 || VAR_1 == 0)
                return 0;


        return VAR_3 == VAR_0 ?
                VAR_1 > VAR_2 :
                VAR_1 < VAR_2;
}
