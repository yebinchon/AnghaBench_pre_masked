
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static usec_t FUNC_1(uint64_t VAR_2) {
        if (VAR_2 == (uint64_t) -1)
                return 0;

        if (VAR_2 == 0)
                VAR_2 = VAR_1;

        return FUNC_0(VAR_0) + VAR_2;
}
