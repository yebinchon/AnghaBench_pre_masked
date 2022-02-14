
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_thread_t ;
typedef int subpicture_updater_t ;
struct TYPE_4__ {scalar_t__ i_channel; int b_subtitle; scalar_t__ i_order; } ;
typedef TYPE_1__ subpicture_t ;
struct decoder_owner {scalar_t__ i_spu_channel; int vout_thread_started; int vout_order; scalar_t__ i_spu_order; int lock; int * p_vout; int p_clock; int p_resource; scalar_t__ error; } ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
typedef int decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct decoder_owner* FUNC_1 (int *) ;
 int FUNC_2 (struct decoder_owner*,int ,int *,...) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int ,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__) ;

__attribute__((used)) static subpicture_t *FUNC_12( decoder_t *VAR_5,
                                     const subpicture_updater_t *VAR_6 )
{
    struct decoder_owner *VAR_7 = FUNC_1( VAR_5 );
    vout_thread_t *VAR_8 = ((void*)0);
    subpicture_t *VAR_9;
    int VAR_10 = 30;

    while( VAR_10-- )
    {
        if( VAR_7->error )
            break;

        VAR_8 = FUNC_3( VAR_7->p_resource );
        if( VAR_8 )
            break;

        FUNC_8( VAR_0 );
    }

    if( !VAR_8 )
    {
        FUNC_4( VAR_5, "no vout found, dropping subpicture" );
        if( VAR_7->p_vout )
        {
            FUNC_0(VAR_7->i_spu_channel != VAR_2);
            FUNC_2(VAR_7, VAR_4, VAR_7->p_vout);

            FUNC_6( &VAR_7->lock );
            FUNC_11(VAR_7->p_vout,
                                             VAR_7->i_spu_channel);
            VAR_7->i_spu_channel = VAR_2;

            FUNC_10(VAR_7->p_vout);
            VAR_7->p_vout = ((void*)0);
            VAR_7->vout_thread_started = 0;
            FUNC_7( &VAR_7->lock );
        }
        return ((void*)0);
    }

    if( VAR_7->p_vout != VAR_8 )
    {
        if (VAR_7->p_vout)
            FUNC_2(VAR_7, VAR_4, VAR_7->p_vout);

        FUNC_6(&VAR_7->lock);

        if (VAR_7->p_vout)
        {

            FUNC_0(VAR_7->i_spu_channel != VAR_2);
            FUNC_11(VAR_7->p_vout,
                                             VAR_7->i_spu_channel);
            FUNC_10(VAR_7->p_vout);
            VAR_7->p_vout = ((void*)0);
            VAR_7->vout_thread_started = 0;
        }

        enum vlc_vout_order VAR_11;
        VAR_7->i_spu_channel =
            FUNC_9(VAR_8, VAR_7->p_clock,
                                                   &VAR_11);
        VAR_7->i_spu_order = 0;

        if (VAR_7->i_spu_channel == VAR_2)
        {

            FUNC_7(&VAR_7->lock);
            FUNC_10(VAR_8);
            return ((void*)0);
        }

        VAR_7->p_vout = VAR_8;
        VAR_7->vout_thread_started = 1;
        VAR_7->vout_order = VAR_11;
        FUNC_7(&VAR_7->lock);

        FUNC_0(VAR_11 != VAR_1);
        FUNC_2(VAR_7, VAR_3, VAR_8, VAR_11);
    }
    else
        FUNC_10(VAR_8);

    VAR_9 = FUNC_5( VAR_6 );
    if( VAR_9 )
    {
        VAR_9->i_channel = VAR_7->i_spu_channel;
        VAR_9->i_order = VAR_7->i_spu_order++;
        VAR_9->b_subtitle = 1;
    }

    return VAR_9;
}
