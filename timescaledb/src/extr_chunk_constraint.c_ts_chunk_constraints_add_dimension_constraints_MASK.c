
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_7__ {int num_slices; TYPE_2__** slices; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_3__ Hypercube ;
typedef int ChunkConstraints ;


 int FUNC_0 (int *,int ,int ,int *,int *) ;

int
FUNC_1(ChunkConstraints *VAR_0, int32 VAR_1,
              Hypercube *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_slices; VAR_3++)
  FUNC_0(VAR_0, VAR_1, VAR_2->slices[VAR_3]->fd.id, ((void*)0), ((void*)0));

 return VAR_2->num_slices;
}
