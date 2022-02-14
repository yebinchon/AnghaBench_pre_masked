
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_top_zap; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int ms_flush_data_obj ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int,int,int *) ;

__attribute__((used)) static void
FUNC_4(vdev_t *VAR_2)
{
 uint64_t VAR_3;
 int VAR_4 = FUNC_3(FUNC_2(VAR_2->vdev_spa),
     VAR_2->vdev_top_zap, VAR_1,
     sizeof (VAR_3), 1, &VAR_3);
 if (VAR_4 == VAR_0)
  return;
 FUNC_0(VAR_4);

 FUNC_1(VAR_3);
}
