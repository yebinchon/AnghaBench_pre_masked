
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmd; } ;
typedef TYPE_1__ vdev_cmd_data_t ;
typedef int fullpath ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int * FUNC_3 (char*,char) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char*,char*,char**) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 char* FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(void *VAR_2)
{
 vdev_cmd_data_t *VAR_3 = VAR_2;
 char *VAR_4 = ((void*)0), *VAR_5, *VAR_6;

 VAR_5 = FUNC_4(VAR_3->cmd);
 if (VAR_5 == ((void*)0))
  return;

 VAR_6 = VAR_5;
 while ((VAR_4 = FUNC_5(VAR_6, ",", &VAR_6))) {
  char *VAR_7 = ((void*)0), *VAR_8, *VAR_9;
  char VAR_10[VAR_0];

  if (FUNC_3(VAR_4, '/') != ((void*)0))
   continue;

  VAR_8 = FUNC_7();
  if (VAR_8 == ((void*)0))
   continue;

  VAR_9 = VAR_8;
  while ((VAR_7 = FUNC_5(VAR_9, ":", &VAR_9))) {
   if (FUNC_2(VAR_10, sizeof (VAR_10),
       "%s/%s", VAR_7, VAR_4) == -1)
    continue;

   if (FUNC_0(VAR_10, VAR_1) == 0) {
    FUNC_6(VAR_3, VAR_10);
    break;
   }
  }
  FUNC_1(VAR_8);
 }
 FUNC_1(VAR_5);
}
