
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * we_wordv; } ;
typedef TYPE_1__ wordexp_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 size_t FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char*,char*,char const*) ;
 int FUNC_3 (char*,size_t,char const*,int ) ;
 int FUNC_4 (char*,size_t,int *,char*,char const*,...) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

bool
FUNC_8(char *VAR_2, size_t VAR_3, const char *VAR_4)
{
 if (!VAR_4)
  return 0;

 if (VAR_4[0] == '~') {

  const char *VAR_5 = FUNC_0("IFS") ? FUNC_0("IFS") : " \t\n";
  wordexp_t VAR_6;
  size_t VAR_7;
  char VAR_8[VAR_0];
  char VAR_9[VAR_0];

  FUNC_2(VAR_8, "%s%s", "/$|&;<>(){}`", VAR_5);
  VAR_7 = FUNC_1(VAR_4, VAR_8);
  if (VAR_4[VAR_7] == '/' || VAR_4[VAR_7] == 0) {
   FUNC_4(VAR_9, VAR_7 + 1, ((void*)0), "%s", VAR_4);
   if (FUNC_6(VAR_9, &VAR_6, VAR_1))
    return 0;
   FUNC_4(VAR_2, VAR_3, ((void*)0), "%s%s", VAR_6.we_wordv[0], VAR_4 + VAR_7);
   FUNC_7(&VAR_6);
   return 1;
  }
 }


 FUNC_3(VAR_2, VAR_3, VAR_4, FUNC_5(VAR_4));
 return 1;
}
