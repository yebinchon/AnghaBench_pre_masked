
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int **,int *,int ) ;
 int FUNC_5 (char*,int *,int *,int) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static char *
FUNC_9(char *VAR_5, nvlist_t *VAR_6, char **VAR_7)
{
 int VAR_8 = 0;
 char *VAR_9, *VAR_10 = ((void*)0);


 char *VAR_11 = FUNC_6(VAR_5, '/');
 if (VAR_11 != ((void*)0)) {
  size_t VAR_12 = VAR_11 - VAR_5;
  VAR_9 = FUNC_7(VAR_5, VAR_12);
 } else {
  VAR_9 = VAR_5;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_8(VAR_9);
  VAR_8 = FUNC_4(VAR_9, &VAR_6, ((void*)0), 0);
  if (VAR_8 != 0) {
   FUNC_1("Tried to read config of pool \"%s\" but "
       "spa_get_stats() failed with error %d\n",
       VAR_9, VAR_8);
  }
 }

 if (FUNC_0(&VAR_10, "%s%s", VAR_9, VAR_0) == -1)
  return (((void*)0));
 FUNC_2(VAR_6, VAR_4, VAR_10);

 VAR_8 = FUNC_5(VAR_10, VAR_6, ((void*)0),
     VAR_2 | VAR_1 |
     VAR_3);
 if (VAR_8 != 0) {
  FUNC_1("Tried to import pool \"%s\" but spa_import() failed "
      "with error %d\n", VAR_10, VAR_8);
 }

 if (VAR_7 != ((void*)0) && VAR_11 != ((void*)0)) {
  if (FUNC_0(VAR_7, "%s%s", VAR_10, VAR_11) == -1) {
   if (VAR_11 != ((void*)0))
    FUNC_3(VAR_9);
   return (((void*)0));
  }
 }

 if (VAR_5 != VAR_9)
  FUNC_3(VAR_9);

 return (VAR_10);
}
