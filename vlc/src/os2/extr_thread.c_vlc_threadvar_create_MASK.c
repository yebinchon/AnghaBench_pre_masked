
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vlc_threadvar* vlc_threadvar_t ;
struct vlc_threadvar {void (* destroy ) (void*) ;struct vlc_threadvar* next; struct vlc_threadvar* prev; int id; } ;
typedef scalar_t__ ULONG ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vlc_threadvar*) ;
 struct vlc_threadvar* FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct vlc_threadvar* VAR_3 ;

int FUNC_6 (vlc_threadvar_t *VAR_4, void (*VAR_5) (void *))
{
    ULONG VAR_6;

    struct vlc_threadvar *VAR_7 = FUNC_2 (sizeof (*VAR_7));
    if (FUNC_3(VAR_7 == ((void*)0)))
        return VAR_1;

    VAR_6 = FUNC_0( 1, &VAR_7->id );
    if( VAR_6 )
    {
        FUNC_1 (VAR_7);
        return VAR_0;
    }

    VAR_7->destroy = VAR_5;
    VAR_7->next = ((void*)0);
    *VAR_4 = VAR_7;

    FUNC_4 (&VAR_2);
    VAR_7->prev = VAR_3;
    if (VAR_7->prev)
        VAR_7->prev->next = VAR_7;

    VAR_3 = VAR_7;
    FUNC_5 (&VAR_2);
    return 0;
}
