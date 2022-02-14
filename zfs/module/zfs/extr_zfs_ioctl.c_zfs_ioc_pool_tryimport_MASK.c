
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_iflags; int zc_nvlist_conf_size; int zc_nvlist_conf; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_1)
{
 nvlist_t *VAR_2, *VAR_3 = ((void*)0);
 int VAR_4;

 if ((VAR_4 = FUNC_1(VAR_1->zc_nvlist_conf, VAR_1->zc_nvlist_conf_size,
     VAR_1->zc_iflags, &VAR_2)) != 0)
  return (VAR_4);

 VAR_3 = FUNC_4(VAR_2);

 FUNC_2(VAR_2);

 if (VAR_3 == ((void*)0))
  return (FUNC_0(VAR_0));

 VAR_4 = FUNC_3(VAR_1, VAR_3);
 FUNC_2(VAR_3);

 return (VAR_4);
}
