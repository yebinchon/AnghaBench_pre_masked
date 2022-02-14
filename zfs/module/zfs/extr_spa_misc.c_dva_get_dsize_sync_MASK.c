
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vdev_deflate_ratio; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_8__ {scalar_t__ spa_deflate; } ;
typedef TYPE_2__ spa_t ;
typedef int dva_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int ) ;

uint64_t
FUNC_5(spa_t *VAR_3, const dva_t *VAR_4)
{
 uint64_t VAR_5 = FUNC_1(VAR_4);
 uint64_t VAR_6 = VAR_5;

 FUNC_0(FUNC_3(VAR_3, VAR_1, VAR_0) != 0);

 if (VAR_5 != 0 && VAR_3->spa_deflate) {
  vdev_t *VAR_7 = FUNC_4(VAR_3, FUNC_2(VAR_4));
  if (VAR_7 != ((void*)0))
   VAR_6 = (VAR_5 >> VAR_2) *
       VAR_7->vdev_deflate_ratio;
 }

 return (VAR_6);
}
