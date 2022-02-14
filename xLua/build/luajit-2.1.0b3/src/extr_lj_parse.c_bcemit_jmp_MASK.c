
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_7__ {size_t jpc; size_t pc; size_t lasttarget; int freereg; TYPE_1__* bcbase; } ;
struct TYPE_6__ {int ins; } ;
typedef TYPE_2__ FuncState ;
typedef size_t BCPos ;
typedef int BCIns ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_2__*,int ,int ,size_t) ;
 int FUNC_2 (TYPE_2__*,size_t*,size_t) ;
 int FUNC_3 (int *,size_t) ;

__attribute__((used)) static BCPos FUNC_4(FuncState *VAR_3)
{
  BCPos VAR_4 = VAR_3->jpc;
  BCPos VAR_5 = VAR_3->pc - 1;
  BCIns *VAR_6 = &VAR_3->bcbase[VAR_5].ins;
  VAR_3->jpc = VAR_2;
  if ((int32_t)VAR_5 >= (int32_t)VAR_3->lasttarget && FUNC_0(*VAR_6) == VAR_1) {
    FUNC_3(VAR_6, VAR_2);
    VAR_3->lasttarget = VAR_5+1;
  } else {
    VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_3->freereg, VAR_2);
  }
  FUNC_2(VAR_3, &VAR_5, VAR_4);
  return VAR_5;
}
