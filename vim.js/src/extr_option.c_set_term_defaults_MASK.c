
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimoption {int flags; scalar_t__ var; int ** def_val; int * fullname; } ;
typedef int char_u ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vimoption*) ;
 struct vimoption* VAR_3 ;

void
FUNC_2()
{
    struct vimoption *VAR_4;

    for (VAR_4 = &VAR_3[0]; VAR_4->fullname != ((void*)0); VAR_4++)
    {
 if (FUNC_1(VAR_4) && VAR_4->def_val[VAR_2] != *(char_u **)(VAR_4->var))
 {
     if (VAR_4->flags & VAR_1)
     {
  FUNC_0(VAR_4->def_val[VAR_2]);
  VAR_4->flags &= ~VAR_1;
     }
     VAR_4->def_val[VAR_2] = *(char_u **)(VAR_4->var);
     if (VAR_4->flags & VAR_0)
     {
  VAR_4->flags |= VAR_1;
  VAR_4->flags &= ~VAR_0;
     }
 }
    }
}
