
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Table ;
struct TYPE_6__ {scalar_t__ tt; } ;
struct TYPE_7__ {TYPE_1__ tsv; } ;
typedef int TValue ;
typedef TYPE_2__ TString ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int const* FUNC_3 (int *) ;
 int * FUNC_4 (int *,TYPE_2__*) ;
 int const* VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

const TValue *FUNC_8 (Table *VAR_2, TString *VAR_3) {
  Node *VAR_4 = FUNC_4(VAR_2, VAR_3);
  FUNC_5(VAR_3->tsv.tt == VAR_0);
  do {
    if (FUNC_7(FUNC_1(VAR_4)) && FUNC_0(FUNC_6(FUNC_1(VAR_4)), VAR_3))
      return FUNC_3(VAR_4);
    else VAR_4 = FUNC_2(VAR_4);
  } while (VAR_4);
  return VAR_1;
}
