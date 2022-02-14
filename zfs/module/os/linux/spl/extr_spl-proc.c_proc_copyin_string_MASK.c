
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,void*,int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(char *VAR_3, int VAR_4, const char *VAR_5,
    int VAR_6)
{
 int VAR_7;

 if (VAR_6 > VAR_4)
  return (-VAR_2);

 if (FUNC_0((void *)VAR_3, (void *)VAR_5, VAR_6))
  return (-VAR_0);


 VAR_7 = FUNC_2(VAR_3, VAR_6);
 while (VAR_7-- >= 0)
  if (!FUNC_1(VAR_3[VAR_7]))
   break;


 if (VAR_7 < 0)
  return (-VAR_1);


 if (VAR_7 == VAR_4)
  return (-VAR_2);

 VAR_3[VAR_7 + 1] = 0;
 return (0);
}
