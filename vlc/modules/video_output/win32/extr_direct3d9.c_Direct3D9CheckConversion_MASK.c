
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_6__ {int * obj; } ;
struct TYPE_8__ {TYPE_1__ hd3d; } ;
typedef TYPE_3__ vout_display_sys_t ;
typedef int IDirect3D9 ;
typedef scalar_t__ HRESULT ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(vout_display_t *VAR_6,
                                   D3DFORMAT VAR_7, D3DFORMAT VAR_8)
{
    vout_display_sys_t *VAR_9 = VAR_6->sys;
    IDirect3D9 *VAR_10 = VAR_9->hd3d.obj;
    HRESULT VAR_11;


    VAR_11 = FUNC_0(VAR_10, VAR_0,
                                      VAR_1, VAR_8, 0,
                                      VAR_3, VAR_7);
    if (FUNC_2(VAR_11)) {



        VAR_11 = FUNC_1(VAR_10,
                                                    VAR_0,
                                                    VAR_1,
                                                    VAR_7, VAR_8);
    }
    if (!FUNC_2(VAR_11)) {
        if (VAR_2 != VAR_11)
            FUNC_3(VAR_6, "Could not query adapter supported formats. (hr=0x%lX)", VAR_11);
        return VAR_4;
    }
    return VAR_5;
}
