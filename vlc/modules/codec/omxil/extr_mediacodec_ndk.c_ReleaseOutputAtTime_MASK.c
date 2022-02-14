
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int p_codec; } ;
typedef TYPE_2__ mc_api_sys ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_3__ mc_api ;
typedef int int64_t ;
struct TYPE_6__ {scalar_t__ (* releaseOutputBufferAtTime ) (int ,int,int ) ;} ;
struct TYPE_9__ {TYPE_1__ AMediaCodec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static int FUNC_2(mc_api *VAR_3, int VAR_4, int64_t VAR_5)
{
    mc_api_sys *VAR_6 = VAR_3->p_sys;

    FUNC_0(VAR_4 >= 0);
    if (VAR_2.AMediaCodec.releaseOutputBufferAtTime(VAR_6->p_codec, VAR_4, VAR_5)
                                                   == VAR_0)
        return 0;
    else
        return VAR_1;
}
