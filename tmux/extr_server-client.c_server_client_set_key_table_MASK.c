
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct client {TYPE_1__* keytable; } ;
struct TYPE_3__ {int references; } ;


 TYPE_1__* FUNC_0 (char const*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (struct client*) ;

void
FUNC_3(struct client *VAR_0, const char *VAR_1)
{
 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0->keytable);
 VAR_0->keytable = FUNC_0(VAR_1, 1);
 VAR_0->keytable->references++;
}
