
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_6__ {TYPE_1__* ir; } ;
struct TYPE_5__ {int t; int prev; } ;
typedef scalar_t__ TRef ;
typedef int SnapEntry ;
typedef int MSize ;
typedef size_t IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ GCtrace ;
typedef int BloomFilter ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,size_t) ;
 scalar_t__ FUNC_2 (int ,size_t,int ) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int *,int ,size_t) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static TRef FUNC_8(jit_State *VAR_2, GCtrace *VAR_3, SnapEntry *VAR_4, MSize VAR_5,
        BloomFilter VAR_6, IRRef VAR_7)
{
  IRIns *VAR_8 = &VAR_3->ir[VAR_7];
  TRef VAR_9;
  if (FUNC_3(VAR_7))
    VAR_9 = FUNC_7(VAR_2, VAR_8);
  else if (!FUNC_5(VAR_8->prev))
    VAR_9 = 0;
  else if (!FUNC_1(VAR_6, VAR_7) || (VAR_9 = FUNC_6(VAR_2, VAR_4, VAR_5, VAR_7)) == 0)
    VAR_9 = FUNC_2(FUNC_0(VAR_0, FUNC_4(VAR_8->t)), VAR_7 - VAR_1, 0);
  return VAR_9;
}
