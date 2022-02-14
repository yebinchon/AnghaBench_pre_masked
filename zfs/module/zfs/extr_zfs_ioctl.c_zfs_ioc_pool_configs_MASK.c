
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_cookie; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(zfs_cmd_t *VAR_1)
{
 nvlist_t *VAR_2;
 int VAR_3;

 if ((VAR_2 = FUNC_3(&VAR_1->zc_cookie)) == ((void*)0))
  return (FUNC_0(VAR_0));

 VAR_3 = FUNC_2(VAR_1, VAR_2);

 FUNC_1(VAR_2);

 return (VAR_3);
}
