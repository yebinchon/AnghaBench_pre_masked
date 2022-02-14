
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ EmergencyAction ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;

int FUNC_1(
                const char *VAR_4,
                bool VAR_5,
                EmergencyAction *VAR_6) {

        EmergencyAction VAR_7;

        VAR_7 = FUNC_0(VAR_4);
        if (VAR_7 < 0)
                return -VAR_0;

        if (!VAR_5 && VAR_7 != VAR_1 && VAR_7 < VAR_3)
                return -VAR_2;

        *VAR_6 = VAR_7;
        return 0;
}
