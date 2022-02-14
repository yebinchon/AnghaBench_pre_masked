
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int global_State ;
typedef int Upvaldesc ;
struct TYPE_7__ {int sizek; int sizeupvalues; int sizep; int sizelocvars; int sizecode; int sizelineinfo; TYPE_2__* locvars; int * p; TYPE_1__* upvalues; int * k; int source; int * cache; } ;
struct TYPE_6__ {int varname; } ;
struct TYPE_5__ {int name; } ;
typedef int TValue ;
typedef TYPE_3__ Proto ;
typedef int LocVar ;
typedef int Instruction ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3 (global_State *VAR_0, Proto *VAR_1) {
  int VAR_2;
  if (VAR_1->cache && FUNC_0(VAR_1->cache))
    VAR_1->cache = ((void*)0);
  FUNC_1(VAR_0, VAR_1->source);
  for (VAR_2 = 0; VAR_2 < VAR_1->sizek; VAR_2++)
    FUNC_2(VAR_0, &VAR_1->k[VAR_2]);
  for (VAR_2 = 0; VAR_2 < VAR_1->sizeupvalues; VAR_2++)
    FUNC_1(VAR_0, VAR_1->upvalues[VAR_2].name);
  for (VAR_2 = 0; VAR_2 < VAR_1->sizep; VAR_2++)
    FUNC_1(VAR_0, VAR_1->p[VAR_2]);
  for (VAR_2 = 0; VAR_2 < VAR_1->sizelocvars; VAR_2++)
    FUNC_1(VAR_0, VAR_1->locvars[VAR_2].varname);
  return sizeof(Proto) + sizeof(Instruction) * VAR_1->sizecode +
                         sizeof(Proto *) * VAR_1->sizep +
                         sizeof(TValue) * VAR_1->sizek +
                         sizeof(int) * VAR_1->sizelineinfo +
                         sizeof(LocVar) * VAR_1->sizelocvars +
                         sizeof(Upvaldesc) * VAR_1->sizeupvalues;
}
