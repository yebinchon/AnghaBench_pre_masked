
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {struct client* name; } ;


 int FUNC_0 (char*,int,char*,struct client*) ;

__attribute__((used)) static const char *
FUNC_1(struct client *VAR_0)
{
 static char VAR_1[256];

 if (VAR_0 == ((void*)0))
  return ("<global>");
 if (VAR_0->name != ((void*)0))
  FUNC_0(VAR_1, sizeof VAR_1, "<%s>", VAR_0->name);
 else
  FUNC_0(VAR_1, sizeof VAR_1, "<%p>", VAR_0);
 return (VAR_1);
}
