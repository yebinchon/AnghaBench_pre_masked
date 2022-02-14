
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bitmaps_allocated; scalar_t__ n_bitmaps; int bitmaps; } ;
typedef TYPE_1__ Bitmap ;


 int FUNC_0 (int ) ;

void FUNC_1(Bitmap *VAR_0) {
        if (!VAR_0)
                return;

        VAR_0->bitmaps = FUNC_0(VAR_0->bitmaps);
        VAR_0->n_bitmaps = 0;
        VAR_0->bitmaps_allocated = 0;
}
