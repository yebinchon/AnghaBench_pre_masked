
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ i_chroma; scalar_t__ i_width; scalar_t__ i_height; } ;
struct TYPE_12__ {TYPE_3__ fmt; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_13__ {scalar_t__ i_chroma; scalar_t__ i_width; scalar_t__ i_height; } ;
typedef TYPE_5__ video_format_t ;
typedef int picture_t ;
typedef int picture_pool_t ;
struct TYPE_10__ {TYPE_5__ video; } ;
struct TYPE_9__ {TYPE_4__* sys; } ;
struct TYPE_14__ {TYPE_2__ fmt_out; TYPE_1__ owner; } ;
typedef TYPE_6__ filter_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static picture_t *FUNC_3(filter_t *VAR_0)
{
    vout_display_t *VAR_1 = VAR_0->owner.sys;
    const video_format_t *VAR_2 = &VAR_0->fmt_out.video;

    FUNC_0(VAR_1->fmt.i_chroma == VAR_2->i_chroma &&
           VAR_1->fmt.i_width == VAR_2->i_width &&
           VAR_1->fmt.i_height == VAR_2->i_height);

    picture_pool_t *VAR_3 = FUNC_2(VAR_1, 3);
    if (!VAR_3)
        return ((void*)0);
    return FUNC_1(VAR_3);
}
