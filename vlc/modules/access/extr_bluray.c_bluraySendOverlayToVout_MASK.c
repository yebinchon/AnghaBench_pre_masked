
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int subpicture_t ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {int p_out; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {int b_on_vout; int status; int * p_updater; } ;
typedef TYPE_3__ bluray_overlay_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(demux_t *VAR_3, int VAR_4, bluray_overlay_t *VAR_5)
{
    demux_sys_t *VAR_6 = VAR_3->p_sys;

    FUNC_0(VAR_5 != ((void*)0));
    FUNC_0(!VAR_5->b_on_vout);

    if (VAR_5->p_updater) {
        FUNC_5(VAR_5->p_updater);
        VAR_5->p_updater = ((void*)0);
    }

    subpicture_t *VAR_7 = FUNC_1(VAR_5);
    if (!VAR_7) {
        FUNC_3(VAR_3, "bluraySubpictureCreate() failed");
        return;
    }







    int VAR_8 = FUNC_2(VAR_6->p_out, VAR_0,
                             VAR_4, VAR_7);
    if (VAR_8 != VAR_2)
    {
        FUNC_5(VAR_5->p_updater);
        VAR_5->p_updater = ((void*)0);
        VAR_5->b_on_vout = 0;
        FUNC_4(VAR_7);
        return;
    }
    VAR_5->b_on_vout = 1;





    VAR_5->status = VAR_1;
}
