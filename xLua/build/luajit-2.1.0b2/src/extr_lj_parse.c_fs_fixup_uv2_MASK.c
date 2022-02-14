
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_9__ {int info; size_t slot; } ;
typedef TYPE_2__ VarInfo ;
typedef size_t VarIndex ;
struct TYPE_11__ {TYPE_1__* ls; } ;
struct TYPE_10__ {size_t sizeuv; } ;
struct TYPE_8__ {TYPE_2__* vstack; } ;
typedef size_t MSize ;
typedef TYPE_3__ GCproto ;
typedef TYPE_4__ FuncState ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t* FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(FuncState *VAR_4, GCproto *VAR_5)
{
  VarInfo *VAR_6 = VAR_4->ls->vstack;
  uint16_t *VAR_7 = FUNC_0(VAR_5);
  MSize VAR_8, VAR_9 = VAR_5->sizeuv;
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
    VarIndex VAR_10 = VAR_7[VAR_8];
    if (VAR_10 >= VAR_0)
      VAR_7[VAR_8] = VAR_10 - VAR_0;
    else if ((VAR_6[VAR_10].info & VAR_3))
      VAR_7[VAR_8] = VAR_6[VAR_10].slot | VAR_2;
    else
      VAR_7[VAR_8] = VAR_6[VAR_10].slot | VAR_2 | VAR_1;
  }
}
