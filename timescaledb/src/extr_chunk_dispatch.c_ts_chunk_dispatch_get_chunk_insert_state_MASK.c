
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int cube; } ;
struct TYPE_16__ {scalar_t__ prev_cis_oid; TYPE_2__* prev_cis; int cache; int hypertable; } ;
struct TYPE_15__ {TYPE_1__* rel; } ;
struct TYPE_14__ {scalar_t__ rd_id; } ;
typedef int Point ;
typedef TYPE_2__ ChunkInsertState ;
typedef TYPE_3__ ChunkDispatch ;
typedef TYPE_4__ Chunk ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_4__* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_6 (int ,int *) ;

extern ChunkInsertState *
FUNC_7(ChunkDispatch *VAR_2, Point *VAR_3,
           bool *VAR_4)
{
 ChunkInsertState *VAR_5;

 FUNC_0(VAR_4 != ((void*)0));
 VAR_5 = FUNC_6(VAR_2->cache, VAR_3);
 *VAR_4 = 1;

 if (((void*)0) == VAR_5)
 {
  Chunk *VAR_6;

  VAR_6 = FUNC_4(VAR_2->hypertable, VAR_3);

  if (((void*)0) == VAR_6)
   FUNC_1(VAR_0, "no chunk found or created");

  VAR_5 = FUNC_2(VAR_6, VAR_2);
  FUNC_5(VAR_2->cache, VAR_6->cube, VAR_5, VAR_1);
 }
 else if (VAR_5->rel->rd_id == VAR_2->prev_cis_oid && VAR_5 == VAR_2->prev_cis)
 {

  *VAR_4 = 0;
 }

 if (*VAR_4)
  FUNC_3(VAR_5);

 FUNC_0(VAR_5 != ((void*)0));
 VAR_2->prev_cis = VAR_5;
 VAR_2->prev_cis_oid = VAR_5->rel->rd_id;
 return VAR_5;
}
