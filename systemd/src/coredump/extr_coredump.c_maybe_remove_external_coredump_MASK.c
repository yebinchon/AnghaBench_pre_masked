
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_5, uint64_t VAR_6) {



        if (VAR_3 == VAR_0 &&
            VAR_6 <= VAR_2)
                return 0;

        if (!VAR_5)
                return 1;

        if (FUNC_1(VAR_5) < 0 && VAR_4 != VAR_1)
                return FUNC_0(VAR_4, "Failed to unlink %s: %m", VAR_5);

        return 1;
}
