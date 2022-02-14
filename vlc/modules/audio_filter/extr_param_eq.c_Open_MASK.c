
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {unsigned int i_rate; int i_channels; int i_format; } ;
struct TYPE_9__ {TYPE_2__ audio; } ;
struct TYPE_7__ {TYPE_2__ audio; } ;
struct TYPE_10__ {TYPE_3__ fmt_in; int pf_audio_filter; TYPE_1__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_11__ {float* p_state; scalar_t__ coeffs; void* f_highgain; void* f_highf; void* f_lowgain; void* f_lowf; void* f_gain3; void* f_Q3; void* f_f3; void* f_gain2; void* f_Q2; void* f_f2; void* f_gain1; void* f_Q1; void* f_f1; } ;
typedef TYPE_5__ filter_sys_t ;


 int FUNC_0 (void*,void*,void*,unsigned int,scalar_t__) ;
 int FUNC_1 (void*,int,void*,int ,unsigned int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int) ;
 TYPE_5__* FUNC_3 (int) ;
 void* FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_4 )
{
    filter_t *VAR_5 = (filter_t *)VAR_4;
    unsigned VAR_6;


    filter_sys_t *VAR_7 = VAR_5->p_sys = FUNC_3( sizeof( *VAR_7 ) );
    if( !VAR_7 )
        return VAR_2;

    VAR_5->fmt_in.audio.i_format = VAR_1;
    VAR_5->fmt_out.audio = VAR_5->fmt_in.audio;
    VAR_5->pf_audio_filter = VAR_0;

    VAR_7->f_lowf = FUNC_4( VAR_4, "param-eq-lowf");
    VAR_7->f_lowgain = FUNC_4( VAR_4, "param-eq-lowgain");
    VAR_7->f_highf = FUNC_4( VAR_4, "param-eq-highf");
    VAR_7->f_highgain = FUNC_4( VAR_4, "param-eq-highgain");

    VAR_7->f_f1 = FUNC_4( VAR_4, "param-eq-f1");
    VAR_7->f_Q1 = FUNC_4( VAR_4, "param-eq-q1");
    VAR_7->f_gain1 = FUNC_4( VAR_4, "param-eq-gain1");

    VAR_7->f_f2 = FUNC_4( VAR_4, "param-eq-f2");
    VAR_7->f_Q2 = FUNC_4( VAR_4, "param-eq-q2");
    VAR_7->f_gain2 = FUNC_4( VAR_4, "param-eq-gain2");

    VAR_7->f_f3 = FUNC_4( VAR_4, "param-eq-f3");
    VAR_7->f_Q3 = FUNC_4( VAR_4, "param-eq-q3");
    VAR_7->f_gain3 = FUNC_4( VAR_4, "param-eq-gain3");


    VAR_6 = VAR_5->fmt_in.audio.i_rate;
    FUNC_0(VAR_7->f_f1, VAR_7->f_Q1, VAR_7->f_gain1,
                     VAR_6, VAR_7->coeffs+0*5);
    FUNC_0(VAR_7->f_f2, VAR_7->f_Q2, VAR_7->f_gain2,
                     VAR_6, VAR_7->coeffs+1*5);
    FUNC_0(VAR_7->f_f3, VAR_7->f_Q3, VAR_7->f_gain3,
                     VAR_6, VAR_7->coeffs+2*5);
    FUNC_1(VAR_7->f_lowf, 1, VAR_7->f_lowgain, 0,
                      VAR_6, VAR_7->coeffs+3*5);
    FUNC_1(VAR_7->f_highf, 1, VAR_7->f_highgain, 0,
                      VAR_6, VAR_7->coeffs+4*5);
    VAR_7->p_state = (float*)FUNC_2( VAR_5->fmt_in.audio.i_channels*5*4,
                                     sizeof(float) );

    return VAR_3;
}
