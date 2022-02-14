
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int Unit ;
typedef int Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,char*,int *,int **) ;
 int FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(Manager *VAR_6) {
        const char *VAR_7 = "/tmp/test-path_makedirectory/";
        Unit *VAR_8 = ((void*)0);
        struct stat VAR_9;

        FUNC_1(*VAR_6);

        FUNC_1(FUNC_0(VAR_7, VAR_0) < 0);

        FUNC_1(FUNC_2(VAR_6, "path-makedirectory.path", ((void*)0), &VAR_8) >= 0);
        FUNC_1(FUNC_5(VAR_8) >= 0);


        FUNC_1(FUNC_0(VAR_7, VAR_0) >= 0);


        FUNC_1(FUNC_4(VAR_7, &VAR_9) >= 0);
        FUNC_1((VAR_9.st_mode & VAR_5) == 0700);
        FUNC_1((VAR_9.st_mode & VAR_3) == 0040);
        FUNC_1((VAR_9.st_mode & VAR_4) == 0004);

        FUNC_1(FUNC_6(VAR_8) >= 0);
        (void) FUNC_3(VAR_7, VAR_2|VAR_1);
}
