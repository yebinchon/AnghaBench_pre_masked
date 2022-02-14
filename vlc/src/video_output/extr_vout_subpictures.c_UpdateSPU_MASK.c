
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int i_entries; } ;
struct TYPE_11__ {TYPE_7__ palette; scalar_t__ y_end; scalar_t__ x_end; scalar_t__ y_start; scalar_t__ x_start; } ;
typedef TYPE_2__ vlc_spu_highlight_t ;
struct TYPE_12__ {TYPE_4__* p; } ;
typedef TYPE_3__ spu_t ;
struct TYPE_14__ {scalar_t__ i_entries; } ;
struct TYPE_10__ {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {int force_crop; TYPE_6__ palette; TYPE_1__ crop; int lock; } ;
typedef TYPE_4__ spu_private_t ;


 int FUNC_0 (TYPE_6__*,TYPE_7__*,int) ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(spu_t *VAR_0, const vlc_spu_highlight_t *VAR_1)
{
    spu_private_t *VAR_2 = VAR_0->p;

    FUNC_2(&VAR_2->lock);

    VAR_2->palette.i_entries = 0;
    VAR_2->force_crop = 0;

    if (VAR_1 == ((void*)0))
        return;

    VAR_2->force_crop = 1;
    VAR_2->crop.x = VAR_1->x_start;
    VAR_2->crop.y = VAR_1->y_start;
    VAR_2->crop.width = VAR_1->x_end - VAR_2->crop.x;
    VAR_2->crop.height = VAR_1->y_end - VAR_2->crop.y;

    if (VAR_1->palette.i_entries == 4)
        FUNC_0(&VAR_2->palette, &VAR_1->palette, sizeof(VAR_2->palette));

    FUNC_1(VAR_0, "crop: %i,%i,%i,%i, palette forced: %i",
            VAR_2->crop.x, VAR_2->crop.y,
            VAR_2->crop.width, VAR_2->crop.height,
            VAR_2->palette.i_entries);
}
