
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window {TYPE_1__* active; } ;
struct TYPE_2__ {char* shell; int argv; int argc; } ;


 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

char *
FUNC_3(struct window *VAR_0)
{
 char *VAR_1, *VAR_2;

 VAR_1 = FUNC_0(VAR_0->active->argc, VAR_0->active->argv);
 if (VAR_1 != ((void*)0) && *VAR_1 != '\0')
  VAR_2 = FUNC_2(VAR_1);
 else
  VAR_2 = FUNC_2(VAR_0->active->shell);
 FUNC_1(VAR_1);
 return (VAR_2);
}
