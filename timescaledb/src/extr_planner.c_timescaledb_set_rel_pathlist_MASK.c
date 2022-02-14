
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int (* set_rel_pathlist_dml ) (int *,int *,int ,TYPE_1__*,int *) ;} ;
struct TYPE_11__ {int relid; } ;
typedef int RelOptInfo ;
typedef TYPE_1__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef int Index ;
typedef int Hypertable ;
typedef int Cache ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_6 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_7 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_8 (int *,int *,int ,TYPE_1__*,int *) ;
 int FUNC_9 (int *,int *,int ,TYPE_1__*,int *) ;
 int FUNC_10 (int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_11 () ;
 int VAR_1 ;
 int * FUNC_12 (int *,int ) ;
 int * FUNC_13 () ;

__attribute__((used)) static void
FUNC_14(PlannerInfo *VAR_2, RelOptInfo *VAR_3, Index VAR_4, RangeTblEntry *VAR_5)
{
 Hypertable *VAR_6;
 Cache *VAR_7;
 Oid VAR_8 = VAR_5->relid;
 bool VAR_9;

 if (&FUNC_6 != ((void*)0))
  FUNC_6)(VAR_2, VAR_3, VAR_4, VAR_5);

 if (!FUNC_11() || FUNC_0(VAR_3) || !FUNC_1(VAR_5->relid))
  return;


 VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);


 if (!VAR_1 &&
  !(FUNC_4(VAR_3, VAR_5) || FUNC_3(VAR_3, VAR_5) || VAR_9))
  return;

 VAR_7 = FUNC_13();





 if (FUNC_3(VAR_3, VAR_5) || VAR_9)
  VAR_8 = FUNC_2(VAR_2, VAR_4);

 VAR_6 = FUNC_12(VAR_7, VAR_8);

 if (!VAR_9)
 {
  FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }
 else
 {
  if (VAR_0->set_rel_pathlist_dml != ((void*)0))
   VAR_0->set_rel_pathlist_dml(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }

 FUNC_10(VAR_7);
}
