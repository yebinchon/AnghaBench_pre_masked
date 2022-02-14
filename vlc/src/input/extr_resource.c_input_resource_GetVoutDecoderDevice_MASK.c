
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_6__ {int * vout; int * fmt; } ;
typedef TYPE_1__ vout_device_configuration_t ;
typedef int vlc_object_t ;
typedef int vlc_decoder_device ;
struct TYPE_7__ {scalar_t__ i_vout; int lock; int * p_vout_free; int ** pp_vout; int lock_hold; int * p_parent; int p_vout_dummy; } ;
typedef TYPE_2__ input_resource_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;


 int FUNC_0 (scalar_t__,int **,int *) ;
 int FUNC_1 (scalar_t__,int **,int *,int) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_1__ const*) ;

vout_thread_t *FUNC_9(input_resource_t *VAR_2,
                                      const vout_device_configuration_t *VAR_3,
                                      enum vlc_vout_order *VAR_4,
                                      vlc_decoder_device **VAR_5)
{
    vout_device_configuration_t VAR_6;
    vout_thread_t *VAR_7;

    FUNC_3(VAR_3 != ((void*)0));
    FUNC_3(VAR_3->fmt != ((void*)0));
    FUNC_5( &VAR_2->lock );

    if (VAR_3->vout == ((void*)0)) {
        VAR_6 = *VAR_3;
        VAR_6.vout = VAR_2->p_vout_free;
        VAR_2->p_vout_free = ((void*)0);
        VAR_3 = &VAR_6;

        if (VAR_6.vout == ((void*)0)) {



            vlc_object_t *VAR_8 = VAR_2->i_vout == 0 ?
                FUNC_2(VAR_2->p_vout_dummy) : VAR_2->p_parent;
            VAR_6.vout = VAR_7 = FUNC_7(VAR_8);
            if (VAR_7 == ((void*)0))
                goto out;

            FUNC_5(&VAR_2->lock_hold);
            *VAR_4 = VAR_2->i_vout == 0 ? VAR_0
                                             : VAR_1;
            FUNC_0(VAR_2->i_vout, VAR_2->pp_vout, VAR_7);
            FUNC_6(&VAR_2->lock_hold);
        } else
        {

            *VAR_4 = VAR_0;
            FUNC_4(VAR_2->p_parent, "trying to reuse free vout");
        }
    }
    else
    {
        FUNC_5(&VAR_2->lock_hold);
        FUNC_3(VAR_2->i_vout > 0);
        *VAR_4 = VAR_2->pp_vout[0] == VAR_3->vout ? VAR_0
                                                     : VAR_1;
        FUNC_6(&VAR_2->lock_hold);
    }


    {
        int VAR_9;
        FUNC_1(VAR_2->i_vout, VAR_2->pp_vout, VAR_3->vout, VAR_9 );
        FUNC_3(VAR_9 >= 0);
        FUNC_3(VAR_2->p_vout_free == ((void*)0) || VAR_2->p_vout_free == VAR_3->vout);
    }


    if (VAR_5)
    {
        *VAR_5 = FUNC_8(VAR_3);
    }

    VAR_7 = VAR_3->vout;

out:
    FUNC_6( &VAR_2->lock );
    return VAR_7;
}
