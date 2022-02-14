
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_value; int zc_obj; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int **) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_4)
{
 objset_t *VAR_5;
 int VAR_6;


 if ((VAR_6 = FUNC_1(VAR_4->zc_name, VAR_0,
     VAR_3, &VAR_5)) != 0)
  return (VAR_6);
 if (FUNC_3(VAR_5) != VAR_1) {
  FUNC_2(VAR_5, VAR_0, VAR_3);
  return (FUNC_0(VAR_2));
 }
 VAR_6 = FUNC_4(VAR_5, VAR_4->zc_obj, VAR_4->zc_value,
     sizeof (VAR_4->zc_value));
 FUNC_2(VAR_5, VAR_0, VAR_3);

 return (VAR_6);
}
