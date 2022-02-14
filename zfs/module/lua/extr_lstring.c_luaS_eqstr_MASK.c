
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tt; } ;
struct TYPE_10__ {TYPE_1__ tsv; } ;
typedef TYPE_2__ TString ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;

int FUNC_2 (TString *VAR_1, TString *VAR_2) {
  return (VAR_1->tsv.tt == VAR_2->tsv.tt) &&
         (VAR_1->tsv.tt == VAR_0 ? FUNC_0(VAR_1, VAR_2) : FUNC_1(VAR_1, VAR_2));
}
