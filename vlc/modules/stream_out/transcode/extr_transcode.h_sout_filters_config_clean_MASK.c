
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ psz_spu_sources; int p_deinterlace_cfg; scalar_t__ psz_deinterlace; } ;
struct TYPE_5__ {TYPE_1__ video; scalar_t__ psz_filters; } ;
typedef TYPE_2__ sout_filters_config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline
void FUNC_2( sout_filters_config_t *VAR_0 )
{
    FUNC_1( VAR_0->psz_filters );
    if( VAR_0->video.psz_deinterlace )
    {
        FUNC_1( VAR_0->video.psz_deinterlace );
        FUNC_0( VAR_0->video.p_deinterlace_cfg );
    }
    FUNC_1( VAR_0->video.psz_spu_sources );
}
