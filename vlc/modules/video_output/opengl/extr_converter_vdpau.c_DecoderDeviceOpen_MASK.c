
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x11; } ;
struct TYPE_8__ {TYPE_1__ display; } ;
typedef TYPE_2__ vout_window_t ;
struct TYPE_9__ {int * opaque; int type; int * ops; } ;
typedef TYPE_3__ vlc_decoder_device ;
typedef int vdp_t ;
typedef int VdpDevice ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int,int **,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(vlc_decoder_device *VAR_5, vout_window_t *VAR_6)
{
    if (!VAR_6 || !FUNC_2(FUNC_0(VAR_6)))
        return VAR_2;

    vdp_t *VAR_7;
    VdpDevice VAR_8;

    if (FUNC_1(VAR_6->display.x11, -1, &VAR_7, &VAR_8) != VAR_0)
        return VAR_2;

    VAR_5->ops = &VAR_4;
    VAR_5->type = VAR_1;
    VAR_5->opaque = VAR_7;
    return VAR_3;
}
