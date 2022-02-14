
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {struct TYPE_7__* data; struct TYPE_7__* next; } ;
typedef TYPE_1__ session_descriptor_t ;
struct TYPE_8__ {int lock; int wait; int session_count; TYPE_1__* first; struct TYPE_8__* next; } ;
typedef TYPE_2__ sap_address_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7 (vlc_object_t *VAR_2, session_descriptor_t *VAR_3)
{
    sap_address_t *VAR_4, **VAR_5;
    session_descriptor_t **VAR_6;

    FUNC_3 (VAR_2, "removing SAP session");
    FUNC_5 (&VAR_1);
    VAR_5 = &VAR_0;
    for (;;)
    {
        VAR_4 = *VAR_5;
        FUNC_1 (VAR_4 != ((void*)0));

        VAR_6 = &VAR_4->first;
        FUNC_5 (&VAR_4->lock);
        while (*VAR_6 != ((void*)0))
        {
            if (*VAR_6 == VAR_3)
                goto found;
            VAR_6 = &(*VAR_6)->next;
        }
        FUNC_6 (&VAR_4->lock);
        VAR_5 = &VAR_4->next;
    }

found:
    *VAR_6 = VAR_3->next;

    if (VAR_4->first == ((void*)0))

        *VAR_5 = VAR_4->next;
    FUNC_6 (&VAR_1);

    if (VAR_4->first == ((void*)0))
    {

        FUNC_6 (&VAR_4->lock);
        FUNC_0 (VAR_4);
    }
    else
    {
        VAR_4->session_count--;
        FUNC_4 (&VAR_4->wait);
        FUNC_6 (&VAR_4->lock);
    }

    FUNC_2(VAR_3->data);
    FUNC_2(VAR_3);
}
