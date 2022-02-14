
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int st_dev; } ;
struct mnttab {int dummy; } ;
struct extmnttab {int mnt_minor; int mnt_major; int mnt_mountp; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct mnttab*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct stat64*) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_0, struct extmnttab *VAR_1, int VAR_2)
{
 int VAR_3;
 struct stat64 VAR_4;

 VAR_3 = FUNC_0(VAR_0, (struct mnttab *)VAR_1);
 if (VAR_3 == 0) {
  if (FUNC_3(VAR_1->mnt_mountp, &VAR_4) != 0) {
   VAR_1->mnt_major = 0;
   VAR_1->mnt_minor = 0;
   return (VAR_3);
  }
  VAR_1->mnt_major = FUNC_1(VAR_4.st_dev);
  VAR_1->mnt_minor = FUNC_2(VAR_4.st_dev);
 }

 return (VAR_3);
}
