
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* destroy ) (TYPE_3__*) ;} ;
struct TYPE_4__ {TYPE_3__ context; } ;
typedef TYPE_1__ vlc_vdp_video_field_t ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_1(vlc_vdp_video_field_t *VAR_0)
{
    VAR_0->context.destroy(&VAR_0->context);
}
