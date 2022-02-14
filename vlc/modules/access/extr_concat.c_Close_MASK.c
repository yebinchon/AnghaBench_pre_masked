
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct access_entry {struct access_entry* next; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {struct access_entry* first; int * access; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (struct access_entry*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(vlc_object_t *VAR_0)
{
    stream_t *VAR_1 = (stream_t *)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    if (VAR_2->access != ((void*)0))
        FUNC_2(VAR_2->access);

    for (struct access_entry *VAR_3 = VAR_2->first, *VAR_4; VAR_3 != ((void*)0); VAR_3 = VAR_4)
    {
        VAR_4 = VAR_3->next;
        FUNC_0(VAR_3);
    }

    FUNC_1(VAR_1, "concat-list");
}
