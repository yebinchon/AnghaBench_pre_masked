
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char const*,char const*) ;
 scalar_t__ FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;

int
FUNC_7(zfs_handle_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
 int VAR_5 = -1;
 char VAR_6[1024];
 libzfs_handle_t *VAR_7 = VAR_2->zfs_hdl;
 nvlist_t *VAR_8 = ((void*)0);

 (void) FUNC_5(VAR_6, sizeof (VAR_6),
     FUNC_0(VAR_1, "cannot set property for '%s'"),
     VAR_2->zfs_name);

 if (FUNC_3(&VAR_8, VAR_0, 0) != 0 ||
     FUNC_2(VAR_8, VAR_3, VAR_4) != 0) {
  (void) FUNC_1(VAR_7);
  goto error;
 }

 VAR_5 = FUNC_6(VAR_2, VAR_8);

error:
 FUNC_4(VAR_8);
 return (VAR_5);
}
