
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int label; int name; int * id; struct TYPE_3__* next; } ;
typedef TYPE_1__ vimmenu_T ;
typedef int char_u ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 TYPE_1__* VAR_0 ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

void
FUNC_4(int VAR_1)
{
    vimmenu_T *VAR_2;
    char_u *VAR_3;

    for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    {
 if (VAR_2->id == ((void*)0))
     continue;

 VAR_3 = FUNC_2(VAR_2->name, VAR_1);
 FUNC_1(FUNC_0(VAR_2->label),
      (const char *)VAR_3);
 FUNC_3(VAR_3);
    }
}
