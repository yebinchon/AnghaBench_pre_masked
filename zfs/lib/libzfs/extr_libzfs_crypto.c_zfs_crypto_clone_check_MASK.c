
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(libzfs_handle_t *VAR_6, zfs_handle_t *VAR_7,
    char *VAR_8, nvlist_t *VAR_9)
{
 char VAR_10[1024];

 (void) FUNC_2(VAR_10, sizeof (VAR_10),
     FUNC_0(VAR_1, "Encryption clone error"));





 if (FUNC_1(VAR_9, FUNC_4(VAR_3)) ||
     FUNC_1(VAR_9, FUNC_4(VAR_4)) ||
     FUNC_1(VAR_9, FUNC_4(VAR_2)) ||
     FUNC_1(VAR_9, FUNC_4(VAR_5))) {
  FUNC_3(VAR_6, FUNC_0(VAR_1,
      "Encryption properties must inherit from origin dataset."));
  return (VAR_0);
 }

 return (0);
}
