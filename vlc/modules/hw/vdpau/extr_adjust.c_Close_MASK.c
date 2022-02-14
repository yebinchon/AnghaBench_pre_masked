
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {int brightness; int contrast; int saturation; int hue; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int *) ;

__attribute__((used)) static void FUNC_2(vlc_object_t *VAR_4)
{
    filter_t *VAR_5 = (filter_t *)VAR_4;
    filter_sys_t *VAR_6 = VAR_5->p_sys;

    FUNC_1(VAR_5, "hue", VAR_2, &VAR_6->hue);
    FUNC_1(VAR_5, "saturation", VAR_3,
                    &VAR_6->saturation);
    FUNC_1(VAR_5, "contrast", VAR_1, &VAR_6->contrast);
    FUNC_1(VAR_5, "brightness", VAR_0,
                    &VAR_6->brightness);
    FUNC_0(VAR_6);
}
