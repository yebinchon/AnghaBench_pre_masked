
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int compressed; } ;
typedef TYPE_3__ TimescaleDBPrivate ;
struct TYPE_22__ {scalar_t__ compressed_chunk_id; } ;
struct TYPE_27__ {TYPE_2__ fd; } ;
struct TYPE_26__ {TYPE_1__* parse; } ;
struct TYPE_25__ {int relid; int inh; } ;
struct TYPE_24__ {int indexlist; int * fdw_private; int relid; } ;
struct TYPE_21__ {int rtable; } ;
typedef TYPE_4__ RelOptInfo ;
typedef TYPE_5__ RangeTblEntry ;
typedef TYPE_6__ PlannerInfo ;
typedef int Oid ;
typedef int Hypertable ;
typedef TYPE_7__ Chunk ;
typedef int Cache ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_6__*,int ,int,TYPE_4__*) ;
 TYPE_5__* FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int *) ;
 TYPE_7__* FUNC_10 (int ,int ,int) ;
 int FUNC_11 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_12 (int *,int ) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *,TYPE_6__*,int ,int,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_15(PlannerInfo *VAR_3, Oid VAR_4, bool VAR_5,
           RelOptInfo *VAR_6)
{
 RangeTblEntry *VAR_7;

 if (&FUNC_6 != ((void*)0))
  FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6);

 if (!FUNC_11() || !VAR_1)
  return;

 VAR_7 = FUNC_7(VAR_6->relid, VAR_3->parse->rtable);
 if (!VAR_7->inh && FUNC_4(VAR_7))
 {
  Cache *VAR_8 = FUNC_13();
  Hypertable *VAR_9 = FUNC_12(VAR_8, VAR_7->relid);

  FUNC_0(VAR_9 != ((void*)0));

  FUNC_0(VAR_6->fdw_private == ((void*)0));
  VAR_6->fdw_private = FUNC_5(sizeof(TimescaleDBPrivate));

  FUNC_14(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);




  FUNC_9(VAR_8);
 }

 if (VAR_2 && FUNC_3(VAR_6, VAR_7))
 {
  Oid VAR_10 = FUNC_2(VAR_3, VAR_6->relid);
  Cache *VAR_11 = FUNC_13();
  Hypertable *VAR_12 = FUNC_12(VAR_11, VAR_10);

  if (VAR_12 != ((void*)0) && FUNC_1(VAR_12))
  {
   Chunk *VAR_13 = FUNC_10(VAR_7->relid, 0, 1);

   if (VAR_13->fd.compressed_chunk_id > 0)
   {
    FUNC_0(VAR_6->fdw_private == ((void*)0));
    VAR_6->fdw_private = FUNC_5(sizeof(TimescaleDBPrivate));
    ((TimescaleDBPrivate *) VAR_6->fdw_private)->compressed = 1;







    VAR_6->indexlist = VAR_0;
   }
  }
  FUNC_9(VAR_11);
 }
}
