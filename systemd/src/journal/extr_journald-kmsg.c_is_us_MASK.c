
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,int ) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_1, const char *VAR_2) {
        pid_t VAR_3;

        if (!VAR_1 || !VAR_2)
                return 0;

        if (FUNC_1(VAR_2, &VAR_3) < 0)
                return 0;

        return VAR_3 == FUNC_0() &&
               FUNC_2(VAR_1, VAR_0);
}
