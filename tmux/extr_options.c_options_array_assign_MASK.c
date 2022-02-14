
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct options_entry {TYPE_1__* tableentry; } ;
struct TYPE_2__ {char* separator; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (struct options_entry*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct options_entry*,scalar_t__,char const*,int ,char**) ;
 char* FUNC_3 (char**,char const*) ;
 char* FUNC_4 (char const*) ;

int
FUNC_5(struct options_entry *VAR_1, const char *VAR_2, char **VAR_3)
{
 const char *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;
 u_int VAR_8;

 VAR_4 = VAR_1->tableentry->separator;
 if (VAR_4 == ((void*)0))
  VAR_4 = " ,";
 if (*VAR_4 == '\0') {
  if (*VAR_2 == '\0')
   return (0);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   if (FUNC_1(VAR_1, VAR_8) == ((void*)0))
    break;
  }
  return (FUNC_2(VAR_1, VAR_8, VAR_2, 0, VAR_3));
 }

 if (*VAR_2 == '\0')
  return (0);
 VAR_5 = VAR_7 = FUNC_4(VAR_2);
 while ((VAR_6 = FUNC_3(&VAR_7, VAR_4)) != ((void*)0)) {
  if (*VAR_6 == '\0')
   continue;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   if (FUNC_1(VAR_1, VAR_8) == ((void*)0))
    break;
  }
  if (VAR_8 == VAR_0)
   break;
  if (FUNC_2(VAR_1, VAR_8, VAR_6, 0, VAR_3) != 0) {
   FUNC_0(VAR_5);
   return (-1);
  }
 }
 FUNC_0(VAR_5);
 return (0);
}
