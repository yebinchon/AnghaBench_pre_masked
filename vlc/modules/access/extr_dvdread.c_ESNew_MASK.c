
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int * palette; } ;
struct TYPE_13__ {TYPE_2__ spu; } ;
struct TYPE_11__ {int i_sar_den; int i_sar_num; } ;
struct TYPE_17__ {scalar_t__ i_cat; void* psz_language; TYPE_3__ subs; TYPE_1__ video; } ;
struct TYPE_14__ {int b_configured; TYPE_9__ fmt; int es; } ;
typedef TYPE_4__ ps_track_t ;
typedef char i_lang ;
struct TYPE_15__ {int out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_16__ {int clut; int i_sar_den; int i_sar_num; TYPE_4__* tk; } ;
typedef TYPE_6__ demux_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_9__*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_5__*,char*,int) ;
 size_t FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int,int *,int ,int) ;
 void* FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6( demux_t *VAR_4, int VAR_5, int VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_4->p_sys;
    ps_track_t *VAR_8 = &VAR_7->tk[FUNC_3(VAR_5)];
    char VAR_9[3];

    if( VAR_8->b_configured ) return;

    if( FUNC_4( VAR_8, 0, VAR_5, ((void*)0), 0, 1 ) )
    {
        FUNC_2( VAR_4, "unknown codec for id=0x%x", VAR_5 );
        return;
    }

    VAR_9[0] = VAR_9[1] = VAR_9[2] = 0;
    if( VAR_6 && VAR_6 != 0xffff )
    {
        VAR_9[0] = (VAR_6 >> 8)&0xff;
        VAR_9[1] = (VAR_6 )&0xff;
    }


    if( VAR_8->fmt.i_cat == VAR_3 )
    {
        VAR_8->fmt.video.i_sar_num = VAR_7->i_sar_num;
        VAR_8->fmt.video.i_sar_den = VAR_7->i_sar_den;
    }
    else if( VAR_8->fmt.i_cat == VAR_0 )
    {
        if( VAR_9[0] ) VAR_8->fmt.psz_language = FUNC_5( VAR_9 );
    }
    else if( VAR_8->fmt.i_cat == VAR_1 )
    {

        VAR_8->fmt.subs.spu.palette[0] = VAR_2;
        FUNC_1( &VAR_8->fmt.subs.spu.palette[1], VAR_7->clut,
                16 * sizeof( uint32_t ) );

        if( VAR_9[0] ) VAR_8->fmt.psz_language = FUNC_5( VAR_9 );
    }

    VAR_8->es = FUNC_0( VAR_4->out, &VAR_8->fmt );
    VAR_8->b_configured = 1;
}
