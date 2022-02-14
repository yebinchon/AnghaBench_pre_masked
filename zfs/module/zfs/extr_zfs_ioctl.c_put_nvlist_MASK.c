
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t zc_nvlist_dst_size; int zc_nvlist_dst_filled; int zc_iflags; scalar_t__ zc_nvlist_dst; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,void*,size_t,int ) ;
 char* FUNC_2 (int *,size_t*) ;
 int FUNC_3 (char*,size_t) ;
 size_t FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_3, nvlist_t *VAR_4)
{
 char *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 size_t VAR_7;

 VAR_7 = FUNC_4(VAR_4);

 if (VAR_7 > VAR_3->zc_nvlist_dst_size) {
  VAR_6 = FUNC_0(VAR_2);
 } else {
  VAR_5 = FUNC_2(VAR_4, &VAR_7);
  if (FUNC_1(VAR_5, (void *)(uintptr_t)VAR_3->zc_nvlist_dst,
      VAR_7, VAR_3->zc_iflags) != 0)
   VAR_6 = FUNC_0(VAR_1);
  FUNC_3(VAR_5, VAR_7);
 }

 VAR_3->zc_nvlist_dst_size = VAR_7;
 VAR_3->zc_nvlist_dst_filled = VAR_0;
 return (VAR_6);
}
