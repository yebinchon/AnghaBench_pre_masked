
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* space; } ;
struct TYPE_14__ {int partnatts; int strategy; } ;
struct TYPE_13__ {int parse; } ;
struct TYPE_12__ {int nparts; int boundinfo; int ** nullable_partexprs; int relid; int partexprs; TYPE_4__* part_scheme; } ;
struct TYPE_11__ {int num_dimensions; } ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ PlannerInfo ;
typedef int PartitionSchemeData ;
typedef TYPE_4__* PartitionScheme ;
typedef int PartitionBoundInfoData ;
typedef int List ;
typedef TYPE_5__ Hypertable ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(Hypertable *VAR_1, PlannerInfo *VAR_2, RelOptInfo *VAR_3,
        int VAR_4)
{
 PartitionScheme VAR_5 = FUNC_2(sizeof(PartitionSchemeData));


 VAR_5->partnatts = VAR_1->space->num_dimensions;
 VAR_5->strategy = VAR_0;
 VAR_3->nparts = VAR_4;
 VAR_3->part_scheme = VAR_5;
 VAR_3->partexprs = FUNC_0(VAR_1, VAR_2->parse, VAR_3->relid);
 VAR_3->nullable_partexprs = (List **) FUNC_2(sizeof(List *) * VAR_5->partnatts);
 VAR_3->boundinfo = FUNC_1(sizeof(PartitionBoundInfoData));
}
