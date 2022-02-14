
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {unsigned int optflagc; int* optflagv; int lock; TYPE_2__* opaques; int * ppsz_options; scalar_t__ i_options; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_5__ {int value; int name; struct TYPE_5__* next; } ;
typedef TYPE_2__ input_item_opaque_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(vlc_object_t *VAR_2, input_item_t *VAR_3)
{
    FUNC_4(&VAR_3->lock);
    FUNC_0(VAR_3->optflagc == (unsigned)VAR_3->i_options);

    for (unsigned VAR_4 = 0; VAR_4 < (unsigned)VAR_3->i_options; VAR_4++)
        FUNC_2(VAR_2, VAR_3->ppsz_options[VAR_4],
                        !!(VAR_3->optflagv[VAR_4] & VAR_0));

    for (const input_item_opaque_t *VAR_5 = VAR_3->opaques; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
        FUNC_1(VAR_2, VAR_5->name, VAR_1);
        FUNC_3(VAR_2, VAR_5->name, VAR_5->value);
    }

    FUNC_5(&VAR_3->lock);
}
