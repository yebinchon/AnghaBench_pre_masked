
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_9__ {TYPE_3__* ms_allocatable; TYPE_2__* ms_group; int ms_loaded; } ;
typedef TYPE_4__ metaslab_t ;
struct TYPE_8__ {scalar_t__* rt_histogram; } ;
struct TYPE_7__ {TYPE_1__* mg_vd; } ;
struct TYPE_6__ {int vdev_ashift; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static uint64_t
FUNC_4(metaslab_t *VAR_3)
{
 uint64_t VAR_4 = 0;
 uint32_t VAR_5 = 0;

 FUNC_0(VAR_3->ms_loaded);

 for (int VAR_6 = VAR_0 - 1; VAR_6 >= VAR_2;
     VAR_6--) {
  uint8_t VAR_7 = VAR_3->ms_group->mg_vd->vdev_ashift;
  int VAR_8 = VAR_1 + VAR_7 - 1;

  VAR_5 <<= 1;
  VAR_5 += VAR_3->ms_allocatable->rt_histogram[VAR_6];
  if (VAR_6 > VAR_8)
   continue;

  if (VAR_5 != 0) {
   FUNC_2(VAR_4, VAR_5);
   FUNC_3(VAR_4, VAR_6);
   FUNC_1(VAR_4, 0);
   break;
  }
 }
 return (VAR_4);
}
