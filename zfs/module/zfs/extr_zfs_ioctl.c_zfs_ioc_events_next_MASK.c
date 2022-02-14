
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_zevent_t ;
struct TYPE_4__ {int zc_guid; int zc_cleanup_fd; int zc_cookie; int zc_nvlist_dst_size; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int minor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int *,int **) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int **,int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_2)
{
 zfs_zevent_t *VAR_3;
 nvlist_t *VAR_4 = ((void*)0);
 minor_t VAR_5;
 uint64_t VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2->zc_cleanup_fd, &VAR_5, &VAR_3);
 if (VAR_7 != 0)
  return (VAR_7);

 do {
  VAR_7 = FUNC_4(VAR_3, &VAR_4,
      &VAR_2->zc_nvlist_dst_size, &VAR_6);
  if (VAR_4 != ((void*)0)) {
   VAR_2->zc_cookie = VAR_6;
   VAR_7 = FUNC_1(VAR_2, VAR_4);
   FUNC_0(VAR_4);
  }

  if (VAR_2->zc_guid & VAR_1)
   break;

  if ((VAR_7 == 0) || (VAR_7 != VAR_0))
   break;

  VAR_7 = FUNC_5(VAR_3);
  if (VAR_7 != 0)
   break;
 } while (1);

 FUNC_3(VAR_2->zc_cleanup_fd);

 return (VAR_7);
}
