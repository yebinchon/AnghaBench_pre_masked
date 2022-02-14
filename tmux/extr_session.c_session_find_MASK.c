
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {char* name; } ;


 struct session* FUNC_0 (int ,int *,struct session*) ;
 int VAR_0 ;

struct session *
FUNC_1(const char *VAR_1)
{
 struct session VAR_2;

 VAR_2.name = (char *) VAR_1;
 return (FUNC_0(VAR_0, &VAR_0, &VAR_2));
}
