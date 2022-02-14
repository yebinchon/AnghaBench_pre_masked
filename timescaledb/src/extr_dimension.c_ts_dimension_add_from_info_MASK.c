
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; int interval; int partitioning_func; int num_slices; int coltype; int * colname; TYPE_2__* ht; int dimension_id; int table_relid; scalar_t__ set_not_null; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_3__ DimensionInfo ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int ,int ,int ,int ) ;

void
FUNC_4(DimensionInfo *VAR_1)
{
 if (VAR_1->set_not_null && VAR_1->type == VAR_0)
  FUNC_2(VAR_1->table_relid, FUNC_1(*VAR_1->colname));

 FUNC_0(VAR_1->ht != ((void*)0));

 VAR_1->dimension_id = FUNC_3(VAR_1->ht->fd.id,
            VAR_1->colname,
            VAR_1->coltype,
            VAR_1->num_slices,
            VAR_1->partitioning_func,
            VAR_1->interval);
}
