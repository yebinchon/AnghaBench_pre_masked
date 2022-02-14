
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int array; } ;
struct TYPE_9__ {int L; } ;
typedef int TValue ;
typedef scalar_t__ MSize ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ GCtab ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (int ,scalar_t__,int ) ;
 int * FUNC_4 (int ,TYPE_2__*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static GCtab *FUNC_8(LexState *VAR_0)
{
  MSize VAR_1 = FUNC_1(VAR_0);
  MSize VAR_2 = FUNC_1(VAR_0);
  GCtab *VAR_3 = FUNC_3(VAR_0->L, VAR_1, FUNC_2(VAR_2));
  if (VAR_1) {
    MSize VAR_4;
    TValue *VAR_5 = FUNC_7(VAR_3->array);
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_5++)
      FUNC_0(VAR_0, VAR_5);
  }
  if (VAR_2) {
    MSize VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
      TValue VAR_7;
      FUNC_0(VAR_0, &VAR_7);
      FUNC_5(!FUNC_6(&VAR_7));
      FUNC_0(VAR_0, FUNC_4(VAR_0->L, VAR_3, &VAR_7));
    }
  }
  return VAR_3;
}
