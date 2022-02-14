
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int * soxr_t ;
struct TYPE_22__ {scalar_t__ i_rate; } ;
struct TYPE_23__ {TYPE_3__ audio; } ;
struct TYPE_20__ {double i_rate; } ;
struct TYPE_21__ {TYPE_1__ audio; } ;
struct TYPE_24__ {TYPE_4__ fmt_in; TYPE_2__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_25__ {double const f_fixed_ratio; size_t const i_last_olen; int * soxr; int * last_soxr; int * vr_soxr; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_26__ {unsigned int i_nb_samples; int i_pts; } ;
typedef TYPE_7__ block_t ;


 size_t FUNC_0 (unsigned int,double const) ;
 TYPE_7__* FUNC_1 (TYPE_5__*,int *,TYPE_7__*,size_t const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__**,TYPE_7__*) ;
 TYPE_7__* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_5__*,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,size_t const) ;

__attribute__((used)) static block_t *
FUNC_9( filter_t *VAR_0, block_t *VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    const vlc_tick_t VAR_3 = VAR_1->i_pts;

    if( VAR_2->vr_soxr )
    {




        soxr_t VAR_4;
        block_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
        const double VAR_7 = VAR_0->fmt_out.audio.i_rate
                             / (double) VAR_0->fmt_in.audio.i_rate;
        const size_t VAR_8 = FUNC_0( VAR_1->i_nb_samples, VAR_7 );

        if( VAR_7 != VAR_2->f_fixed_ratio )
        {

            FUNC_8( VAR_2->vr_soxr, 1 / VAR_7, VAR_8 );
            VAR_4 = VAR_2->vr_soxr;
        }
        else if( VAR_7 == 1.0f )
        {

            VAR_4 = ((void*)0);
            VAR_6 = VAR_1;
        }
        else
        {

            VAR_4 = VAR_2->soxr;
        }


        if( VAR_2->last_soxr && VAR_4 != VAR_2->last_soxr && VAR_2->i_last_olen )
        {
            VAR_5 = FUNC_1( VAR_0, VAR_2->last_soxr,
                                           ((void*)0), VAR_2->i_last_olen );
            if( VAR_4 )
                FUNC_6( VAR_0, "Using '%s' engine", FUNC_7( VAR_4 ) );
        }

        if( VAR_4 )
        {
            FUNC_2( !VAR_6 );
            VAR_6 = FUNC_1( VAR_0, VAR_4, VAR_1, VAR_8 );
            if( !VAR_6 )
                goto error;
        }

        if( VAR_5 )
        {

            const unsigned VAR_9 = VAR_5->i_nb_samples
                                        + VAR_6->i_nb_samples;

            FUNC_3( &VAR_5, VAR_6 );
            VAR_6 = FUNC_4( VAR_5 );
            if( !VAR_6 )
                goto error;
            VAR_6->i_nb_samples = VAR_9;
        }
        VAR_6->i_pts = VAR_3;
        return VAR_6;
    }
    else
    {


        const size_t VAR_10 = FUNC_0( VAR_1->i_nb_samples,
                                              VAR_2->f_fixed_ratio );
        block_t *VAR_11 = FUNC_1( VAR_0, VAR_2->soxr, VAR_1, VAR_10 );
        if( VAR_11 )
            VAR_11->i_pts = VAR_3;
        return VAR_11;
    }
error:
    FUNC_5( VAR_1 );
    return ((void*)0);
}
