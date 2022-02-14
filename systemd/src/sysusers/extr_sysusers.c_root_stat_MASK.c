
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char const*) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, struct stat *VAR_3) {
        const char *VAR_4;

        VAR_4 = FUNC_0(VAR_0, VAR_2);
        if (FUNC_1(VAR_4, VAR_3) < 0)
                return -VAR_1;

        return 0;
}
