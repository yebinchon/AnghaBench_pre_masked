
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int) ;
 char** FUNC_8 (size_t*) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = VAR_0;
 char *VAR_9, *VAR_10, *VAR_11 = ((void*)0);
 char VAR_12[VAR_1];
 const char * const *VAR_13;
 size_t VAR_14;

 VAR_13 = FUNC_8(&VAR_14);

 VAR_6 = FUNC_5(VAR_3);
 VAR_10 = FUNC_1("ZPOOL_IMPORT_PATH");

 if (VAR_10) {
  VAR_11 = FUNC_4(VAR_10);
  VAR_9 = FUNC_6(VAR_11, ":");
 } else {
  VAR_9 = (char *)VAR_13[VAR_7];
 }

 while (VAR_9) {

  if (VAR_10) {
   while (VAR_9[FUNC_5(VAR_9)-1] == '/')
    VAR_9[FUNC_5(VAR_9)-1] = '\0';
  }

  VAR_5 = FUNC_2(VAR_12, VAR_1, "%s/%s", VAR_9, VAR_2);
  if (VAR_4)
   VAR_5 = FUNC_7(VAR_12, VAR_1);

  if ((VAR_5 == VAR_6) && FUNC_3(VAR_12, VAR_3) == 0) {
   VAR_8 = 0;
   break;
  }

  if (VAR_10) {
   VAR_9 = FUNC_6(((void*)0), ":");
  } else if (++VAR_7 < VAR_14) {
   VAR_9 = (char *)VAR_13[VAR_7];
  } else {
   VAR_9 = ((void*)0);
  }
 }

 if (VAR_10)
  FUNC_0(VAR_11);

 return (VAR_8);
}
