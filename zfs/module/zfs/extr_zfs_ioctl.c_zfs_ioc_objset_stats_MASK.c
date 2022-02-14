
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_1)
{
 objset_t *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->zc_name, VAR_0, &VAR_2);
 if (VAR_3 == 0) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_2, VAR_0);
 }

 return (VAR_3);
}
