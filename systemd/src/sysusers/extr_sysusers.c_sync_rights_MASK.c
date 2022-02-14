
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_gid; int st_uid; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_3(FILE *VAR_1, FILE *VAR_2) {
        struct stat VAR_3;

        if (FUNC_2(FUNC_1(VAR_1), &VAR_3) < 0)
                return -VAR_0;

        return FUNC_0(FUNC_1(VAR_2), VAR_3.st_mode & 07777, VAR_3.st_uid, VAR_3.st_gid);
}
