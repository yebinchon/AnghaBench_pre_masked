
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char char_u ;
struct TYPE_2__ {char* hisstr; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int* VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 char* FUNC_4 (char*,char) ;

void
FUNC_5()
{
    char_u *VAR_3;
    int VAR_4;

    VAR_4 = VAR_1[VAR_0];
    if (VAR_4 < 0)
 return;
    VAR_3 = VAR_2[VAR_0][VAR_4].hisstr;
    if (VAR_3 != ((void*)0))
 for ( ; *VAR_3; ++VAR_3)
     if (FUNC_1(VAR_3, "key", 3) == 0 && !FUNC_2(VAR_3[3]))
     {
  VAR_3 = FUNC_4(VAR_3 + 3, '=');
  if (VAR_3 == ((void*)0))
      break;
  ++VAR_3;
  for (VAR_4 = 0; VAR_3[VAR_4] && !FUNC_3(VAR_3[VAR_4]); ++VAR_4)
      if (VAR_3[VAR_4] == '\\' && VAR_3[VAR_4 + 1])
   ++VAR_4;
  FUNC_0(VAR_3, VAR_3 + VAR_4);
  --VAR_3;
     }
}
