
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_16__ {TYPE_8__* p_sys; } ;
typedef TYPE_7__ decoder_t ;
struct TYPE_12__ {int p_chain; } ;
struct TYPE_11__ {int p_chain; } ;
struct TYPE_10__ {int p_chain; } ;
struct TYPE_17__ {int p_ccs; int p_timing; TYPE_6__* rg_vps; TYPE_5__* rg_sps; TYPE_4__* rg_pps; TYPE_3__ post; TYPE_2__ pre; TYPE_1__ frame; int packetizer; } ;
typedef TYPE_8__ decoder_sys_t ;
struct TYPE_15__ {scalar_t__ p_nal; scalar_t__ p_decoded; } ;
struct TYPE_14__ {scalar_t__ p_nal; scalar_t__ p_decoded; } ;
struct TYPE_13__ {scalar_t__ p_nal; scalar_t__ p_decoded; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(vlc_object_t *VAR_3)
{
    decoder_t *VAR_4 = (decoder_t*)VAR_3;
    decoder_sys_t *VAR_5 = VAR_4->p_sys;
    FUNC_8(&VAR_5->packetizer);

    FUNC_0(VAR_5->frame.p_chain);
    FUNC_0(VAR_5->pre.p_chain);
    FUNC_0(VAR_5->post.p_chain);

    for(unsigned VAR_6=0;VAR_6<=VAR_0; VAR_6++)
    {
        if(VAR_5->rg_pps[VAR_6].p_decoded)
            FUNC_4(VAR_5->rg_pps[VAR_6].p_decoded);
        if(VAR_5->rg_pps[VAR_6].p_nal)
            FUNC_1(VAR_5->rg_pps[VAR_6].p_nal);
    }

    for(unsigned VAR_7=0;VAR_7<=VAR_1; VAR_7++)
    {
        if(VAR_5->rg_sps[VAR_7].p_decoded)
            FUNC_5(VAR_5->rg_sps[VAR_7].p_decoded);
        if(VAR_5->rg_sps[VAR_7].p_nal)
            FUNC_1(VAR_5->rg_sps[VAR_7].p_nal);
    }

    for(unsigned VAR_8=0;VAR_8<=VAR_2; VAR_8++)
    {
        if(VAR_5->rg_vps[VAR_8].p_decoded)
            FUNC_6(VAR_5->rg_vps[VAR_8].p_decoded);
        if(VAR_5->rg_vps[VAR_8].p_nal)
            FUNC_1(VAR_5->rg_vps[VAR_8].p_nal);
    }

    FUNC_7( VAR_5->p_timing );

    FUNC_2( VAR_5->p_ccs );

    FUNC_3(VAR_5);
}
