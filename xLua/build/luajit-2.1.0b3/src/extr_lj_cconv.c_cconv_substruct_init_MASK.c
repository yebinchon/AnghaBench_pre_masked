
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int info; int size; int name; scalar_t__ sib; } ;
typedef int TValue ;
typedef int MSize ;
typedef scalar_t__ CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 TYPE_1__* FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_7 (int *,TYPE_1__*,int *,int *,int ) ;

__attribute__((used)) static void FUNC_8(CTState *VAR_2, CType *VAR_3, uint8_t *VAR_4,
     TValue *VAR_5, MSize VAR_6, MSize *VAR_7)
{
  CTypeID VAR_8 = VAR_3->sib;
  while (VAR_8) {
    CType *VAR_9 = FUNC_0(VAR_2, VAR_8);
    VAR_8 = VAR_9->sib;
    if (FUNC_2(VAR_9->info) || FUNC_1(VAR_9->info)) {
      MSize VAR_10 = *VAR_7;
      if (!FUNC_5(VAR_9->name)) continue;
      if (VAR_10 >= VAR_6) break;
      *VAR_7 = VAR_10 + 1;
      if (FUNC_2(VAR_9->info))
 FUNC_7(VAR_2, FUNC_4(VAR_2, VAR_9), VAR_4+VAR_9->size, VAR_5 + VAR_10, 0);
      else
 FUNC_6(VAR_2, VAR_9, VAR_4+VAR_9->size, VAR_5 + VAR_10);
      if ((VAR_3->info & VAR_1)) break;
    } else if (FUNC_3(VAR_9->info, VAR_0)) {
      FUNC_8(VAR_2, FUNC_4(VAR_2, VAR_9),
      VAR_4+VAR_9->size, VAR_5, VAR_6, VAR_7);
      if ((VAR_3->info & VAR_1)) break;
    }
  }
}
