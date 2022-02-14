
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(char **VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_2];

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 != ((void*)0));

 if (*VAR_4)
  FUNC_1(*VAR_4);

 if (VAR_5[0] == '/') {
  *VAR_4 = FUNC_3(VAR_5);
 } else if (!FUNC_2(VAR_6, sizeof (VAR_6))) {
  FUNC_6("Failed to get current working dir: %s",
      FUNC_4(VAR_3));
 } else if (FUNC_5(VAR_6, "/", sizeof (VAR_6)) >= sizeof (VAR_6)) {
  FUNC_6("Failed to copy path: %s", FUNC_4(VAR_0));
 } else if (FUNC_5(VAR_6, VAR_5, sizeof (VAR_6)) >= sizeof (VAR_6)) {
  FUNC_6("Failed to copy path: %s", FUNC_4(VAR_0));
 } else {
  *VAR_4 = FUNC_3(VAR_6);
 }
 if (!*VAR_4)
  FUNC_6("Failed to copy path: %s", FUNC_4(VAR_1));
}
