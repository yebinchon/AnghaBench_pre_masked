
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
struct stat {int st_mtim; } ;


 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (struct stat*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_0, usec_t VAR_1, bool VAR_2) {
        struct stat VAR_3;

        if (!VAR_0)
                return 0;



        if (FUNC_0(VAR_0, "/proc", "/sys"))
                return 0;

        if (FUNC_2(VAR_0, &VAR_3) < 0)

                return 1;

        if (VAR_2)

                return !FUNC_1(&VAR_3);
        else

                return FUNC_3(&VAR_3.st_mtim) > VAR_1;

        return 0;
}
