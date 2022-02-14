
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int *) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 == ((void*)0)) {
  return (-1);
 }




 if (FUNC_1(VAR_2, ((void*)0)) == -1) {
  (void) FUNC_0(VAR_1, "utime(%s, NULL) failed with errno "
      "%d\n", VAR_2, VAR_0);
  return (1);
 }

 return (VAR_3);
}
