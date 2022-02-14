
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char const*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (VAR_3 == ((void*)0)) {
  return (-1);
 }

 if ((VAR_4 = FUNC_1(VAR_3, VAR_0)) == -1) {
  (void) FUNC_2(VAR_2, "creat(%s, ALL_MODE) failed with errno "
      "%d\n", VAR_3, VAR_1);
  return (1);
 }
 (void) FUNC_0(VAR_4);

 return (VAR_5);
}
