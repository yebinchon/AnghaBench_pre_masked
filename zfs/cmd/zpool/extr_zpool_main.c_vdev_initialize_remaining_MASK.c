
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vs_initialize_state; scalar_t__ vs_initialize_bytes_done; scalar_t__ vs_initialize_bytes_est; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__**,size_t*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint64_t
FUNC_3(nvlist_t *VAR_3)
{
 uint64_t VAR_4;
 nvlist_t **VAR_5;
 uint_t VAR_6, VAR_7;
 vdev_stat_t *VAR_8;

 FUNC_2(FUNC_1(VAR_3, VAR_2,
     (uint64_t **)&VAR_8, &VAR_6) == 0);

 if (VAR_8->vs_initialize_state == VAR_0)
  VAR_4 = VAR_8->vs_initialize_bytes_est -
      VAR_8->vs_initialize_bytes_done;
 else
  VAR_4 = 0;

 if (FUNC_0(VAR_3, VAR_1,
     &VAR_5, &VAR_7) != 0)
  VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  VAR_4 += FUNC_3(VAR_5[VAR_6]);

 return (VAR_4);
}
