
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,scalar_t__*) ;

int FUNC_2(const char *VAR_4, uint64_t *VAR_5) {
        uint64_t VAR_6;
        int VAR_7;

        if (FUNC_0(VAR_4)) {
                *VAR_5 = VAR_0;
                return 0;
        }

        VAR_7 = FUNC_1(VAR_4, &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        if (VAR_6 < VAR_2 || VAR_6 > VAR_1)
                return -VAR_3;

        *VAR_5 = VAR_6;
        return 0;
}
