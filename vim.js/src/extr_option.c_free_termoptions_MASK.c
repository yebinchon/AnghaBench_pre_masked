
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimoption {int flags; int ** def_val; scalar_t__ var; int * fullname; } ;
typedef int char_u ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;
 void* VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vimoption*) ;
 struct vimoption* VAR_4 ;

void
FUNC_3()
{
    struct vimoption *VAR_5;

    for (VAR_5 = &VAR_4[0]; VAR_5->fullname != ((void*)0); VAR_5++)
 if (FUNC_2(VAR_5))
 {
     if (VAR_5->flags & VAR_0)
  FUNC_1(*(char_u **)(VAR_5->var));
     if (VAR_5->flags & VAR_1)
  FUNC_1(VAR_5->def_val[VAR_2]);
     *(char_u **)(VAR_5->var) = VAR_3;
     VAR_5->def_val[VAR_2] = VAR_3;
     VAR_5->flags &= ~(VAR_0|VAR_1);
 }
    FUNC_0();
}
