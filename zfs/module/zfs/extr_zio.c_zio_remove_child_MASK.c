
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int io_lock; int io_parent_count; int io_child_count; int io_parent_list; int io_child_list; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_9__ {TYPE_1__* zl_child; TYPE_1__* zl_parent; } ;
typedef TYPE_2__ zio_link_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_1, zio_t *VAR_2, zio_link_t *VAR_3)
{
 FUNC_0(VAR_3->zl_parent == VAR_1);
 FUNC_0(VAR_3->zl_child == VAR_2);

 FUNC_3(&VAR_1->io_lock);
 FUNC_3(&VAR_2->io_lock);

 FUNC_2(&VAR_1->io_child_list, VAR_3);
 FUNC_2(&VAR_2->io_parent_list, VAR_3);

 VAR_1->io_child_count--;
 VAR_2->io_parent_count--;

 FUNC_4(&VAR_2->io_lock);
 FUNC_4(&VAR_1->io_lock);
 FUNC_1(VAR_0, VAR_3);
}
