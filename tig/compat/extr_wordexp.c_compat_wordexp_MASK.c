
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** we_wordv; } ;
typedef TYPE_1__ wordexp_t ;


 char** FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t,char*,char const*,char const*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

int
FUNC_7 (const char *VAR_0, wordexp_t *VAR_1, int VAR_2)
{
 char *VAR_3 = ((void*)0);
 const char *VAR_4 = FUNC_2("HOME");

 if (VAR_4 && VAR_0[0] == '~' && (VAR_0[1] == '/' || VAR_0[1] == 0)) {
  size_t VAR_5 = FUNC_6(VAR_4) + FUNC_6(VAR_0 + 1) + 1;
  if ((VAR_3 = FUNC_3(VAR_5)) && !FUNC_4(VAR_3, VAR_5, "%s%s", VAR_4, VAR_0 + 1)) {
   FUNC_1(VAR_3);
   return -1;
  }
 } else {
  VAR_3 = FUNC_5(VAR_0);
 }

 if (!VAR_3)
  return -1;

 VAR_1->we_wordv = FUNC_0(2, sizeof(*VAR_1->we_wordv));
 if (!VAR_1->we_wordv) {
  FUNC_1(VAR_3);
  return -1;
 }
 VAR_1->we_wordv[0] = VAR_3;

 return 0;
}
