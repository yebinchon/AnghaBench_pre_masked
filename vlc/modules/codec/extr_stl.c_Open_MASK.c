
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {scalar_t__ i_codec; } ;
struct TYPE_11__ {scalar_t__ i_codec; } ;
struct TYPE_12__ {TYPE_2__ fmt_out; int pf_decode; TYPE_5__* p_sys; TYPE_3__ fmt_in; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_13__ {TYPE_1__* groups; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_9__ {int p_segment; int * pp_segment_last; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(vlc_object_t *VAR_6)
{
    decoder_t *VAR_7 = (decoder_t*)VAR_6;

    if (VAR_7->fmt_in.i_codec != VAR_2)
        return VAR_3;

    decoder_sys_t *VAR_8 = FUNC_1(1, sizeof(*VAR_8));
    if (!VAR_8)
        return VAR_4;

    int VAR_9 = FUNC_0(VAR_7, VAR_8);
    if (VAR_5 != VAR_9)
        return VAR_9;

    for(size_t VAR_10=0; VAR_10<=VAR_1; VAR_10++)
        VAR_8->groups[VAR_10].pp_segment_last = &VAR_8->groups[VAR_10].p_segment;

    VAR_7->p_sys = VAR_8;
    VAR_7->pf_decode = VAR_0;
    VAR_7->fmt_out.i_codec = 0;
    return VAR_5;
}
