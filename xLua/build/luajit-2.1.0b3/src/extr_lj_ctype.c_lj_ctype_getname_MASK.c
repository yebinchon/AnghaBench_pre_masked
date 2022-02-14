
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* tab; scalar_t__* hash; } ;
struct TYPE_7__ {scalar_t__ next; int info; int name; } ;
typedef int GCstr ;
typedef scalar_t__ CTypeID ;
typedef TYPE_1__ CType ;
typedef TYPE_2__ CTState ;


 size_t FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;

CTypeID FUNC_5(CTState *VAR_0, CType **VAR_1, GCstr *VAR_2, uint32_t VAR_3)
{
  CTypeID VAR_4 = VAR_0->hash[FUNC_0(VAR_2)];
  while (VAR_4) {
    CType *VAR_5 = FUNC_1(VAR_0, VAR_4);
    if (FUNC_3(VAR_5->name) == FUNC_4(VAR_2) &&
 ((VAR_3 >> FUNC_2(VAR_5->info)) & 1)) {
      *VAR_1 = VAR_5;
      return VAR_4;
    }
    VAR_4 = VAR_5->next;
  }
  *VAR_1 = &VAR_0->tab[0];
  return 0;
}
