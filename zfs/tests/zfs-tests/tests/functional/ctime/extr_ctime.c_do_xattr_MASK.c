
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,int,int,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char const*,char*,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4 = "user.value";

 if (VAR_2 == ((void*)0)) {
  return (-1);
 }

 if (FUNC_3(VAR_2, "user.x", VAR_4, FUNC_4(VAR_4), 0) == -1) {
  (void) FUNC_0(VAR_1, "setxattr(%s, %d, %d) failed with errno "
      "%d\n", VAR_2, (int)FUNC_2(), (int)FUNC_1(), VAR_0);
  return (1);
 }
 return (VAR_3);
}
