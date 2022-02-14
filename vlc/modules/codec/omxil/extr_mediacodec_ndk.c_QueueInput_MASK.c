
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_7__ {int p_codec; } ;
typedef TYPE_2__ mc_api_sys ;
struct TYPE_8__ {int p_obj; TYPE_2__* p_sys; } ;
typedef TYPE_3__ mc_api ;
struct TYPE_6__ {scalar_t__ (* queueInputBuffer ) (int ,int,int ,size_t,int ,int) ;int * (* getInputBuffer ) (int ,int,size_t*) ;} ;
struct TYPE_9__ {TYPE_1__ AMediaCodec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int ,int,size_t*) ;
 scalar_t__ FUNC_4 (int ,int,int ,size_t,int ,int) ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static int FUNC_5(mc_api *VAR_5, int VAR_6, const void *VAR_7,
                      size_t VAR_8, vlc_tick_t VAR_9, bool VAR_10)
{
    mc_api_sys *VAR_11 = VAR_5->p_sys;
    uint8_t *VAR_12;
    size_t VAR_13;
    int VAR_14 = (VAR_10 ? VAR_1 : 0)
                | (VAR_7 == ((void*)0) ? VAR_0 : 0);

    FUNC_0(VAR_6 >= 0);

    VAR_12 = VAR_4.AMediaCodec.getInputBuffer(VAR_11->p_codec,
                                               VAR_6, &VAR_13);
    if (!VAR_12)
        return VAR_3;

    if (VAR_13 > VAR_8)
        VAR_13 = VAR_8;
    FUNC_1(VAR_12, VAR_7, VAR_13);

    if (VAR_4.AMediaCodec.queueInputBuffer(VAR_11->p_codec, VAR_6, 0, VAR_13,
                                          VAR_9, VAR_14) == VAR_2)
        return 0;
    else
    {
        FUNC_2(VAR_5->p_obj, "AMediaCodec.queueInputBuffer failed");
        return VAR_3;
    }
}
