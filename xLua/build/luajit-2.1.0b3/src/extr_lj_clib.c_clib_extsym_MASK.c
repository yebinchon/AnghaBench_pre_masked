
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int info; scalar_t__ sib; } ;
typedef int GCstr ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char const* FUNC_4 (int *) ;

__attribute__((used)) static const char *FUNC_5(CTState *VAR_1, CType *VAR_2, GCstr *VAR_3)
{
  if (VAR_2->sib) {
    CType *VAR_4 = FUNC_0(VAR_1, VAR_2->sib);
    if (FUNC_1(VAR_4->info, VAR_0))
      return FUNC_4(FUNC_2(FUNC_3(VAR_4->name)));
  }
  return FUNC_4(VAR_3);
}
