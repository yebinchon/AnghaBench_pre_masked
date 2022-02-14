
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int n_bitmaps; int bitmaps_allocated; int bitmaps; } ;
typedef TYPE_1__ Bitmap ;


 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;

Bitmap *FUNC_3(Bitmap *VAR_1) {
        Bitmap *VAR_2;

        VAR_2 = FUNC_0();
        if (!VAR_2)
                return ((void*)0);

        VAR_2->bitmaps = FUNC_2(VAR_0, VAR_1->bitmaps, VAR_1->n_bitmaps);
        if (!VAR_2->bitmaps)
                return FUNC_1(VAR_2);

        VAR_2->n_bitmaps = VAR_2->bitmaps_allocated = VAR_1->n_bitmaps;
        return VAR_2;
}
