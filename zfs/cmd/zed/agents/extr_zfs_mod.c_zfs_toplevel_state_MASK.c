
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {int vs_state; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,int **,unsigned int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(zpool_handle_t *VAR_2)
{
 nvlist_t *VAR_3;
 vdev_stat_t *VAR_4;
 unsigned int VAR_5;

 FUNC_2(FUNC_0(FUNC_3(VAR_2, ((void*)0)),
     VAR_1, &VAR_3) == 0);
 FUNC_2(FUNC_1(VAR_3, VAR_0,
     (uint64_t **)&VAR_4, &VAR_5) == 0);
 return (VAR_4->vs_state);
}
