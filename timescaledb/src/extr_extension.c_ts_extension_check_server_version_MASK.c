
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (long) ;
 long FUNC_5 (char*,int *,int) ;

void
FUNC_6()
{




 char *VAR_3 = FUNC_0("server_version_num", ((void*)0), 0);
 long VAR_4 = FUNC_5(VAR_3, ((void*)0), 10);

 if (!FUNC_4(VAR_4))
 {
  char *VAR_5 = FUNC_0("server_version", ((void*)0), 0);

  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("extension \"%s\" does not support postgres version %s",
      VAR_2,
      VAR_5)));
 }
}
