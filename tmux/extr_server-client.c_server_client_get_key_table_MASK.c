
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int options; } ;
struct client {struct session* session; } ;


 char* FUNC_0 (int ,char*) ;

const char *
FUNC_1(struct client *VAR_0)
{
 struct session *VAR_1 = VAR_0->session;
 const char *VAR_2;

 if (VAR_1 == ((void*)0))
  return ("root");

 VAR_2 = FUNC_0(VAR_1->options, "key-table");
 if (*VAR_2 == '\0')
  return ("root");
 return (VAR_2);
}
