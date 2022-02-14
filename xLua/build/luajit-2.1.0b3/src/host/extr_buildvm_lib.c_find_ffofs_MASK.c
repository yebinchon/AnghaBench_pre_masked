
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int nglob; char** globnames; int code; scalar_t__* glob; } ;
typedef TYPE_1__ BuildCtx ;


 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(BuildCtx *VAR_2, const char *VAR_3)
{
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2->nglob; VAR_4++) {
    const char *VAR_5 = VAR_2->globnames[VAR_4];
    if (VAR_5[0] == 'f' && VAR_5[1] == 'f' && VAR_5[2] == '_' && !FUNC_2(VAR_5+3, VAR_3)) {
      return (int)((uint8_t *)VAR_2->glob[VAR_4] - VAR_2->code);
    }
  }
  FUNC_1(VAR_1, "Error: undefined fast function %s%s\n",
   VAR_0, VAR_3);
  FUNC_0(1);
}
