
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int inh; scalar_t__ relkind; } ;
struct TYPE_5__ {scalar_t__ reloptkind; scalar_t__ rtekind; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ RangeTblEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(RelOptInfo *VAR_3, RangeTblEntry *VAR_4)
{
 return VAR_3->reloptkind == VAR_1 && VAR_4->inh == 0 &&
     VAR_3->rtekind == VAR_2 && VAR_4->relkind == VAR_0;
}
