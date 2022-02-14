
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hypertable_constraint_name; int constraint_name; int dimension_slice_id; int chunk_id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef int Datum ;
typedef TYPE_2__ ChunkConstraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_5(ChunkConstraint *VAR_5, Datum VAR_6[VAR_4],
           bool VAR_7[VAR_4])
{
 FUNC_4(VAR_6, 0, sizeof(Datum) * VAR_4);
 VAR_6[FUNC_0(VAR_0)] =
  FUNC_1(VAR_5->fd.chunk_id);
 VAR_6[FUNC_0(VAR_2)] =
  FUNC_1(VAR_5->fd.dimension_slice_id);
 VAR_6[FUNC_0(VAR_1)] =
  FUNC_2(&VAR_5->fd.constraint_name);
 VAR_6[FUNC_0(VAR_3)] =
  FUNC_2(&VAR_5->fd.hypertable_constraint_name);

 if (FUNC_3(VAR_5))
  VAR_7[FUNC_0(VAR_3)] = 1;
 else
  VAR_7[FUNC_0(VAR_2)] = 1;
}
