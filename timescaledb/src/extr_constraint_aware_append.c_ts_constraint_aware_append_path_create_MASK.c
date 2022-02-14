
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int parallel_aware; int parallel_workers; int parallel_safe; int pathtarget; int param_info; int pathkeys; int parent; int total_cost; int startup_cost; int rows; int pathtype; } ;
struct TYPE_8__ {TYPE_2__ path; int * methods; int custom_paths; scalar_t__ flags; } ;
struct TYPE_10__ {TYPE_1__ cpath; } ;
typedef int PlannerInfo ;
typedef TYPE_2__ Path ;
typedef int Hypertable ;
typedef TYPE_3__ ConstraintAwareAppendPath ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*) ;

Path *
FUNC_4(PlannerInfo *VAR_4, Hypertable *VAR_5, Path *VAR_6)
{
 ConstraintAwareAppendPath *VAR_7;

 VAR_7 = (ConstraintAwareAppendPath *) FUNC_2(sizeof(ConstraintAwareAppendPath), VAR_1);
 VAR_7->cpath.path.pathtype = VAR_2;
 VAR_7->cpath.path.rows = VAR_6->rows;
 VAR_7->cpath.path.startup_cost = VAR_6->startup_cost;
 VAR_7->cpath.path.total_cost = VAR_6->total_cost;
 VAR_7->cpath.path.parent = VAR_6->parent;
 VAR_7->cpath.path.pathkeys = VAR_6->pathkeys;
 VAR_7->cpath.path.param_info = VAR_6->param_info;
 VAR_7->cpath.path.pathtarget = VAR_6->pathtarget;

 VAR_7->cpath.path.parallel_aware = 0;
 VAR_7->cpath.path.parallel_safe = VAR_6->parallel_safe;
 VAR_7->cpath.path.parallel_workers = VAR_6->parallel_workers;
 VAR_7->cpath.flags = 0;
 VAR_7->cpath.custom_paths = FUNC_1(VAR_6);
 VAR_7->cpath.methods = &VAR_3;




 switch (FUNC_3(VAR_6))
 {
  case 129:
  case 128:
   break;
  default:
   FUNC_0(VAR_0, "invalid child of constraint-aware append: %u", FUNC_3(VAR_6));
   break;
 }

 return &VAR_7->cpath.path;
}
