
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int tuple; int scanrel; int desc; int mctx; } ;
typedef TYPE_2__ TupleInfo ;
struct TYPE_11__ {int dimension_slice_id; } ;
struct TYPE_15__ {TYPE_1__ fd; } ;
struct TYPE_14__ {int num_constraints; TYPE_5__* constraints; } ;
struct TYPE_13__ {scalar_t__ compressed_chunk_id; int id; } ;
typedef int ScanTupleResult ;
typedef TYPE_3__ FormData_chunk ;
typedef int DropBehavior ;
typedef TYPE_4__ ChunkConstraints ;
typedef TYPE_5__ ChunkConstraint ;
typedef int Chunk ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_8 (int ,int *,int ) ;
 TYPE_4__* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int * FUNC_11 (scalar_t__,int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static ScanTupleResult
FUNC_15(TupleInfo *VAR_4, void *VAR_5)
{
 FormData_chunk VAR_6;
 CatalogSecurityContext VAR_7;
 ChunkConstraints *VAR_8 = FUNC_9(2, VAR_4->mctx);
 int VAR_9;
 DropBehavior *VAR_10 = VAR_5;

 FUNC_0(&VAR_6, VAR_4->tuple, VAR_4->desc);
 FUNC_7(VAR_6.id, VAR_8);
 FUNC_12(VAR_6.id, 1);
 FUNC_13(VAR_6.id);


 for (VAR_9 = 0; VAR_9 < VAR_8->num_constraints; VAR_9++)
 {
  ChunkConstraint *VAR_11 = &VAR_8->constraints[VAR_9];





  if (FUNC_1(VAR_11) &&
   FUNC_8(VAR_11->fd.dimension_slice_id,
                 ((void*)0),
                 VAR_0) == 0)
   FUNC_14(VAR_11->fd.dimension_slice_id, 0);
 }


 FUNC_2(VAR_6.id);

 if (VAR_6.compressed_chunk_id != VAR_2)
 {
  Chunk *VAR_12 = FUNC_11(VAR_6.compressed_chunk_id, 0, 0);

  if (VAR_12 != ((void*)0))
   FUNC_10(VAR_12, *VAR_10, VAR_1);
 }

 FUNC_3(FUNC_4(), &VAR_7);
 FUNC_5(VAR_4->scanrel, VAR_4->tuple);
 FUNC_6(&VAR_7);

 return VAR_3;
}
