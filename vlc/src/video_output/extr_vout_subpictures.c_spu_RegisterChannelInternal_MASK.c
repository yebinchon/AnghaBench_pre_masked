
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_clock_t ;
struct spu_channel {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {TYPE_2__* p; } ;
typedef TYPE_1__ spu_t ;
struct TYPE_6__ {int lock; int channels; } ;
typedef TYPE_2__ spu_private_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (struct spu_channel*,scalar_t__,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,struct spu_channel) ;

ssize_t FUNC_5(spu_t *VAR_2, vlc_clock_t *VAR_3,
                                    enum vlc_vout_order *VAR_4)
{
    spu_private_t *VAR_5 = VAR_2->p;

    FUNC_2(&VAR_5->lock);

    ssize_t VAR_6 = FUNC_0(VAR_2, VAR_4);

    if (VAR_6 != VAR_1)
    {
        struct spu_channel VAR_7;
        FUNC_1(&VAR_7, VAR_6,
                         VAR_4 ? *VAR_4 : VAR_0, VAR_3);
        if (FUNC_4(&VAR_5->channels, VAR_7))
        {
            FUNC_3(&VAR_5->lock);
            return VAR_6;
        }
    }

    FUNC_3(&VAR_5->lock);

    return VAR_1;
}
