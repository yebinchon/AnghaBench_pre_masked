
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_8__ {int info; int size; int name; scalar_t__ sib; } ;
typedef int TValue ;
typedef int GCtab ;
typedef scalar_t__ CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef int CTInfo ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 TYPE_1__* FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int *,int *,int ) ;
 scalar_t__ FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(CTState *VAR_2, CType *VAR_3, uint8_t *VAR_4,
    GCtab *VAR_5, int32_t *VAR_6, CTInfo VAR_7)
{
  CTypeID VAR_8 = VAR_3->sib;
  while (VAR_8) {
    CType *VAR_9 = FUNC_0(VAR_2, VAR_8);
    VAR_8 = VAR_9->sib;
    if (FUNC_2(VAR_9->info) || FUNC_1(VAR_9->info)) {
      TValue *VAR_10;
      int32_t VAR_11 = *VAR_6, VAR_12 = VAR_11;
      if (!FUNC_6(VAR_9->name)) continue;
      if (VAR_11 >= 0) {
      retry:
 VAR_10 = (TValue *)FUNC_9(VAR_5, VAR_11);
 if (!VAR_10 || FUNC_11(VAR_10)) {
   if (VAR_11 == 0) { VAR_11 = 1; goto retry; }
   if (VAR_12 == 0) { *VAR_6 = VAR_11 = -1; goto tryname; }
   break;
 }
 *VAR_6 = VAR_11 + 1;
      } else {
      tryname:
 VAR_10 = (TValue *)FUNC_10(VAR_5, FUNC_5(FUNC_6(VAR_9->name)));
 if (!VAR_10 || FUNC_11(VAR_10)) continue;
      }
      if (FUNC_2(VAR_9->info))
 FUNC_8(VAR_2, FUNC_4(VAR_2, VAR_9), VAR_4+VAR_9->size, VAR_10, VAR_7);
      else
 FUNC_7(VAR_2, VAR_9, VAR_4+VAR_9->size, VAR_10);
      if ((VAR_3->info & VAR_1)) break;
    } else if (FUNC_3(VAR_9->info, VAR_0)) {
      FUNC_12(VAR_2, FUNC_4(VAR_2, VAR_9),
     VAR_4+VAR_9->size, VAR_5, VAR_6, VAR_7);
    }
  }
}
