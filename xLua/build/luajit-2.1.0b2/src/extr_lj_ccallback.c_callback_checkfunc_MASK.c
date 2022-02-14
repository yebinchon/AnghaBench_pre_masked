
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int info; scalar_t__ size; scalar_t__ sib; } ;
typedef scalar_t__ CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static CType *FUNC_10(CTState *VAR_4, CType *VAR_5)
{
  int VAR_6 = 0;
  if (!FUNC_6(VAR_5->info) || (VAR_2 && VAR_5->size != VAR_1))
    return ((void*)0);
  VAR_5 = FUNC_8(VAR_4, VAR_5);
  if (FUNC_4(VAR_5->info)) {
    CType *VAR_7 = FUNC_8(VAR_4, VAR_5);
    CTypeID VAR_8 = VAR_5->sib;
    if (!(FUNC_7(VAR_7->info) || FUNC_2(VAR_7->info) ||
   FUNC_6(VAR_7->info) || (FUNC_5(VAR_7->info) && VAR_7->size <= 8)))
      return ((void*)0);
    if ((VAR_5->info & VAR_0))
      return ((void*)0);
    while (VAR_8) {
      CType *VAR_9 = FUNC_0(VAR_4, VAR_8);
      if (!FUNC_1(VAR_9->info)) {
 CType *VAR_10;
 FUNC_9(FUNC_3(VAR_9->info));
 VAR_10 = FUNC_8(VAR_4, VAR_9);
 if (!(FUNC_2(VAR_10->info) || FUNC_6(VAR_10->info) ||
       (FUNC_5(VAR_10->info) && VAR_10->size <= 8)) ||
     ++VAR_6 >= VAR_3-3)
   return ((void*)0);
      }
      VAR_8 = VAR_9->sib;
    }
    return VAR_5;
  }
  return ((void*)0);
}
