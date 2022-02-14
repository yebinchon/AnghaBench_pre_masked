
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,size_t,char*,char const* const,char const*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 char** FUNC_6 (size_t*) ;

int
FUNC_7(const char *VAR_3, char *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7 = -1;
 char *VAR_8, *VAR_9, *VAR_10;

 VAR_9 = FUNC_2("ZPOOL_IMPORT_PATH");
 VAR_2 = VAR_0;

 if (VAR_9) {
  VAR_10 = FUNC_4(VAR_9);
  VAR_8 = FUNC_5(VAR_10, ":");
  while (VAR_8 && VAR_7) {
   (void) FUNC_3(VAR_4, VAR_5, "%s/%s", VAR_8, VAR_3);
   VAR_7 = FUNC_0(VAR_4, VAR_1);
   VAR_8 = FUNC_5(((void*)0), ":");
  }
  FUNC_1(VAR_10);
 } else {
  const char * const *VAR_11;
  size_t VAR_12;

  VAR_11 = FUNC_6(&VAR_12);

  for (VAR_6 = 0; VAR_6 < VAR_12 && VAR_7 < 0; VAR_6++) {
   (void) FUNC_3(VAR_4, VAR_5, "%s/%s",
       VAR_11[VAR_6], VAR_3);
   VAR_7 = FUNC_0(VAR_4, VAR_1);
  }
 }

 return (VAR_7 ? VAR_0 : 0);
}
