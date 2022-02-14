
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int ExecCommandFlags ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char const*) ;

ExecCommandFlags FUNC_2(const char *VAR_2) {
        ssize_t VAR_3;

        VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_1), VAR_2);

        if (VAR_3 < 0)
                return VAR_0;
        else
                return 1 << VAR_3;
}
