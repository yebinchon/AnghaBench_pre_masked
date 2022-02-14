
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 int FUNC_0 (char*,long,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(wchar_t VAR_0)
{
 int VAR_1;




 VAR_1 = FUNC_2(VAR_0);

 if (VAR_1 < 0 || VAR_1 > 0xff) {
  FUNC_0("Unicode %04lx, wcwidth() %d", (long)VAR_0, VAR_1);
  if (VAR_1 < 0)
   return (1);

  return (-1);
 }
 return (VAR_1);
}
