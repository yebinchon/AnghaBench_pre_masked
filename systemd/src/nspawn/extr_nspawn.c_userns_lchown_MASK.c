
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char const*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (char const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(const char *VAR_8, uid_t VAR_9, gid_t VAR_10) {
        FUNC_0(VAR_8);

        if (VAR_6 == VAR_3)
                return 0;

        if (VAR_9 == VAR_2 && VAR_10 == VAR_1)
                return 0;

        if (VAR_9 != VAR_2) {
                VAR_9 += VAR_5;

                if (VAR_9 < VAR_5 || VAR_9 >= VAR_5 + VAR_4)
                        return -VAR_0;
        }

        if (VAR_10 != VAR_1) {
                VAR_10 += (gid_t) VAR_5;

                if (VAR_10 < (gid_t) VAR_5 || VAR_10 >= (gid_t) (VAR_5 + VAR_4))
                        return -VAR_0;
        }

        if (FUNC_1(VAR_8, VAR_9, VAR_10) < 0)
                return -VAR_7;

        return 0;
}
