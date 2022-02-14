
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_va_t ;
struct TYPE_9__ {int d3ddec; } ;
typedef TYPE_2__ vlc_va_sys_t ;
struct TYPE_10__ {unsigned int count; int * list; int (* pf_release ) (TYPE_3__*) ;} ;
typedef TYPE_3__ input_list_t ;
typedef unsigned int UINT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int *) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (unsigned int,int) ;
 int FUNC_5 (TYPE_1__*,char*,unsigned int,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(vlc_va_t *VAR_3, input_list_t *VAR_4)
{
    vlc_va_sys_t *VAR_5 = VAR_3->sys;
    HRESULT VAR_6;

    UINT VAR_7 = FUNC_2(VAR_5->d3ddec);

    VAR_4->count = VAR_7;
    VAR_4->list = FUNC_4(VAR_7, sizeof(*VAR_4->list));
    if (FUNC_6(VAR_4->list == ((void*)0))) {
        return VAR_1;
    }
    VAR_4->pf_release = FUNC_3;

    for (unsigned VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        VAR_6 = FUNC_1(VAR_5->d3ddec, VAR_8, &VAR_4->list[VAR_8]);
        if (FUNC_0(VAR_6))
        {
            FUNC_5(VAR_3, "GetVideoDecoderProfile %d failed. (hr=0x%lX)", VAR_8, VAR_6);
            FUNC_3(VAR_4);
            return VAR_0;
        }
    }

    return VAR_2;
}
