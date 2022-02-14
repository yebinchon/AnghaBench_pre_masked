
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {TYPE_3__* p_sys; int pf_destroy; int pf_update; int pf_validate; } ;
typedef TYPE_1__ subpicture_updater_t ;
struct TYPE_21__ {int b_ephemer; int b_absolute; int i_stop; scalar_t__ i_start; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_22__ {int i_subs_len; void* p_subs_data; scalar_t__ i_pts; TYPE_5__* p_dec_sys; int * p_img; } ;
typedef TYPE_3__ libass_spu_updater_sys_t ;
struct TYPE_23__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_24__ {int lock; scalar_t__ p_track; int i_max_stop; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_25__ {int i_flags; int i_buffer; char* p_buffer; scalar_t__ i_length; scalar_t__ i_pts; } ;
typedef TYPE_6__ block_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,void*,int,int ,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_2__* FUNC_6 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (void*,char*,int) ;
 int FUNC_11 (TYPE_4__*,char*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15( decoder_t *VAR_5, block_t *VAR_6 )
{
    decoder_sys_t *VAR_7 = VAR_5->p_sys;

    subpicture_t *VAR_8 = ((void*)0);

    if( VAR_6 == ((void*)0) )
        return VAR_4;

    if( VAR_6->i_flags & VAR_0 )
    {
        FUNC_1( VAR_5 );
        FUNC_5( VAR_6 );
        return VAR_4;
    }

    if( VAR_6->i_buffer == 0 || VAR_6->p_buffer[0] == '\0' )
    {
        FUNC_5( VAR_6 );
        return VAR_4;
    }

    libass_spu_updater_sys_t *VAR_9 = FUNC_9( sizeof(*VAR_9) );
    if( !VAR_9 )
    {
        FUNC_5( VAR_6 );
        return VAR_4;
    }

    subpicture_updater_t VAR_10 = {
        .pf_validate = VAR_3,
        .pf_update = VAR_2,
        .pf_destroy = VAR_1,
        .p_sys = VAR_9,
    };
    VAR_8 = FUNC_6( VAR_5, &VAR_10 );
    if( !VAR_8 )
    {
        FUNC_11( VAR_5, "can't get spu buffer" );
        FUNC_8( VAR_9 );
        FUNC_5( VAR_6 );
        return VAR_4;
    }

    VAR_9->p_img = ((void*)0);
    VAR_9->p_dec_sys = VAR_7;
    VAR_9->i_subs_len = VAR_6->i_buffer;
    VAR_9->p_subs_data = FUNC_9( VAR_6->i_buffer );
    VAR_9->i_pts = VAR_6->i_pts;
    if( !VAR_9->p_subs_data )
    {
        FUNC_12( VAR_8 );
        FUNC_5( VAR_6 );
        return VAR_4;
    }
    FUNC_10( VAR_9->p_subs_data, VAR_6->p_buffer,
            VAR_6->i_buffer );

    VAR_8->i_start = VAR_6->i_pts;
    VAR_8->i_stop = FUNC_3( VAR_7->i_max_stop, VAR_6->i_pts + VAR_6->i_length );
    VAR_8->b_ephemer = 1;
    VAR_8->b_absolute = 1;

    VAR_7->i_max_stop = VAR_8->i_stop;

    FUNC_13( &VAR_7->lock );
    if( VAR_7->p_track )
    {
        FUNC_4( VAR_7->p_track, VAR_9->p_subs_data, VAR_9->i_subs_len,
                           FUNC_2( VAR_6->i_pts ), FUNC_2( VAR_6->i_length ) );
    }
    FUNC_14( &VAR_7->lock );

    FUNC_0( VAR_7 );

    FUNC_5( VAR_6 );

    FUNC_7( VAR_5, VAR_8 );
    return VAR_4;
}
