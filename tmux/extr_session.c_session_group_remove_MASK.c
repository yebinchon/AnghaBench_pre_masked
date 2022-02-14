
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session_group {int sessions; } ;
struct session {int dummy; } ;


 int FUNC_0 (int ,int *,struct session_group*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct session*,int ) ;
 int FUNC_3 (struct session_group*) ;
 int VAR_0 ;
 struct session_group* FUNC_4 (struct session*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct session *VAR_2)
{
 struct session_group *VAR_3;

 if ((VAR_3 = FUNC_4(VAR_2)) == ((void*)0))
  return;
 FUNC_2(&VAR_3->sessions, VAR_2, VAR_0);
 if (FUNC_1(&VAR_3->sessions)) {
  FUNC_0(VAR_1, &VAR_1, VAR_3);
  FUNC_3(VAR_3);
 }
}
