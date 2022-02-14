
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ofs; scalar_t__ tp; } ;
struct TYPE_9__ {int size; int info; int name; scalar_t__ sib; } ;
typedef size_t MSize ;
typedef scalar_t__ IRType ;
typedef scalar_t__ CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef TYPE_2__ CRecMemList ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static MSize FUNC_7(CRecMemList *VAR_2, CTState *VAR_3, CType *VAR_4)
{
  CTypeID VAR_5 = VAR_4->sib;
  MSize VAR_6 = 0;
  while (VAR_5) {
    CType *VAR_7 = FUNC_1(VAR_3, VAR_5);
    VAR_5 = VAR_7->sib;
    if (FUNC_4(VAR_7->info)) {
      CType *VAR_8;
      IRType VAR_9;
      if (!FUNC_6(VAR_7->name)) continue;
      VAR_8 = FUNC_5(VAR_3, VAR_7);
      VAR_9 = FUNC_0(VAR_3, VAR_8);
      if (VAR_9 == VAR_1) return 0;
      if (VAR_6 >= VAR_0) return 0;
      VAR_2[VAR_6].ofs = VAR_7->size;
      VAR_2[VAR_6].tp = VAR_9;
      VAR_6++;
      if (FUNC_2(VAR_8->info)) {
 if (VAR_6 >= VAR_0) return 0;
 VAR_2[VAR_6].ofs = VAR_7->size + (VAR_8->size >> 1);
 VAR_2[VAR_6].tp = VAR_9;
 VAR_6++;
      }
    } else if (!FUNC_3(VAR_7->info)) {

      return 0;
    }
  }
  return VAR_6;
}
