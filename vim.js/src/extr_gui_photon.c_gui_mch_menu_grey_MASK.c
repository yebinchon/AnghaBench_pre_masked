
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * id; } ;
typedef TYPE_1__ vimmenu_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,long,long) ;
 long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;

void
FUNC_4(vimmenu_T *VAR_9, int VAR_10)
{
    long VAR_11, VAR_12, VAR_13;

    if (VAR_9->id == ((void*)0))
 return;

    VAR_11 = FUNC_1(VAR_9->id);
    if (FUNC_2(VAR_9->id, VAR_1) &&
     FUNC_2(FUNC_3(VAR_9->id), VAR_0))
    {
 VAR_13 = VAR_4;
 VAR_12 = VAR_7 | VAR_6;
    }
    else
    {
 VAR_13 = VAR_8;
 VAR_12 = VAR_3 | VAR_5;
    }

    if (! VAR_10)
 VAR_13 = ~VAR_13;

    FUNC_0(VAR_9->id, VAR_2, VAR_13,
     VAR_12);
}
