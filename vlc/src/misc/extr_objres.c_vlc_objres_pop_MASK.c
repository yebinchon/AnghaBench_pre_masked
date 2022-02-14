
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct vlc_res {void* payload; struct vlc_res* prev; } ;


 struct vlc_res** FUNC_0 (int *) ;

__attribute__((used)) static void *FUNC_1(vlc_object_t *VAR_0)
{
    struct vlc_res **restrict VAR_1 = FUNC_0(VAR_0);
    struct vlc_res *VAR_2 = *VAR_1;

    if (VAR_2 == ((void*)0))
        return ((void*)0);
    *VAR_1 = VAR_2->prev;
    return VAR_2->payload;
}
