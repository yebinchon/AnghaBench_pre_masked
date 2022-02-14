
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int freetrace; int sizetrace; int * trace; int L; scalar_t__* param; } ;
typedef TYPE_1__ jit_State ;
typedef int TraceNo ;
typedef int MSize ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int *,int,int,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static TraceNo FUNC_3(jit_State *VAR_2)
{
  MSize VAR_3, VAR_4;
  if (VAR_2->freetrace == 0)
    VAR_2->freetrace = 1;
  for (; VAR_2->freetrace < VAR_2->sizetrace; VAR_2->freetrace++)
    if (FUNC_2(VAR_2, VAR_2->freetrace) == ((void*)0))
      return VAR_2->freetrace++;

  VAR_4 = (MSize)VAR_2->param[VAR_1] + 1;
  if (VAR_4 < 2) VAR_4 = 2; else if (VAR_4 > 65535) VAR_4 = 65535;
  VAR_3 = VAR_2->sizetrace;
  if (VAR_3 >= VAR_4)
    return 0;
  FUNC_0(VAR_2->L, VAR_2->trace, VAR_2->sizetrace, VAR_4, VAR_0);
  for (; VAR_3 < VAR_2->sizetrace; VAR_3++)
    FUNC_1(VAR_2->trace[VAR_3]);
  return VAR_2->freetrace;
}
