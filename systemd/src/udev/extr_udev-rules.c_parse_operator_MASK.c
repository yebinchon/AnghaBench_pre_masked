
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UdevRuleOperatorType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static UdevRuleOperatorType FUNC_2(const char *VAR_7) {
        FUNC_0(VAR_7);

        if (FUNC_1(VAR_7, "=="))
                return VAR_3;
        if (FUNC_1(VAR_7, "!="))
                return VAR_4;
        if (FUNC_1(VAR_7, "+="))
                return VAR_0;
        if (FUNC_1(VAR_7, "-="))
                return VAR_5;
        if (FUNC_1(VAR_7, "="))
                return VAR_1;
        if (FUNC_1(VAR_7, ":="))
                return VAR_2;

        return VAR_6;
}
