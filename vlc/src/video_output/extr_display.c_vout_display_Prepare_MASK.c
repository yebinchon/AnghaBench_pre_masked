
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* prepare ) (TYPE_1__*,int *,int *,int ) ;} ;
typedef TYPE_1__ vout_display_t ;
typedef int vlc_tick_t ;
typedef int subpicture_t ;
typedef int picture_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int ) ;
 int * FUNC_2 (TYPE_1__*,int *) ;

picture_t *FUNC_3(vout_display_t *VAR_0, picture_t *VAR_1,
                                subpicture_t *VAR_2, vlc_tick_t VAR_3)
{
    FUNC_0(VAR_2 == ((void*)0));
    VAR_1 = FUNC_2(VAR_0, VAR_1);

    if (VAR_1 != ((void*)0) && VAR_0->prepare != ((void*)0))
        VAR_0->prepare(VAR_0, VAR_1, VAR_2, VAR_3);
    return VAR_1;
}
