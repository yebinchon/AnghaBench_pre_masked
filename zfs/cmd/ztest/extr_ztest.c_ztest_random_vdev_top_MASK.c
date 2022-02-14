
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__** vdev_child; int vdev_children; TYPE_1__* vdev_mg; scalar_t__ vdev_islog; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_9__ {TYPE_2__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef int boolean_t ;
struct TYPE_7__ {int * mg_class; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static uint64_t
FUNC_4(spa_t *VAR_2, boolean_t VAR_3)
{
 uint64_t VAR_4;
 vdev_t *VAR_5 = VAR_2->spa_root_vdev;
 vdev_t *VAR_6;

 FUNC_0(FUNC_1(VAR_2, VAR_1, VAR_0) != 0);

 do {
  VAR_4 = FUNC_3(VAR_5->vdev_children);
  VAR_6 = VAR_5->vdev_child[VAR_4];
 } while (!FUNC_2(VAR_6) || (VAR_6->vdev_islog && !VAR_3) ||
     VAR_6->vdev_mg == ((void*)0) || VAR_6->vdev_mg->mg_class == ((void*)0));

 return (VAR_4);
}
