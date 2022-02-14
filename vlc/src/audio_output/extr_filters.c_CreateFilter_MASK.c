
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_clock_t ;
struct TYPE_19__ {scalar_t__ i_physical_channels; scalar_t__ i_channels; int i_format; } ;
struct TYPE_17__ {TYPE_5__ audio; int i_codec; } ;
struct TYPE_16__ {TYPE_5__ audio; int i_codec; } ;
struct TYPE_15__ {int * sys; } ;
struct TYPE_18__ {int * pf_audio_filter; int * p_module; TYPE_3__ fmt_out; TYPE_2__ fmt_in; int * p_cfg; TYPE_1__ owner; } ;
typedef TYPE_4__ filter_t ;
typedef int config_chain_t ;
typedef TYPE_5__ audio_sample_format_t ;


 int FUNC_0 (TYPE_5__*,TYPE_5__ const*) ;
 scalar_t__ FUNC_1 (TYPE_5__ const*) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (TYPE_4__*,char const*,char const*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int *,int,char const*) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static filter_t *FUNC_7(vlc_object_t *VAR_0, vlc_clock_t *VAR_1,
                              const char *VAR_2, const char *VAR_3,
                              const audio_sample_format_t *VAR_4,
                              const audio_sample_format_t *VAR_5,
                              config_chain_t *VAR_6, bool VAR_7)
{
    filter_t *VAR_8 = FUNC_5 (VAR_0, sizeof (*VAR_8), VAR_2);
    if (FUNC_4(VAR_8 == ((void*)0)))
        return ((void*)0);

    VAR_8->owner.sys = VAR_1;
    VAR_8->p_cfg = VAR_6;
    VAR_8->fmt_in.audio = *VAR_4;
    VAR_8->fmt_in.i_codec = VAR_4->i_format;
    VAR_8->fmt_out.audio = *VAR_5;
    VAR_8->fmt_out.i_codec = VAR_5->i_format;




    if( VAR_4->i_physical_channels != 0 )
        FUNC_2( FUNC_1( VAR_4 ) == VAR_4->i_channels );
    if( VAR_5->i_physical_channels != 0 )
        FUNC_2( FUNC_1( VAR_5 ) == VAR_5->i_channels );


    VAR_8->p_module = FUNC_3 (VAR_8, VAR_2, VAR_3, 0);


    if (VAR_8->p_module == ((void*)0) || VAR_7)
    {

        FUNC_2 (FUNC_0(&VAR_8->fmt_in.audio, VAR_4));
        FUNC_2 (FUNC_0(&VAR_8->fmt_out.audio, VAR_5));
    }


    if (VAR_8->p_module == ((void*)0))
    {
        FUNC_6(VAR_8);
        VAR_8 = ((void*)0);
    }
    else
        FUNC_2 (VAR_8->pf_audio_filter != ((void*)0));
    return VAR_8;
}
