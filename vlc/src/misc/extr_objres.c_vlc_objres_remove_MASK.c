
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct vlc_res {void* payload; struct vlc_res* prev; int (* release ) (void*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vlc_res*) ;
 int FUNC_2 (void*) ;
 struct vlc_res** FUNC_3 (int *) ;

void FUNC_4(vlc_object_t *VAR_0, void *VAR_1,
                       bool (*VAR_2)(void *, void *))
{
    struct vlc_res **restrict VAR_3 = FUNC_3(VAR_0);
    for (;;)
    {
        struct vlc_res *VAR_4 = *VAR_3;

        FUNC_0(VAR_4 != ((void*)0));

        if (VAR_2(VAR_4->payload, VAR_1))
        {
            *VAR_3 = VAR_4->prev;
            VAR_4->release(VAR_4->payload);
            FUNC_1(VAR_4);
            return;
        }

        VAR_3 = &VAR_4->prev;
    }
}
