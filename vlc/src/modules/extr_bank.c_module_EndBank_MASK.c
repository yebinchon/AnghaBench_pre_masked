
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ vlc_plugin_t ;
typedef int block_t ;
struct TYPE_7__ {scalar_t__ usage; int lock; int * caps_tree; int * caches; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_4 (void*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

void FUNC_9 (bool VAR_3)
{
    vlc_plugin_t *VAR_4 = ((void*)0);
    block_t *VAR_5 = ((void*)0);
    void *VAR_6 = ((void*)0);



    if( VAR_3 )
        FUNC_6 (&VAR_0.lock);
    else
        FUNC_5(&VAR_0.lock);

    FUNC_0 (VAR_0.usage > 0);
    if (--VAR_0.usage == 0)
    {
        FUNC_2 ();
        VAR_4 = VAR_2;
        VAR_5 = VAR_0.caches;
        VAR_6 = VAR_0.caps_tree;
        VAR_2 = ((void*)0);
        VAR_0.caches = ((void*)0);
        VAR_0.caps_tree = ((void*)0);
    }
    FUNC_7 (&VAR_0.lock);

    FUNC_4(VAR_6, VAR_1);

    while (VAR_4 != ((void*)0))
    {
        vlc_plugin_t *VAR_7 = VAR_4;

        VAR_4 = VAR_7->next;
        FUNC_3(VAR_7);
        FUNC_8(VAR_7);
    }

    FUNC_1(VAR_5);
}
