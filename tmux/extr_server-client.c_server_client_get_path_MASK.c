
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (struct client*,int *) ;
 int FUNC_3 (char**,char*,int ,char const*) ;
 char* FUNC_4 (char const*) ;

char *
FUNC_5(struct client *VAR_1, const char *VAR_2)
{
 char *VAR_3, VAR_4[VAR_0];

 if (*VAR_2 == '/')
  VAR_3 = FUNC_4(VAR_2);
 else
  FUNC_3(&VAR_3, "%s/%s", FUNC_2(VAR_1, ((void*)0)), VAR_2);
 if (FUNC_1(VAR_3, VAR_4) == ((void*)0))
  return (VAR_3);
 FUNC_0(VAR_3);
 return (FUNC_4(VAR_4));
}
