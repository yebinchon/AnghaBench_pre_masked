
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pl_next; } ;
typedef TYPE_1__ zprop_list_t ;
typedef int zfs_type_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,TYPE_1__**,int ) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;

int
FUNC_7(libzfs_handle_t *VAR_2, char *VAR_3, zprop_list_t **VAR_4,
    zfs_type_t VAR_5)
{
 *VAR_4 = ((void*)0);




 if (FUNC_3(VAR_3, "all") == 0)
  return (0);




 if (VAR_3[0] == '\0') {
  FUNC_6(VAR_2, FUNC_1(VAR_1,
      "no properties specified"));
  return (FUNC_5(VAR_2, VAR_0, FUNC_1(VAR_1,
      "bad property list")));
 }





 while (*VAR_3 != '\0') {
  size_t VAR_6;
  char *VAR_7;
  char VAR_8;

  if ((VAR_7 = FUNC_2(VAR_3, ',')) == ((void*)0)) {
   VAR_6 = FUNC_4(VAR_3);
   VAR_7 = VAR_3 + VAR_6;
  } else {
   VAR_6 = VAR_7 - VAR_3;
  }




  if (VAR_6 == 0) {
   FUNC_6(VAR_2, FUNC_1(VAR_1,
       "empty property name"));
   return (FUNC_5(VAR_2, VAR_0,
       FUNC_1(VAR_1, "bad property list")));
  }




  VAR_8 = VAR_3[VAR_6];
  VAR_3[VAR_6] = '\0';

  if (FUNC_3(VAR_3, "space") == 0) {
   static char *VAR_9[] = {
    "name", "avail", "used", "usedbysnapshots",
    "usedbydataset", "usedbyrefreservation",
    "usedbychildren", ((void*)0)
   };
   int VAR_10;

   for (VAR_10 = 0; VAR_9[VAR_10]; VAR_10++) {
    if (FUNC_0(VAR_2, VAR_9[VAR_10], VAR_4, VAR_5))
     return (-1);
    VAR_4 = &(*VAR_4)->pl_next;
   }
  } else {
   if (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5))
    return (-1);
   VAR_4 = &(*VAR_4)->pl_next;
  }

  VAR_3 = VAR_7;
  if (VAR_8 == ',')
   VAR_3++;
 }

 return (0);
}
