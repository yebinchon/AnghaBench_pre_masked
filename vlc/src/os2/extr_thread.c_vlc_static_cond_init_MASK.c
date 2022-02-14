
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; int condvar; } ;
typedef TYPE_1__ vlc_static_cond_t ;
struct TYPE_9__ {scalar_t__ hev; } ;
typedef TYPE_2__ vlc_cond_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7 (vlc_cond_t *VAR_3)
{
    FUNC_5 (&VAR_2);

    if (VAR_3->hev == VAR_0)
    {
        FUNC_4 (VAR_3);

        vlc_static_cond_t *VAR_4;

        VAR_4 = FUNC_1 (sizeof (*VAR_4));
        if (FUNC_3 (!VAR_4))
            FUNC_0();

        FUNC_2 (&VAR_4->condvar, VAR_3, sizeof (*VAR_3));
        VAR_4->next = VAR_1;
        VAR_1 = VAR_4;
    }

    FUNC_6 (&VAR_2);
}
