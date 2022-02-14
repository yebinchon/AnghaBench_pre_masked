
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ aout_stream_t ;
struct TYPE_6__ {scalar_t__ rate; scalar_t__ written; int client; int started_state; } ;
typedef TYPE_2__ aout_stream_sys_t ;
typedef scalar_t__ UINT64 ;
typedef int IAudioClock ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int *,void**) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,char*,int ) ;
 int FUNC_10 (int,char*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_12(aout_stream_t *VAR_4, vlc_tick_t *restrict VAR_5)
{
    aout_stream_sys_t *VAR_6 = VAR_4->sys;
    void *VAR_7;
    UINT64 VAR_8, VAR_9, VAR_10;
    HRESULT VAR_11;

    if (FUNC_8(&VAR_6->started_state) != VAR_3)
        return VAR_1;

    VAR_11 = FUNC_2(VAR_6->client, &VAR_2, &VAR_7);
    if (FUNC_0(VAR_11))
    {
        FUNC_9(VAR_4, "cannot get clock (error 0x%lX)", VAR_11);
        return VAR_11;
    }

    IAudioClock *VAR_12 = VAR_7;

    VAR_11 = FUNC_4(VAR_12, &VAR_8, &VAR_9);
    if (FUNC_6(VAR_11))
        VAR_11 = FUNC_3(VAR_12, &VAR_10);
    FUNC_5(VAR_12);
    if (FUNC_0(VAR_11))
    {
        FUNC_9(VAR_4, "cannot get position (error 0x%lX)", VAR_11);
        return VAR_11;
    }

    vlc_tick_t VAR_13 = FUNC_11(VAR_6->written, VAR_6->rate);
    vlc_tick_t VAR_14 = FUNC_11(VAR_8, VAR_10);

    FUNC_10((10000000 % VAR_0) == 0, "Frequency conversion broken");

    *VAR_5 = VAR_13 - VAR_14
           - FUNC_7(FUNC_1() - VAR_9);

    return VAR_11;
}
