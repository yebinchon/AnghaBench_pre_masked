
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {scalar_t__ references; } ;
struct session_group {int dummy; } ;
struct session {int dummy; } ;


 struct session_group* FUNC_0 (struct session*) ;
 scalar_t__ FUNC_1 (struct session_group*) ;

int
FUNC_2(struct session *VAR_0, struct window *VAR_1)
{
 struct session_group *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0)) != ((void*)0))
  return (VAR_1->references != FUNC_1(VAR_2));
 return (VAR_1->references != 1);
}
