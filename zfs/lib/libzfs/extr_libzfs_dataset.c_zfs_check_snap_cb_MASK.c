
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct destroydata {char* snapname; int nvl; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int (*) (TYPE_1__*,void*),struct destroydata*) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_2, void *VAR_3)
{
 struct destroydata *VAR_4 = VAR_3;
 char VAR_5[VAR_1];
 int VAR_6 = 0;

 if (FUNC_2(VAR_5, sizeof (VAR_5), "%s@%s", VAR_2->zfs_name,
     VAR_4->snapname) >= sizeof (VAR_5))
  return (VAR_0);

 if (FUNC_0(VAR_5))
  FUNC_3(FUNC_1(VAR_4->nvl, VAR_5) == 0);

 VAR_6 = FUNC_5(VAR_2, FUNC_6, VAR_4);
 FUNC_4(VAR_2);
 return (VAR_6);
}
