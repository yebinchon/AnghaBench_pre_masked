
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zfs_hdl; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_9__ {int zc_cookie; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint64_t ;





 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int,TYPE_2__*) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_2, int VAR_3, zfs_cmd_t *VAR_4)
{
 int VAR_5;
 uint64_t VAR_6;

 VAR_6 = VAR_4->zc_cookie;
top:
 (void) FUNC_1(VAR_4->zc_name, VAR_2->zfs_name, sizeof (VAR_4->zc_name));
 VAR_5 = FUNC_4(VAR_2->zfs_hdl, VAR_3, VAR_4);

 if (VAR_5 == -1) {
  switch (VAR_1) {
  case 129:

   if (FUNC_2(VAR_2->zfs_hdl, VAR_4) != 0) {
    FUNC_3(VAR_4);
    return (-1);
   }
   VAR_4->zc_cookie = VAR_6;
   goto top;





  case 128:
  case 130:
   VAR_5 = 1;
   break;
  default:
   VAR_5 = FUNC_5(VAR_2->zfs_hdl, VAR_1,
       FUNC_0(VAR_0,
       "cannot iterate filesystems"));
   break;
  }
 }
 return (VAR_5);
}
