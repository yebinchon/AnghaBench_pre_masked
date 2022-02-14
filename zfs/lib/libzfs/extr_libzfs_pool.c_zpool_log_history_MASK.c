
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* member_0; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,int *) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;

int
FUNC_6(libzfs_handle_t *VAR_1, const char *VAR_2)
{
 zfs_cmd_t VAR_3 = {"\0"};
 nvlist_t *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();
 FUNC_0(VAR_4, "message", VAR_2);
 VAR_5 = FUNC_4(VAR_1, &VAR_3, VAR_4);
 if (VAR_5 == 0)
  VAR_5 = FUNC_5(VAR_1, VAR_0, &VAR_3);
 FUNC_2(VAR_4);
 FUNC_3(&VAR_3);
 return (VAR_5);
}
