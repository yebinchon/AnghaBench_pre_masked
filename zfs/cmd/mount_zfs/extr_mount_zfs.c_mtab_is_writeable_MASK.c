
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int
FUNC_4(void)
{
 struct stat VAR_2;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_2("/etc/mtab", &VAR_2);
 if (VAR_3 || FUNC_0(VAR_2.st_mode))
  return (0);

 VAR_4 = FUNC_3("/etc/mtab", VAR_1 | VAR_0, 0644);
 if (VAR_4 < 0)
  return (0);

 FUNC_1(VAR_4);
 return (1);
}
