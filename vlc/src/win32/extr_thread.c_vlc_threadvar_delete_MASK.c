
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef struct vlc_threadvar* vlc_threadvar_t ;
struct vlc_threadvar {int id; TYPE_2__* prev; TYPE_1__* next; } ;
struct TYPE_4__ {TYPE_1__* next; } ;
struct TYPE_3__ {TYPE_2__* prev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vlc_threadvar*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_4 (vlc_threadvar_t *VAR_2)
{
    struct vlc_threadvar *VAR_3 = *VAR_2;

    FUNC_0(&VAR_0);
    if (VAR_3->prev != ((void*)0))
        VAR_3->prev->next = VAR_3->next;

    if (VAR_3->next != ((void*)0))
        VAR_3->next->prev = VAR_3->prev;
    else
        VAR_1 = VAR_3->prev;

    FUNC_1(&VAR_0);

    FUNC_2 (VAR_3->id);
    FUNC_3 (VAR_3);
}
