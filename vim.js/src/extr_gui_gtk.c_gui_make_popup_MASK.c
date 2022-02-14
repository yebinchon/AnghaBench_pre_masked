
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * submenu_id; } ;
typedef TYPE_1__ vimmenu_T ;
typedef int guint32 ;
typedef int char_u ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *,int *,int *,unsigned int,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(char_u *VAR_3, int VAR_4)
{
    vimmenu_T *VAR_5;

    VAR_2 = VAR_4;

    VAR_5 = FUNC_2(VAR_3);

    if (VAR_5 != ((void*)0) && VAR_5->submenu_id != ((void*)0))
    {
 FUNC_1(FUNC_0(VAR_5->submenu_id),
         ((void*)0), ((void*)0),
         &VAR_1, ((void*)0),
         0U, (guint32)VAR_0);
    }
}
