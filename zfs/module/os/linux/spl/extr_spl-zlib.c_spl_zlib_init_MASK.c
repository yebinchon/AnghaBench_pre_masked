
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ,int *,int *,int *,int *,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_3 ;

int
FUNC_4(void)
{
 int VAR_4;

 VAR_4 = FUNC_0(FUNC_2(VAR_2, VAR_1),
     FUNC_3());

 VAR_3 = FUNC_1(
     "spl_zlib_workspace_cache",
     VAR_4, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_0);
 if (!VAR_3)
  return (1);

 return (0);
}
