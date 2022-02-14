
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session_group {int sessions; int name; } ;


 int FUNC_0 (int ,int *,struct session_group*) ;
 int FUNC_1 (int *) ;
 struct session_group* FUNC_2 (char const*) ;
 int VAR_0 ;
 struct session_group* FUNC_3 (int,int) ;
 int FUNC_4 (char const*) ;

struct session_group *
FUNC_5(const char *VAR_1)
{
 struct session_group *VAR_2;

 if ((VAR_2 = FUNC_2(VAR_1)) != ((void*)0))
  return (VAR_2);

 VAR_2 = FUNC_3(1, sizeof *VAR_2);
 VAR_2->name = FUNC_4(VAR_1);
 FUNC_1(&VAR_2->sessions);

 FUNC_0(VAR_0, &VAR_0, VAR_2);
 return (VAR_2);
}
