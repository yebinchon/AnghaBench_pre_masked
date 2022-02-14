
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_dev; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_4) {
        char VAR_5[FUNC_0("/../loop/")];
        struct stat VAR_6;

        FUNC_3(VAR_4);

        if (FUNC_4(VAR_4, &VAR_6) < 0)
                return -VAR_3;

        if (!FUNC_1(VAR_6.st_mode))
                return -VAR_1;

        FUNC_5(VAR_5, "/loop/", VAR_6.st_dev);
        if (FUNC_2(VAR_5, VAR_2) < 0) {
                if (VAR_3 != VAR_0)
                        return -VAR_3;


                FUNC_5(VAR_5, "/../loop/", VAR_6.st_dev);
                if (FUNC_2(VAR_5, VAR_2) < 0)
                        return VAR_3 == VAR_0 ? 0 : -VAR_3;
        }

        return 1;
}
