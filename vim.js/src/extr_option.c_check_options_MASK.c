
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_3__ {int flags; int * var; int * fullname; } ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

void
FUNC_2()
{
    int VAR_2;

    for (VAR_2 = 0; VAR_1[VAR_2].fullname != ((void*)0); VAR_2++)
 if ((VAR_1[VAR_2].flags & VAR_0) && VAR_1[VAR_2].var != ((void*)0))
     FUNC_0((char_u **)FUNC_1(&(VAR_1[VAR_2])));
}
