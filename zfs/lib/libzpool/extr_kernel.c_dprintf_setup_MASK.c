
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int VAR_3 ;

void
FUNC_4(int *VAR_4, char **VAR_5)
{
 int VAR_6, VAR_7;
 for (VAR_6 = 1; VAR_6 < *VAR_4; VAR_6++) {
  int VAR_8 = FUNC_2("debug=");

  if (FUNC_3("debug=", VAR_5[VAR_6], VAR_8) == 0) {
   VAR_2 = VAR_5[VAR_6] + VAR_8;

   for (VAR_7 = VAR_6; VAR_7 < *VAR_4; VAR_7++)
    VAR_5[VAR_7] = VAR_5[VAR_7+1];
   VAR_5[VAR_7] = ((void*)0);
   (*VAR_4)--;
  }
 }

 if (VAR_2 == ((void*)0)) {

  VAR_2 = FUNC_1("ZFS_DEBUG");
 }




 if (FUNC_0("on"))
  VAR_1 = 1;

 if (VAR_2 != ((void*)0))
  VAR_3 |= VAR_0;
}
