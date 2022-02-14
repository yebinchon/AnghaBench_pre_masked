
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct session* FUNC_1 (int ,int *) ;
 struct session* FUNC_2 (int ,int *,struct session*) ;
 int FUNC_3 (struct session*) ;
 int VAR_0 ;

struct session *
FUNC_4(struct session *VAR_1)
{
 struct session *VAR_2;

 if (FUNC_0(&VAR_0) || !FUNC_3(VAR_1))
  return (((void*)0));

 VAR_2 = FUNC_2(VAR_0, &VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_1(VAR_0, &VAR_0);
 if (VAR_2 == VAR_1)
  return (((void*)0));
 return (VAR_2);
}
