
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ compressed; } ;
typedef TYPE_2__ TimescaleDBPrivate ;
struct TYPE_11__ {scalar_t__ compressed_chunk_id; } ;
struct TYPE_15__ {TYPE_1__ fd; } ;
struct TYPE_14__ {int relid; } ;
struct TYPE_13__ {scalar_t__ reloptkind; int * fdw_private; } ;
typedef TYPE_3__ RelOptInfo ;
typedef TYPE_4__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef int Index ;
typedef int Hypertable ;
typedef TYPE_5__ Chunk ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,TYPE_3__*,int *,TYPE_5__*) ;
 scalar_t__ VAR_1 ;

void
FUNC_3(PlannerInfo *VAR_2, RelOptInfo *VAR_3, Index VAR_4, RangeTblEntry *VAR_5,
         Hypertable *VAR_6)
{
 if (VAR_1 && VAR_6 != ((void*)0) &&
  VAR_3->reloptkind == VAR_0 && FUNC_0(VAR_6) &&
  VAR_3->fdw_private != ((void*)0) && ((TimescaleDBPrivate *) VAR_3->fdw_private)->compressed)
 {
  Chunk *VAR_7 = FUNC_1(VAR_5->relid, 0, 1);

  if (VAR_7->fd.compressed_chunk_id > 0)
   FUNC_2(VAR_2, VAR_3, VAR_6, VAR_7);
 }
}
