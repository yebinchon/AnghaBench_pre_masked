
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {unsigned int n_bitmaps; int* bitmaps; int bitmaps_allocated; } ;
typedef TYPE_1__ Bitmap ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int ,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(Bitmap *VAR_3, unsigned VAR_4) {
        uint64_t VAR_5;
        unsigned VAR_6;

        FUNC_4(VAR_3);


        if (VAR_4 > VAR_0)
                return -VAR_2;

        VAR_6 = FUNC_0(VAR_4);

        if (VAR_6 >= VAR_3->n_bitmaps) {
                if (!FUNC_2(VAR_3->bitmaps, VAR_3->bitmaps_allocated, VAR_6 + 1))
                        return -VAR_1;

                VAR_3->n_bitmaps = VAR_6 + 1;
        }

        VAR_5 = FUNC_3(1) << FUNC_1(VAR_4);

        VAR_3->bitmaps[VAR_6] |= VAR_5;

        return 0;
}
