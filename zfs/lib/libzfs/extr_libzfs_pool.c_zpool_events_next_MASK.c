
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* member_0; int zc_cleanup_fd; unsigned int zc_guid; scalar_t__ zc_cookie; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,int **) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_1__*) ;
 int FUNC_7 (int *,int,int ) ;

int
FUNC_8(libzfs_handle_t *VAR_7, nvlist_t **VAR_8,
    int *VAR_9, unsigned VAR_10, int VAR_11)
{
 zfs_cmd_t VAR_12 = {"\0"};
 int VAR_13 = 0;

 *VAR_8 = ((void*)0);
 *VAR_9 = 0;
 VAR_12.zc_cleanup_fd = VAR_11;

 if (VAR_10 & VAR_3)
  VAR_12.zc_guid = VAR_3;

 if (FUNC_1(VAR_7, &VAR_12, VAR_4) != 0)
  return (-1);

retry:
 if (FUNC_6(VAR_7, VAR_5, &VAR_12) != 0) {
  switch (VAR_6) {
  case 128:
   VAR_13 = FUNC_5(VAR_7, VAR_1,
       FUNC_0(VAR_2, "zfs shutdown"));
   goto out;
  case 130:

   if (!(VAR_10 & VAR_3))
    VAR_13 = FUNC_7(VAR_7, VAR_6,
        FUNC_0(VAR_2, "cannot get event"));

   goto out;
  case 129:
   if (FUNC_2(VAR_7, &VAR_12) != 0) {
    VAR_13 = FUNC_5(VAR_7, VAR_0,
        FUNC_0(VAR_2, "cannot get event"));
    goto out;
   } else {
    goto retry;
   }
  default:
   VAR_13 = FUNC_7(VAR_7, VAR_6,
       FUNC_0(VAR_2, "cannot get event"));
   goto out;
  }
 }

 VAR_13 = FUNC_4(VAR_7, &VAR_12, VAR_8);
 if (VAR_13 != 0)
  goto out;

 *VAR_9 = (int)VAR_12.zc_cookie;
out:
 FUNC_3(&VAR_12);

 return (VAR_13);
}
