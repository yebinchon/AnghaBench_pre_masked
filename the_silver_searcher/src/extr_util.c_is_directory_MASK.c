
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {scalar_t__ d_type; int d_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char**,char*,char const*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;

int FUNC_5(const char *VAR_5, const struct dirent *VAR_6) {
    char *VAR_7;
    struct stat VAR_8;
    FUNC_2(&VAR_7, "%s/%s", VAR_5, VAR_6->d_name);
    if (FUNC_4(VAR_7, &VAR_8) != 0) {
        FUNC_3(VAR_7);
        return VAR_3;
    }



    int VAR_9 = FUNC_1(VAR_8.st_mode);

    FUNC_3(VAR_7);
    return VAR_9;
}
