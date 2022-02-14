
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int audio_output_t ;
struct TYPE_7__ {int lock; } ;
struct TYPE_8__ {TYPE_4__* list; int lock; } ;
struct TYPE_9__ {int lock; TYPE_1__ vp; TYPE_2__ dev; int refs; } ;
typedef TYPE_3__ aout_owner_t ;
struct TYPE_10__ {struct TYPE_10__* name; struct TYPE_10__* next; } ;
typedef TYPE_4__ aout_dev_t ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(audio_output_t *VAR_2)
{
    aout_owner_t *VAR_3 = FUNC_1(VAR_2);

    if (FUNC_2(&VAR_3->refs, 1, VAR_1))
        return;

    FUNC_3(VAR_0);

    FUNC_5 (&VAR_3->dev.lock);
    for (aout_dev_t *VAR_4 = VAR_3->dev.list, *VAR_5; VAR_4 != ((void*)0); VAR_4 = VAR_5)
    {
        VAR_5 = VAR_4->next;
        FUNC_4 (VAR_4->name);
        FUNC_4 (VAR_4);
    }

    FUNC_5 (&VAR_3->vp.lock);
    FUNC_5 (&VAR_3->lock);
    FUNC_6(FUNC_0(VAR_2));
}
