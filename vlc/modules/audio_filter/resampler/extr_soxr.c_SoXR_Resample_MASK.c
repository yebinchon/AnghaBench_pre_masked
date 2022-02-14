
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int * soxr_t ;
typedef scalar_t__ soxr_error_t ;
struct TYPE_12__ {size_t i_bytes_per_frame; int i_rate; } ;
struct TYPE_13__ {TYPE_1__ audio; } ;
struct TYPE_14__ {TYPE_2__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_15__ {size_t i_last_olen; int * last_soxr; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_16__ {size_t i_nb_samples; size_t i_buffer; int i_length; int * p_buffer; } ;
typedef TYPE_5__ block_t ;


 TYPE_5__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,char*,size_t const,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,size_t const,size_t*,int *,size_t,size_t*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (size_t,int ) ;

__attribute__((used)) static block_t *
FUNC_8( filter_t *VAR_0, soxr_t VAR_1, block_t *VAR_2, size_t VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_0->p_sys;
    size_t VAR_5, VAR_6;
    const size_t VAR_7 = VAR_0->fmt_out.audio.i_bytes_per_frame;
    const size_t VAR_8 = VAR_2 ? VAR_2->i_nb_samples : 0;

    block_t *VAR_9;
    if( VAR_8 >= VAR_3 )
    {
        VAR_3 = VAR_8;
        VAR_9 = VAR_2;
    }
    else
        VAR_9 = FUNC_0( VAR_3 * VAR_7 );

    soxr_error_t VAR_10 = FUNC_4( VAR_1, VAR_2 ? VAR_2->p_buffer : ((void*)0),
                                       VAR_8, &VAR_5, VAR_9->p_buffer,
                                       VAR_3, &VAR_6 );
    if( VAR_10 )
    {
        FUNC_2( VAR_0, "soxr_process failed: %s", FUNC_5( VAR_10 ) );
        FUNC_1( VAR_9 );
        goto error;
    }
    if( FUNC_6( VAR_5 < VAR_8 ) )
        FUNC_2( VAR_0, "lost %zd of %zd input frames",
                 VAR_8 - VAR_5, VAR_5);

    VAR_9->i_buffer = VAR_6 * VAR_7;
    VAR_9->i_nb_samples = VAR_6;
    VAR_9->i_length = FUNC_7(VAR_6, VAR_0->fmt_out.audio.i_rate);

    if( VAR_2 )
    {
        VAR_4->i_last_olen = VAR_3;
        VAR_4->last_soxr = VAR_1;
    }
    else
    {
        FUNC_3( VAR_1 );
        VAR_4->i_last_olen = 0;
        VAR_4->last_soxr = ((void*)0);
    }

error:
    if( VAR_2 && VAR_9 != VAR_2 )
        FUNC_1( VAR_2 );

    return VAR_9;
}
