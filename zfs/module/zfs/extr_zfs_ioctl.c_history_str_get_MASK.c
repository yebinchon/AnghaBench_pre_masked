
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zc_history; } ;
typedef TYPE_1__ zfs_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,char*,int,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;

__attribute__((used)) static char *
FUNC_3(zfs_cmd_t *VAR_2)
{
 char *VAR_3;

 if (VAR_2->zc_history == 0)
  return (((void*)0));

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0((void *)(uintptr_t)VAR_2->zc_history,
     VAR_3, VAR_0, ((void*)0)) != 0) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }

 VAR_3[VAR_0 -1] = '\0';

 return (VAR_3);
}
