
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_viewpoint_t ;
typedef int audio_output_t ;
struct TYPE_4__ {int lock; int update; int value; } ;
struct TYPE_5__ {TYPE_1__ vp; } ;
typedef TYPE_2__ aout_owner_t ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(audio_output_t *VAR_1,
                                 const vlc_viewpoint_t *VAR_2)
{
    aout_owner_t *VAR_3 = FUNC_0(VAR_1);

    FUNC_2(&VAR_3->vp.lock);
    VAR_3->vp.value = *VAR_2;
    FUNC_1(&VAR_3->vp.update, 1, VAR_0);
    FUNC_3(&VAR_3->vp.lock);
}
