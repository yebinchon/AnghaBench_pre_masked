
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ls; TYPE_1__* f; int L; } ;
struct TYPE_4__ {int linedefined; } ;
typedef TYPE_2__ FuncState ;


 char* FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static void FUNC_2 (FuncState *VAR_0, int VAR_1, const char *VAR_2) {
  const char *VAR_3 = (VAR_0->f->linedefined == 0) ?
    FUNC_0(VAR_0->L, "main function has more than %d %s", VAR_1, VAR_2) :
    FUNC_0(VAR_0->L, "function at line %d has more than %d %s",
                            VAR_0->f->linedefined, VAR_1, VAR_2);
  FUNC_1(VAR_0->ls, VAR_3, 0);
}
