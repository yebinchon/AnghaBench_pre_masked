
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rowMarks; scalar_t__ resultRelation; } ;
struct TYPE_5__ {int inh; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef int Index ;
typedef int Hypertable ;


 scalar_t__ VAR_0 ;

bool
FUNC_0(Hypertable *VAR_1, Query *VAR_2, Index VAR_3,
             RangeTblEntry *VAR_4)
{
 if (VAR_1 == ((void*)0) ||

  VAR_4->inh == 0 ||

  VAR_2->rowMarks != VAR_0 ||

  0 != VAR_2->resultRelation)
  return 0;

 return 1;
}
