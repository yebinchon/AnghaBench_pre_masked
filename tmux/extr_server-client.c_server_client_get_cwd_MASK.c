
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct session {char const* cwd; } ;
struct client {char const* cwd; struct session* session; } ;
struct TYPE_2__ {char const* cwd; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;

const char *
FUNC_1(struct client *VAR_2, struct session *VAR_3)
{
 const char *VAR_4;

 if (!VAR_1 && VAR_0 != ((void*)0))
  return (VAR_0->cwd);
 if (VAR_2 != ((void*)0) && VAR_2->session == ((void*)0) && VAR_2->cwd != ((void*)0))
  return (VAR_2->cwd);
 if (VAR_3 != ((void*)0) && VAR_3->cwd != ((void*)0))
  return (VAR_3->cwd);
 if (VAR_2 != ((void*)0) && (VAR_3 = VAR_2->session) != ((void*)0) && VAR_3->cwd != ((void*)0))
  return (VAR_3->cwd);
 if ((VAR_4 = FUNC_0()) != ((void*)0))
  return (VAR_4);
 return ("/");
}
