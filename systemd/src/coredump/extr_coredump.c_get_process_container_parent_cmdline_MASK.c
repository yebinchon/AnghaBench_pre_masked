
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_ino; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ,char**) ;
 char* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_4(pid_t VAR_2, char** VAR_3) {
        int VAR_4 = 0;
        pid_t VAR_5;
        const char *VAR_6;
        struct stat VAR_7, VAR_8;


        if (FUNC_3("/", &VAR_7) < 0)
                return -VAR_1;

        VAR_6 = FUNC_2(VAR_2, "root");
        if (FUNC_3(VAR_6, &VAR_8) < 0)
                return -VAR_1;


        if (VAR_8.st_ino == VAR_7.st_ino) {
                *VAR_3 = ((void*)0);
                return 0;
        }

        VAR_4 = FUNC_0(VAR_2, &VAR_5);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_1(VAR_5, VAR_0, 0, VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        return 1;
}
