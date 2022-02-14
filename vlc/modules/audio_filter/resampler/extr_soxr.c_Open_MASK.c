
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int soxr_quality_spec_t ;
typedef int soxr_io_spec_t ;
typedef scalar_t__ soxr_error_t ;
typedef int soxr_datatype_t ;
typedef size_t int64_t ;
struct TYPE_13__ {unsigned int i_channels; double i_rate; int i_format; } ;
struct TYPE_14__ {TYPE_3__ audio; } ;
struct TYPE_11__ {unsigned int i_channels; scalar_t__ i_rate; int i_format; } ;
struct TYPE_12__ {TYPE_1__ audio; } ;
struct TYPE_15__ {int pf_audio_drain; int pf_flush; int pf_audio_filter; TYPE_6__* p_sys; TYPE_4__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_16__ {double f_fixed_ratio; void* soxr; void* vr_soxr; } ;
typedef TYPE_6__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 unsigned long const VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,char*,int ,int ,char const*,scalar_t__,char const*,double) ;
 int FUNC_4 (TYPE_5__*,char*,int ) ;
 void* FUNC_5 (int,double const,unsigned int const,scalar_t__*,int *,int *,int *) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (unsigned long const,int ) ;
 unsigned long* VAR_9 ;
 int * VAR_10 ;
 int FUNC_10 (void*,int,int ) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 size_t FUNC_13 (int *,char*) ;

__attribute__((used)) static int
FUNC_14( vlc_object_t *VAR_11, bool VAR_12 )
{
    filter_t *VAR_13 = (filter_t *)VAR_11;


    if( VAR_13->fmt_in.audio.i_channels != VAR_13->fmt_out.audio.i_channels )
        return VAR_6;


    soxr_datatype_t VAR_14, VAR_15;
    if( !FUNC_0( VAR_13->fmt_in.audio.i_format, &VAR_14 )
     || !FUNC_0( VAR_13->fmt_out.audio.i_format, &VAR_15 ) )
        return VAR_6;

    filter_sys_t *VAR_16 = FUNC_1( 1, sizeof( filter_sys_t ) );
    if( FUNC_12( VAR_16 == ((void*)0) ) )
        return VAR_7;


    int64_t VAR_17 = FUNC_13( VAR_11, "soxr-resampler-quality" );
    if( VAR_17 < 0 )
        VAR_17 = 0;
    else if( VAR_17 > VAR_2 )
        VAR_17 = VAR_2;
    const unsigned long VAR_18 = VAR_9[VAR_17];
    const unsigned VAR_19 = VAR_13->fmt_in.audio.i_channels;
    const double VAR_20 = VAR_13->fmt_out.audio.i_rate
                           / (double) VAR_13->fmt_in.audio.i_rate;

    VAR_16->f_fixed_ratio = VAR_20;
    soxr_error_t VAR_21;

    soxr_io_spec_t VAR_22 = FUNC_8( VAR_14, VAR_15 );

    soxr_quality_spec_t VAR_23 = FUNC_9( VAR_18, 0 );

    VAR_16->soxr = FUNC_5( 1, VAR_20, VAR_19,
                               &VAR_21, &VAR_22, &VAR_23, ((void*)0) );
    if( VAR_21 )
    {
        FUNC_4( VAR_13, "soxr_create failed: %s", FUNC_11( VAR_21 ) );
        FUNC_2( VAR_16 );
        return VAR_6;
    }




    if( VAR_12 )
    {
        VAR_23 = FUNC_9( VAR_4, VAR_5 );
        VAR_16->vr_soxr = FUNC_5( 1, VAR_20, VAR_19,
                                      &VAR_21, &VAR_22, &VAR_23, ((void*)0) );
        if( VAR_21 )
        {
            FUNC_4( VAR_13, "soxr_create failed: %s", FUNC_11( VAR_21 ) );
            FUNC_6( VAR_16->soxr );
            FUNC_2( VAR_16 );
            return VAR_6;
        }
        FUNC_10( VAR_16->vr_soxr, 1 / VAR_20, 0 );
    }

    FUNC_3( VAR_13, "Using SoX Resampler with '%s' engine and '%s' quality "
             "to convert %4.4s/%dHz to %4.4s/%dHz.",
             FUNC_7( VAR_16->soxr ), VAR_10[VAR_17],
             (const char *)&VAR_13->fmt_in.audio.i_format,
             VAR_13->fmt_in.audio.i_rate,
             (const char *)&VAR_13->fmt_out.audio.i_format,
             VAR_13->fmt_out.audio.i_rate );

    VAR_13->p_sys = VAR_16;
    VAR_13->pf_audio_filter = VAR_3;
    VAR_13->pf_flush = VAR_1;
    VAR_13->pf_audio_drain = VAR_0;
    return VAR_8;
}
