
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 == ((void*)0)) {
  return (-1);
 }

 if (FUNC_0(VAR_3, VAR_0) == -1) {
  (void) FUNC_1(VAR_2, "chmod(%s, ALL_MODE) failed with "
      "errno %d\n", VAR_3, VAR_1);
  return (1);
 }

 return (VAR_4);
}
