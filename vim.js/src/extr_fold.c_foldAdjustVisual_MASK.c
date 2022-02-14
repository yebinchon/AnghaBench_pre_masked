
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ col; int lnum; } ;
typedef TYPE_1__ pos_T ;
typedef scalar_t__ colnr_T ;
typedef int char_u ;
struct TYPE_8__ {TYPE_1__ w_cursor; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__,TYPE_1__) ;
 int FUNC_4 () ;
 int * FUNC_5 (int ) ;
 char* VAR_4 ;

void
FUNC_6()
{
    pos_T *VAR_5, *VAR_6;
    char_u *VAR_7;

    if (!VAR_1 || !FUNC_1(VAR_2))
 return;

    if (FUNC_3(VAR_0, VAR_2->w_cursor))
    {
 VAR_5 = &VAR_0;
 VAR_6 = &VAR_2->w_cursor;
    }
    else
    {
 VAR_5 = &VAR_2->w_cursor;
 VAR_6 = &VAR_0;
    }
    if (FUNC_2(VAR_5->lnum, &VAR_5->lnum, ((void*)0)))
 VAR_5->col = 0;
    if (FUNC_2(VAR_6->lnum, ((void*)0), &VAR_6->lnum))
    {
 VAR_7 = FUNC_5(VAR_6->lnum);
 VAR_6->col = (colnr_T)FUNC_0(VAR_7);
 if (VAR_6->col > 0 && *VAR_4 == 'o')
     --VAR_6->col;





    }
}
