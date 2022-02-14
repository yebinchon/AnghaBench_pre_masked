
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_22__ {int surface; } ;
typedef TYPE_5__ picture_sys_d3d9_t ;
struct TYPE_20__ {int i_height; int i_width; } ;
struct TYPE_21__ {TYPE_3__ video; } ;
struct TYPE_18__ {scalar_t__ i_chroma; } ;
struct TYPE_19__ {TYPE_1__ video; } ;
struct TYPE_23__ {TYPE_4__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_24__ {int owner; int * dev; } ;
typedef TYPE_7__ d3d9_device_t ;
struct TYPE_25__ {int Height; int Width; void* Format; } ;
typedef TYPE_8__ D3DSURFACE_DESC ;


 TYPE_5__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_8__*) ;
 int FUNC_5 (int ,int **) ;
 void* FUNC_6 (char,char,char,char) ;
 scalar_t__ VAR_0 ;
 TYPE_7__ VAR_1 ;
 int * FUNC_7 (TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_8__*,int ,int) ;
 int FUNC_9 (TYPE_6__*,char*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(filter_t *VAR_4, d3d9_device_t *VAR_5, D3DSURFACE_DESC *VAR_6)
{
    VAR_5->dev = ((void*)0);

    picture_t *VAR_7 = FUNC_7(VAR_4);
    if (!VAR_7)
        return;

    picture_sys_d3d9_t *VAR_8 = FUNC_0(VAR_7);

    FUNC_12(&VAR_2);
    if (VAR_8)
    {
        if (FUNC_1(FUNC_5( VAR_8->surface, &VAR_5->dev )))
            goto done;
        FUNC_3(VAR_5->dev);
        if (FUNC_1(FUNC_4( VAR_8->surface, VAR_6 )))
        {
            VAR_5->dev = ((void*)0);
            goto done;
        }

        if (VAR_1.dev == ((void*)0))
        {
            VAR_1.dev = VAR_5->dev;
            VAR_3++;
        }
    }
    else
    {
        *VAR_5 = VAR_1;
        if (VAR_1.dev != ((void*)0))
            VAR_3++;

        FUNC_8(VAR_6, 0, sizeof(*VAR_6));
        if (VAR_4->fmt_in.video.i_chroma == VAR_0)
            VAR_6->Format = FUNC_6('P','0','1','0');
        else
            VAR_6->Format = FUNC_6('N','V','1','2');
        VAR_6->Width = VAR_4->fmt_out.video.i_width;
        VAR_6->Height = VAR_4->fmt_out.video.i_height;
    }

    VAR_5->owner = 0;
    if (FUNC_11(VAR_5->dev == ((void*)0)))
        FUNC_9(VAR_4, "no context available");
    else
        FUNC_2(VAR_5->dev);

done:
    FUNC_13(&VAR_2);

    FUNC_10(VAR_7);
}
