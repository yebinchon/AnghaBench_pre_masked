
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UdevRuleSubstituteType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char) ;

__attribute__((used)) static UdevRuleSubstituteType FUNC_2(const char *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3[0] == '[')
                return VAR_2;
        if (FUNC_1(VAR_3, '%') || FUNC_1(VAR_3, '$'))
                return VAR_0;
        return VAR_1;
}
