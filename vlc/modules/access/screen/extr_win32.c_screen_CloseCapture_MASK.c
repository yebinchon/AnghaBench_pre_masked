
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hdc_src; int hdc_dst; scalar_t__ hgdi_backup; scalar_t__ p_block; } ;
typedef TYPE_1__ screen_data_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {TYPE_1__* p_data; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    screen_data_t *VAR_3 = VAR_2->p_data;

    if( VAR_3->p_block ) FUNC_3( VAR_3->p_block );

    if( VAR_3->hgdi_backup)
        FUNC_2( VAR_3->hdc_dst, VAR_3->hgdi_backup );

    FUNC_0( VAR_3->hdc_dst );
    FUNC_1( 0, VAR_3->hdc_src );
    FUNC_4( VAR_3 );

    return VAR_0;
}
