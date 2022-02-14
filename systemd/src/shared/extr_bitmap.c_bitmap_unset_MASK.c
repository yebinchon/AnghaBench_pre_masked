
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {unsigned int n_bitmaps; int* bitmaps; } ;
typedef TYPE_1__ Bitmap ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;

void FUNC_3(Bitmap *VAR_0, unsigned VAR_1) {
        uint64_t VAR_2;
        unsigned VAR_3;

        if (!VAR_0)
                return;

        VAR_3 = FUNC_0(VAR_1);

        if (VAR_3 >= VAR_0->n_bitmaps)
                return;

        VAR_2 = FUNC_2(1) << FUNC_1(VAR_1);

        VAR_0->bitmaps[VAR_3] &= ~VAR_2;
}
