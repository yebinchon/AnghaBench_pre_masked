
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_cookie; int zc_value; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int **,int ,int) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_0)
{
 nvlist_t *VAR_1;
 int VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_0->zc_name, &VAR_1, VAR_0->zc_value,
     sizeof (VAR_0->zc_value));

 if (VAR_1 != ((void*)0)) {
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_1);






  VAR_0->zc_cookie = VAR_2;
 } else {
  VAR_3 = VAR_2;
 }

 return (VAR_3);
}
