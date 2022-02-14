
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* se_path; } ;
typedef TYPE_1__ zfs_snapentry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,char**,char**,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 TYPE_1__* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(char *VAR_6, int VAR_7)
{
 char *VAR_8[] = { "/usr/bin/env", "umount", "-t", "zfs", "-n", ((void*)0),
     ((void*)0) };
 char *VAR_9[] = { ((void*)0) };
 zfs_snapentry_t *VAR_10;
 int VAR_11;

 FUNC_3(&VAR_5, VAR_3);
 if ((VAR_10 = FUNC_5(VAR_6)) == ((void*)0)) {
  FUNC_4(&VAR_5);
  return (FUNC_0(VAR_1));
 }
 FUNC_4(&VAR_5);

 if (VAR_7 & VAR_2)
  VAR_8[4] = "-fn";
 VAR_8[5] = VAR_10->se_path;
 FUNC_2("unmount; path=%s\n", VAR_10->se_path);
 VAR_11 = FUNC_1(VAR_8[0], VAR_8, VAR_9, VAR_4);
 FUNC_6(VAR_10);







 if (VAR_11)
  VAR_11 = FUNC_0(VAR_0);

 return (VAR_11);
}
