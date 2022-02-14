
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vlc_threadvar* vlc_threadvar_t ;
struct vlc_threadvar {scalar_t__ id; void (* destroy ) (void*) ;struct vlc_threadvar* next; struct vlc_threadvar* prev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (struct vlc_threadvar*) ;
 struct vlc_threadvar* FUNC_4 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 struct vlc_threadvar* VAR_4 ;

int FUNC_6 (vlc_threadvar_t *VAR_5, void (*VAR_6) (void *))
{
    struct vlc_threadvar *VAR_7 = FUNC_4 (sizeof (*VAR_7));
    if (FUNC_5(VAR_7 == ((void*)0)))
        return VAR_2;

    VAR_7->id = FUNC_2();
    if (VAR_7->id == VAR_1)
    {
        FUNC_3 (VAR_7);
        return VAR_0;
    }
    VAR_7->destroy = VAR_6;
    VAR_7->next = ((void*)0);
    *VAR_5 = VAR_7;

    FUNC_0(&VAR_3);
    VAR_7->prev = VAR_4;
    if (VAR_7->prev)
        VAR_7->prev->next = VAR_7;

    VAR_4 = VAR_7;
    FUNC_1(&VAR_3);
    return 0;
}
