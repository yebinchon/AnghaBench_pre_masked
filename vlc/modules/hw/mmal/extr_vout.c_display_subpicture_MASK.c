
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vout_display_t ;
struct TYPE_15__ {struct dmx_region_t* dmx_region; } ;
typedef TYPE_4__ vout_display_sys_t ;
struct TYPE_16__ {scalar_t__ i_visible_height; scalar_t__ i_visible_width; } ;
typedef TYPE_5__ video_format_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_17__ {TYPE_7__* p_region; } ;
typedef TYPE_6__ subpicture_t ;
struct TYPE_18__ {scalar_t__ i_x; scalar_t__ i_y; struct TYPE_18__* p_next; scalar_t__ i_alpha; TYPE_5__ fmt; int * p_picture; } ;
typedef TYPE_7__ subpicture_region_t ;
struct TYPE_13__ {scalar_t__ opacity; } ;
struct TYPE_12__ {scalar_t__ width; scalar_t__ height; } ;
struct dmx_region_t {scalar_t__ pos_x; scalar_t__ pos_y; struct dmx_region_t* next; int * picture; TYPE_2__ alpha; TYPE_1__ bmp_rect; } ;
typedef int picture_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ DISPMANX_UPDATE_HANDLE_T ;


 int FUNC_0 (struct dmx_region_t*,scalar_t__) ;
 struct dmx_region_t* FUNC_1 (TYPE_3__*,scalar_t__,TYPE_7__*) ;
 int FUNC_2 (struct dmx_region_t*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(vout_display_t *VAR_0, subpicture_t *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0->sys;
    struct dmx_region_t **VAR_3 = &VAR_2->dmx_region;
    struct dmx_region_t *VAR_4;
    DISPMANX_UPDATE_HANDLE_T VAR_5 = 0;
    picture_t *VAR_6;
    video_format_t *VAR_7;
    struct dmx_region_t *VAR_8;

    if(VAR_1) {
        subpicture_region_t *VAR_9 = VAR_1->p_region;
        while(VAR_9) {
            VAR_6 = VAR_9->p_picture;
            VAR_7 = &VAR_9->fmt;

            if(!*VAR_3) {
                if(!VAR_5)
                    VAR_5 = FUNC_3(10);
                *VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_9);
            } else if(((*VAR_3)->bmp_rect.width != (int32_t)VAR_7->i_visible_width) ||
                    ((*VAR_3)->bmp_rect.height != (int32_t)VAR_7->i_visible_height) ||
                    ((*VAR_3)->pos_x != VAR_9->i_x) ||
                    ((*VAR_3)->pos_y != VAR_9->i_y) ||
                    ((*VAR_3)->alpha.opacity != (uint32_t)VAR_9->i_alpha)) {
                VAR_8 = (*VAR_3)->next;
                if(!VAR_5)
                    VAR_5 = FUNC_3(10);
                FUNC_0(*VAR_3, VAR_5);
                *VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_9);
                (*VAR_3)->next = VAR_8;
            } else if((*VAR_3)->picture != VAR_6) {
                if(!VAR_5)
                    VAR_5 = FUNC_3(10);
                FUNC_2(*VAR_3, VAR_5, VAR_6);
            }

            VAR_3 = &(*VAR_3)->next;
            VAR_9 = VAR_9->p_next;
        }
    }


    VAR_4 = *VAR_3;
    while(VAR_4) {
        VAR_8 = VAR_4->next;
        if(!VAR_5)
            VAR_5 = FUNC_3(10);
        FUNC_0(VAR_4, VAR_5);
        VAR_4 = VAR_8;
    }
    *VAR_3 = ((void*)0);

    if(VAR_5)
        FUNC_4(VAR_5);
}
