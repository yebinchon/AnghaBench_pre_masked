
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
struct zfs_open_bookmarks_cb_data {int * zhp; int path; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(zfs_handle_t *VAR_1, void *VAR_2)
{
 struct zfs_open_bookmarks_cb_data *VAR_3 = VAR_2;




 if (FUNC_0(VAR_3->path, FUNC_2(VAR_1)) == 0) {



  VAR_3->zhp = VAR_1;
  return (VAR_0);
 }




 FUNC_1(VAR_1);
 return (0);
}
