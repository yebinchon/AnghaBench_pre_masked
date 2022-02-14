
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*,scalar_t__) ;
 int FUNC_2 (char const*,char const*) ;

int FUNC_3(const char *VAR_0, const char *VAR_1, pid_t VAR_2) {
        int VAR_3, VAR_4;

        FUNC_0(VAR_2 >= 0);

        VAR_3 = FUNC_2(VAR_0, VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
        if (VAR_4 < 0)
                return VAR_4;


        return VAR_3;
}
