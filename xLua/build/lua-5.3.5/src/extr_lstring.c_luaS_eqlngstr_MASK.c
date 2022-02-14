
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t lnglen; } ;
struct TYPE_7__ {scalar_t__ tt; TYPE_1__ u; } ;
typedef TYPE_2__ TString ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,size_t) ;

int FUNC_3 (TString *VAR_1, TString *VAR_2) {
  size_t VAR_3 = VAR_1->u.lnglen;
  FUNC_1(VAR_1->tt == VAR_0 && VAR_2->tt == VAR_0);
  return (VAR_1 == VAR_2) ||
    ((VAR_3 == VAR_2->u.lnglen) &&
     (FUNC_2(FUNC_0(VAR_1), FUNC_0(VAR_2), VAR_3) == 0));
}
