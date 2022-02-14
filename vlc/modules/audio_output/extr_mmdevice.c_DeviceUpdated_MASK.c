
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int it; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int LPCWSTR ;
typedef int IMMDevice ;
typedef int HRESULT ;


 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static HRESULT FUNC_5(audio_output_t *VAR_1, LPCWSTR VAR_2)
{
    aout_sys_t *VAR_3 = VAR_1->sys;
    HRESULT VAR_4;

    IMMDevice *VAR_5;
    VAR_4 = FUNC_3(VAR_3->it, VAR_2, &VAR_5);
    if (FUNC_2(VAR_4))
        return VAR_4;

    if (!FUNC_1(VAR_5))
    {
        FUNC_4(VAR_5);
        return VAR_0;
    }

    FUNC_0(VAR_1, VAR_2, VAR_5);
    FUNC_4(VAR_5);
    return VAR_0;
}
