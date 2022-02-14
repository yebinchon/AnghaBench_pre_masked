
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_mg; int vdev_ms_list; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int metaslab_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(vdev_t *VAR_0, uint64_t VAR_1)
{
 metaslab_t *VAR_2;
 boolean_t VAR_3 = !FUNC_4(&VAR_0->vdev_ms_list, FUNC_1(VAR_1));

 FUNC_0(FUNC_6(VAR_0));

 while ((VAR_2 = FUNC_5(&VAR_0->vdev_ms_list, FUNC_1(VAR_1)))
     != ((void*)0))
  FUNC_2(VAR_2, VAR_1);

 if (VAR_3)
  FUNC_3(VAR_0->vdev_mg);
}
