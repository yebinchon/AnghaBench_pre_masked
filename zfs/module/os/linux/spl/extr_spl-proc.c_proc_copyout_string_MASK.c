
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1, int VAR_2, const char *VAR_3,
    char *VAR_4)
{





 int VAR_5 = FUNC_0(FUNC_2(VAR_3), VAR_2);

 if (FUNC_1(VAR_1, VAR_3, VAR_5))
  return (-VAR_0);

 if (VAR_4 != ((void*)0) && VAR_5 < VAR_2) {
  if (FUNC_1(VAR_1 + VAR_5, VAR_4, 1))
   return (-VAR_0);

  VAR_5++;
 }

 return (VAR_5);
}
