
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int se_name; } ;
typedef TYPE_1__ zfs_snapentry_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(char *VAR_2, char *VAR_3)
{
 zfs_snapentry_t *VAR_4;

 FUNC_0(FUNC_1(&VAR_1));

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 == ((void*)0))
  return (FUNC_2(VAR_0));

 FUNC_8(VAR_4);
 FUNC_4(VAR_4->se_name);
 VAR_4->se_name = FUNC_3(VAR_3);
 FUNC_5(VAR_4);
 FUNC_7(VAR_4);

 return (0);
}
