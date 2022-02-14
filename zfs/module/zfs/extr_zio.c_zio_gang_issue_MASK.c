
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t io_child_type; scalar_t__* io_child_error; int io_pipeline; int io_gang_tree; int io_abd; struct TYPE_6__* io_gang_leader; int * io_bp; } ;
typedef TYPE_1__ zio_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static zio_t *
FUNC_5(zio_t *VAR_4)
{
 blkptr_t *VAR_5 = VAR_4->io_bp;

 if (FUNC_4(VAR_4, VAR_1, VAR_3)) {
  return (((void*)0));
 }

 FUNC_0(FUNC_1(VAR_5) && VAR_4->io_gang_leader == VAR_4);
 FUNC_0(VAR_4->io_child_type > VAR_0);

 if (VAR_4->io_child_error[VAR_0] == 0)
  FUNC_3(VAR_4, VAR_4->io_gang_tree, VAR_5, VAR_4->io_abd,
      0);
 else
  FUNC_2(&VAR_4->io_gang_tree);

 VAR_4->io_pipeline = VAR_2;

 return (VAR_4);
}
