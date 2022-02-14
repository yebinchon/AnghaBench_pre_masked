
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; int info; int name; scalar_t__ sib; } ;
typedef int GCstr ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef scalar_t__ CTSize ;
typedef scalar_t__ CTInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;

CType *FUNC_7(CTState *VAR_2, CType *VAR_3, GCstr *VAR_4, CTSize *VAR_5,
     CTInfo *VAR_6)
{
  while (VAR_3->sib) {
    VAR_3 = FUNC_2(VAR_2, VAR_3->sib);
    if (FUNC_5(VAR_3->name) == FUNC_6(VAR_4)) {
      *VAR_5 = VAR_3->size;
      return VAR_3;
    }
    if (FUNC_4(VAR_3->info, VAR_1)) {
      CType *VAR_7, *VAR_8 = FUNC_1(VAR_2, VAR_3);
      CTInfo VAR_9 = 0;
      while (FUNC_3(VAR_8->info)) {
 if (FUNC_0(VAR_8->info) == VAR_0) VAR_9 |= VAR_8->size;
 VAR_8 = FUNC_1(VAR_2, VAR_8);
      }
      VAR_7 = FUNC_7(VAR_2, VAR_8, VAR_4, VAR_5, VAR_6);
      if (VAR_7) {
 if (VAR_6) *VAR_6 |= VAR_9;
 *VAR_5 += VAR_3->size;
 return VAR_7;
      }
    }
  }
  return ((void*)0);
}
