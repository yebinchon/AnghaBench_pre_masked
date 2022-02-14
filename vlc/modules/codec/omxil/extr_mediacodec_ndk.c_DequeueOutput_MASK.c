
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_7__ {int info; int p_codec; } ;
typedef TYPE_2__ mc_api_sys ;
struct TYPE_8__ {int p_obj; TYPE_2__* p_sys; } ;
typedef TYPE_3__ mc_api ;
struct TYPE_6__ {scalar_t__ (* dequeueOutputBuffer ) (int ,int *,int ) ;} ;
struct TYPE_9__ {TYPE_1__ AMediaCodec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 TYPE_4__ VAR_7 ;

__attribute__((used)) static int FUNC_2(mc_api *VAR_8, vlc_tick_t VAR_9)
{
    mc_api_sys *VAR_10 = VAR_8->p_sys;
    ssize_t VAR_11;

    VAR_11 = VAR_7.AMediaCodec.dequeueOutputBuffer(VAR_10->p_codec, &VAR_10->info,
                                                   VAR_9);

    if (VAR_11 >= 0)
        return VAR_11;
    else if (VAR_11 == VAR_2)
        return VAR_6;
    else if (VAR_11 == VAR_0)
        return VAR_4;
    else if (VAR_11 == VAR_1)
        return VAR_5;
    else
    {
        FUNC_0(VAR_8->p_obj, "AMediaCodec.dequeueOutputBuffer failed");
        return VAR_3;
    }
}
