
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* copy ) (TYPE_4__*) ;} ;
struct TYPE_5__ {TYPE_4__ context; } ;
typedef TYPE_1__ vlc_vdp_video_field_t ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static inline vlc_vdp_video_field_t *FUNC_1(
    vlc_vdp_video_field_t *VAR_0)
{
    return (vlc_vdp_video_field_t *)VAR_0->context.copy(&VAR_0->context);
}
