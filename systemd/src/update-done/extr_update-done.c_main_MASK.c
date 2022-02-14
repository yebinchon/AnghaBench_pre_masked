
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mtim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;

int FUNC_5(int VAR_3, char *VAR_4[]) {
        struct stat VAR_5;
        int VAR_6, VAR_7 = 0;

        FUNC_2();

        if (FUNC_4("/usr", &VAR_5) < 0) {
                FUNC_1(VAR_2, "Failed to stat /usr: %m");
                return VAR_0;
        }

        VAR_6 = FUNC_3();
        if (VAR_6 < 0) {
                FUNC_1(VAR_6, "SELinux setup failed: %m");
                return VAR_0;
        }

        VAR_6 = FUNC_0("/etc/.updated", &VAR_5.st_mtim);
        VAR_7 = FUNC_0("/var/.updated", &VAR_5.st_mtim);

        return VAR_6 < 0 || VAR_7 < 0 ? VAR_0 : VAR_1;
}
