
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct stat {int st_uid; int st_gid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_7) {
        int VAR_8;

        if (VAR_5 == VAR_2) {
                VAR_4 = 0;
                return 0;
        }

        if (VAR_4 == VAR_1) {
                struct stat VAR_9;

                VAR_8 = FUNC_3(VAR_7, &VAR_9);
                if (VAR_8 < 0)
                        return FUNC_2(VAR_6, "Failed to determine UID base of %s: %m", VAR_7);

                VAR_4 = VAR_9.st_uid & FUNC_1(0xffff0000);

                if (VAR_4 != (VAR_9.st_gid & FUNC_1(0xffff0000)))
                        return FUNC_2(FUNC_0(VAR_0),
                                               "UID and GID base of %s don't match.", VAR_7);

                VAR_3 = FUNC_1(0x10000);
        }

        if (VAR_4 > (uid_t) -1 - VAR_3)
                return FUNC_2(FUNC_0(VAR_0),
                                       "UID base too high for UID range.");

        return 0;
}
