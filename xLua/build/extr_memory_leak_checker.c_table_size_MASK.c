
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sizearray; } ;
typedef TYPE_1__ Table ;
typedef int Node ;


 int * FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6 (Table *VAR_0, int VAR_1)
{
 if (VAR_1)
 {
  return (int)FUNC_4(VAR_0) + (int)VAR_0->sizearray;
 }
 else
 {
  Node *VAR_2, *VAR_3 = FUNC_1(VAR_0);
  int VAR_4 = (int)FUNC_3(VAR_0);
  for (VAR_2 = FUNC_0(VAR_0, 0); VAR_2 < VAR_3; VAR_2++)
  {
   if (!FUNC_5(FUNC_2(VAR_2)))
   {
    VAR_4++;
   }
  }
  return VAR_4;
 }
}
