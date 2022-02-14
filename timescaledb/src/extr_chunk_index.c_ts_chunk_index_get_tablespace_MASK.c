
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {int reltablespace; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;

Oid
FUNC_2(int32 VAR_0, Relation VAR_1, Relation VAR_2)
{




 if (FUNC_0(VAR_1->rd_rel->reltablespace))
  return VAR_1->rd_rel->reltablespace;
 else
  return FUNC_1(VAR_0, VAR_2);
}
