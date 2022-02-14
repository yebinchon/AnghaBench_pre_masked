
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; scalar_t__ zc_cookie; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int msg ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int ,char*) ;

int
FUNC_4(libzfs_handle_t *VAR_3, int *VAR_4)
{
 zfs_cmd_t VAR_5 = {"\0"};
 char VAR_6[1024];

 (void) FUNC_1(VAR_6, sizeof (VAR_6), FUNC_0(VAR_0,
     "cannot clear events"));

 if (FUNC_2(VAR_3, VAR_1, &VAR_5) != 0)
  return (FUNC_3(VAR_3, VAR_2, VAR_6));

 if (VAR_4 != ((void*)0))
  *VAR_4 = (int)VAR_5.zc_cookie;

 return (0);
}
