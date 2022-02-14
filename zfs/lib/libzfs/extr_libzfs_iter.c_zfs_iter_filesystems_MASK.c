
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int (* zfs_iter_f ) (TYPE_1__*,void*) ;
struct TYPE_12__ {scalar_t__ zfs_type; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_13__ {char* member_0; } ;
typedef TYPE_3__ zfs_cmd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_3__*) ;

int
FUNC_4(zfs_handle_t *VAR_2, zfs_iter_f VAR_3, void *VAR_4)
{
 zfs_cmd_t VAR_5 = {"\0"};
 zfs_handle_t *VAR_6;
 int VAR_7;

 if (VAR_2->zfs_type != VAR_1)
  return (0);

 if (FUNC_1(VAR_2->zfs_hdl, &VAR_5, 0) != 0)
  return (-1);

 while ((VAR_7 = FUNC_3(VAR_2, VAR_0,
     &VAR_5)) == 0) {




  if ((VAR_6 = FUNC_0(VAR_2->zfs_hdl,
      &VAR_5)) == ((void*)0)) {
   continue;
  }

  if ((VAR_7 = VAR_3(VAR_6, VAR_4)) != 0) {
   FUNC_2(&VAR_5);
   return (VAR_7);
  }
 }
 FUNC_2(&VAR_5);
 return ((VAR_7 < 0) ? VAR_7 : 0);
}
