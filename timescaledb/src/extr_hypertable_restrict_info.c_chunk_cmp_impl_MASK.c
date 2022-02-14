
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_2__ fd; TYPE_1__* cube; } ;
struct TYPE_6__ {int * slices; } ;
typedef TYPE_3__ Chunk ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const Chunk *VAR_0, const Chunk *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0->cube->slices[0], VAR_1->cube->slices[0]);

 if (VAR_2 == 0)
  VAR_2 = FUNC_0(VAR_0->fd.id, VAR_1->fd.id);

 return VAR_2;
}
