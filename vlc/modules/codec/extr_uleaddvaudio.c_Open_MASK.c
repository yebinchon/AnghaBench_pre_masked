
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {scalar_t__ i_rate; int i_channels; int i_physical_channels; } ;
struct TYPE_11__ {TYPE_3__ audio; int i_codec; } ;
struct TYPE_8__ {int i_bitspersample; int i_channels; scalar_t__ i_rate; } ;
struct TYPE_9__ {scalar_t__ i_codec; TYPE_1__ audio; } ;
struct TYPE_12__ {int pf_flush; int pf_decode; TYPE_4__ fmt_out; TYPE_2__ fmt_in; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_13__ {int is_pal; int is_12bit; int* shuffle; int end_date; } ;
typedef TYPE_6__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 TYPE_6__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(vlc_object_t *VAR_10)
{
    decoder_t *VAR_11 = (decoder_t*)VAR_10;

    if (VAR_11->fmt_in.i_codec != VAR_5 &&
        VAR_11->fmt_in.i_codec != VAR_6)
        return VAR_7;
    if (VAR_11->fmt_in.audio.i_bitspersample != 12 && VAR_11->fmt_in.audio.i_bitspersample != 16)
        return VAR_7;
    if (VAR_11->fmt_in.audio.i_channels != 2)
        return VAR_7;
    if (VAR_11->fmt_in.audio.i_rate <= 0)
        return VAR_7;

    decoder_sys_t *VAR_12 = VAR_11->p_sys = FUNC_1(sizeof(*VAR_12));
    if (!VAR_12)
        return VAR_8;

    VAR_12->is_pal = VAR_11->fmt_in.i_codec == VAR_6;
    VAR_12->is_12bit = VAR_11->fmt_in.audio.i_bitspersample == 12;

    FUNC_0(&VAR_12->end_date, VAR_11->fmt_in.audio.i_rate, 1);

    for (unsigned VAR_13 = 0; VAR_13 < sizeof(VAR_12->shuffle) / sizeof(*VAR_12->shuffle); VAR_13++) {
        const unsigned VAR_14 = VAR_12->is_pal ? 18 : 15;
        const unsigned VAR_15 = 3 * VAR_14;
        VAR_12->shuffle[VAR_13] = 80 * ((21 * (VAR_13 % 3) + 9 * (VAR_13 / 3) + ((VAR_13 / VAR_14) % 3)) % VAR_15) +
                          (2 + VAR_12->is_12bit) * (VAR_13 / VAR_15) + 8;
    }

    VAR_11->fmt_out.i_codec = VAR_4;
    VAR_11->fmt_out.audio.i_rate = VAR_11->fmt_in.audio.i_rate;
    VAR_11->fmt_out.audio.i_channels = 2;
    VAR_11->fmt_out.audio.i_physical_channels = VAR_0 | VAR_1;

    VAR_11->pf_decode = VAR_2;
    VAR_11->pf_flush = VAR_3;

    return VAR_9;
}
