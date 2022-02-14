
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_11__ {int p_libvlc_int; } ;
typedef TYPE_2__ libvlc_instance_t ;
struct TYPE_10__ {unsigned int i_frame_rate; unsigned int i_frame_rate_base; } ;
struct TYPE_13__ {int b_packetized; TYPE_1__ video; } ;
struct TYPE_12__ {int p_module; TYPE_6__ fmt_in; TYPE_6__ fmt_out; int * pf_packetize; int * pf_decode; } ;
typedef TYPE_3__ decoder_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_6__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,char*,int *,int) ;
 TYPE_3__* FUNC_3 (int ,int) ;

__attribute__((used)) static decoder_t *FUNC_4(libvlc_instance_t *VAR_1,
                                    unsigned VAR_2, unsigned VAR_3,
                                    vlc_fourcc_t VAR_4)
{
    decoder_t *VAR_5 = FUNC_3(VAR_1->p_libvlc_int,
                                          sizeof(*VAR_5));
    if(!VAR_5)
        return ((void*)0);
    VAR_5->pf_decode = ((void*)0);
    VAR_5->pf_packetize = ((void*)0);

    FUNC_1(&VAR_5->fmt_in, VAR_0, VAR_4);
    FUNC_1(&VAR_5->fmt_out, VAR_0, 0);
    VAR_5->fmt_in.video.i_frame_rate = VAR_2;
    VAR_5->fmt_in.video.i_frame_rate_base = VAR_3;
    VAR_5->fmt_in.b_packetized = 0;

    VAR_5->p_module = FUNC_2( VAR_5, "packetizer", ((void*)0), 0 );
    if(!VAR_5->p_module)
        FUNC_0(VAR_5);
    return VAR_5;
}
