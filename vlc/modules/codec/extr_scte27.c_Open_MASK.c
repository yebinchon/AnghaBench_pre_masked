
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int i_codec; } ;
struct TYPE_7__ {scalar_t__ i_codec; } ;
struct TYPE_8__ {TYPE_1__ fmt_out; int pf_decode; TYPE_4__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {int segment_id; int * segment_buffer; scalar_t__ segment_size; } ;
typedef TYPE_4__ decoder_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(vlc_object_t *VAR_6)
{
    decoder_t *VAR_7 = (decoder_t *)VAR_6;

    if (VAR_7->fmt_in.i_codec != VAR_1)
        return VAR_3;

    decoder_sys_t *VAR_8 = VAR_7->p_sys = FUNC_0(sizeof(*VAR_8));
    if (!VAR_8)
        return VAR_4;
    VAR_8->segment_id = -1;
    VAR_8->segment_size = 0;
    VAR_8->segment_buffer = ((void*)0);

    VAR_7->pf_decode = VAR_0;
    VAR_7->fmt_out.i_codec = VAR_2;

    return VAR_5;
}
