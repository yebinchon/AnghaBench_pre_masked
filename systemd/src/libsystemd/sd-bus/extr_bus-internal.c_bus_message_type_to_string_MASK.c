
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

const char *FUNC_0(uint8_t VAR_4) {
        if (VAR_4 == VAR_3)
                return "signal";
        else if (VAR_4 == VAR_0)
                return "method_call";
        else if (VAR_4 == VAR_1)
                return "error";
        else if (VAR_4 == VAR_2)
                 return "method_return";
        else
                return ((void*)0);
}
