
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vlc_threadvar_t ;
struct TYPE_5__ {int (* destroy ) (void*) ;struct TYPE_5__* prev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 void* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_5(void)
{
    vlc_threadvar_t VAR_2;
retry:

    FUNC_0(&VAR_0);
    for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->prev)
    {
        void *VAR_3 = FUNC_3(VAR_2);
        if (VAR_3 != ((void*)0) && VAR_2->destroy != ((void*)0))
        {
            FUNC_1(&VAR_0);
            FUNC_4(VAR_2, ((void*)0));
            VAR_2->destroy(VAR_3);
            goto retry;
        }
    }
    FUNC_1(&VAR_0);
}
