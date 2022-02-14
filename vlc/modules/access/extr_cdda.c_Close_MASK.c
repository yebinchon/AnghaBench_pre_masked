
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vcddev_t ;
struct TYPE_2__ {int * pf_readdir; void* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(vlc_object_t *VAR_3)
{
    stream_t *VAR_4 = (stream_t *)VAR_3;
    void *VAR_5 = VAR_4->p_sys;

    if (VAR_4->pf_readdir != ((void*)0))
        FUNC_0(VAR_5);

    FUNC_3(FUNC_2(VAR_1, VAR_2) == 0, "Invalid cast");
    FUNC_3(FUNC_2(VAR_0, VAR_2) == 0, "Invalid cast");
    FUNC_1(VAR_3, *(vcddev_t **)VAR_5);
}
