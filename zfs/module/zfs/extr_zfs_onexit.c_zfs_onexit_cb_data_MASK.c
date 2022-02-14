
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zo_lock; } ;
typedef TYPE_1__ zfs_onexit_t ;
struct TYPE_7__ {void* za_data; } ;
typedef TYPE_2__ zfs_onexit_action_node_t ;
typedef int uint64_t ;
typedef int minor_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,TYPE_1__**) ;

int
FUNC_5(minor_t VAR_1, uint64_t VAR_2, void **VAR_3)
{
 zfs_onexit_t *VAR_4;
 zfs_onexit_action_node_t *VAR_5;
 int VAR_6;

 *VAR_3 = ((void*)0);

 VAR_6 = FUNC_4(VAR_1, &VAR_4);
 if (VAR_6)
  return (VAR_6);

 FUNC_1(&VAR_4->zo_lock);
 VAR_5 = FUNC_3(VAR_4, VAR_2);
 if (VAR_5 != ((void*)0))
  *VAR_3 = VAR_5->za_data;
 else
  VAR_6 = FUNC_0(VAR_0);
 FUNC_2(&VAR_4->zo_lock);

 return (VAR_6);
}
