
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sizelocvars; TYPE_1__* locvars; } ;
struct TYPE_4__ {int startpc; int endpc; int varname; } ;
typedef TYPE_2__ Proto ;


 char const* FUNC_0 (int ) ;

const char *FUNC_1 (const Proto *VAR_0, int VAR_1, int VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3<VAR_0->sizelocvars && VAR_0->locvars[VAR_3].startpc <= VAR_2; VAR_3++) {
    if (VAR_2 < VAR_0->locvars[VAR_3].endpc) {
      VAR_1--;
      if (VAR_1 == 0)
        return FUNC_0(VAR_0->locvars[VAR_3].varname);
    }
  }
  return ((void*)0);
}
