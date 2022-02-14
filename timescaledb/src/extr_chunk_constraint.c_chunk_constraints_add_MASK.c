
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* int32 ;
struct TYPE_8__ {int hypertable_constraint_name; int constraint_name; void* chunk_id; void* dimension_slice_id; } ;
struct TYPE_10__ {TYPE_1__ fd; } ;
struct TYPE_9__ {int num_dimension_constraints; scalar_t__ num_constraints; TYPE_3__* constraints; } ;
typedef TYPE_2__ ChunkConstraints ;
typedef TYPE_3__ ChunkConstraint ;


 int FUNC_0 (int *,scalar_t__,void*,char const*,void*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static ChunkConstraint *
FUNC_4(ChunkConstraints *VAR_0, int32 VAR_1, int32 VAR_2,
       const char *VAR_3, const char *VAR_4)
{
 ChunkConstraint *VAR_5;

 FUNC_1(VAR_0, VAR_0->num_constraints + 1);
 VAR_5 = &VAR_0->constraints[VAR_0->num_constraints++];
 VAR_5->fd.chunk_id = VAR_1;
 VAR_5->fd.dimension_slice_id = VAR_2;

 if (((void*)0) == VAR_3)
 {
  FUNC_0(&VAR_5->fd.constraint_name,
          FUNC_2(VAR_5),
          VAR_5->fd.dimension_slice_id,
          VAR_4,
          VAR_5->fd.chunk_id);

  if (FUNC_2(VAR_5))
   FUNC_3(&VAR_5->fd.hypertable_constraint_name, "");
 }
 else
  FUNC_3(&VAR_5->fd.constraint_name, VAR_3);

 if (((void*)0) != VAR_4)
  FUNC_3(&VAR_5->fd.hypertable_constraint_name, VAR_4);

 if (FUNC_2(VAR_5))
  VAR_0->num_dimension_constraints++;

 return VAR_5;
}
