
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
struct TYPE_7__ {int p_codec; } ;
typedef TYPE_2__ mc_api_sys ;
struct TYPE_8__ {int p_obj; TYPE_2__* p_sys; } ;
typedef TYPE_3__ mc_api ;
struct TYPE_6__ {scalar_t__ (* dequeueInputBuffer ) (int ,int ) ;} ;
struct TYPE_9__ {TYPE_1__ AMediaCodec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static int FUNC_2(mc_api *VAR_4, vlc_tick_t VAR_5)
{
    mc_api_sys *VAR_6 = VAR_4->p_sys;
    ssize_t VAR_7;

    VAR_7 = VAR_3.AMediaCodec.dequeueInputBuffer(VAR_6->p_codec, VAR_5);
    if (VAR_7 >= 0)
        return VAR_7;
    else if (VAR_7 == VAR_0)
        return VAR_2;
    else
    {
        FUNC_0(VAR_4->p_obj, "AMediaCodec.dequeueInputBuffer failed");
        return VAR_1;
    }
}
