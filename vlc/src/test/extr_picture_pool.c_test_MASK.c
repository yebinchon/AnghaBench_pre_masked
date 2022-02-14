
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_7__ {void* p_pixels; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int) ;
 TYPE_2__* FUNC_7 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_8(bool VAR_4)
{
    picture_t *VAR_5[VAR_0];

    VAR_2 = FUNC_4(&VAR_1, VAR_0);
    FUNC_0(VAR_2 != ((void*)0));

    for (unsigned VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        VAR_5[VAR_6] = FUNC_3(VAR_2);
        FUNC_0(VAR_5[VAR_6] != ((void*)0));
    }

    for (unsigned VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
        FUNC_0(FUNC_3(VAR_2) == ((void*)0));




    for (unsigned VAR_8 = 0; VAR_8 < VAR_0 / 2; VAR_8++)
        FUNC_1(VAR_5[VAR_8]);

    for (unsigned VAR_9 = 0; VAR_9 < VAR_0 / 2; VAR_9++)
        FUNC_2(VAR_5[VAR_9]);

    for (unsigned VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        void *VAR_11 = VAR_5[VAR_10]->p[0].p_pixels;
        FUNC_0(VAR_11 != ((void*)0));
        FUNC_2(VAR_5[VAR_10]);

        VAR_5[VAR_10] = FUNC_3(VAR_2);
        FUNC_0(VAR_5[VAR_10] != ((void*)0));
        FUNC_0(VAR_5[VAR_10]->p[0].p_pixels == VAR_11);
    }

    for (unsigned VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
        FUNC_2(VAR_5[VAR_12]);

    for (unsigned VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
        VAR_5[VAR_13] = FUNC_7(VAR_2);
        FUNC_0(VAR_5[VAR_13] != ((void*)0));
    }

    for (unsigned VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
        FUNC_2(VAR_5[VAR_14]);

    VAR_3 = FUNC_6(VAR_2, VAR_0 / 2);
    FUNC_0(VAR_3 != ((void*)0));

    for (unsigned VAR_15 = 0; VAR_15 < VAR_0 / 2; VAR_15++) {
        VAR_5[VAR_15] = FUNC_3(VAR_2);
        FUNC_0(VAR_5[VAR_15] != ((void*)0));
    }

    for (unsigned VAR_16 = VAR_0 / 2; VAR_16 < VAR_0; VAR_16++) {
        FUNC_0(FUNC_3(VAR_2) == ((void*)0));
        VAR_5[VAR_16] = FUNC_3(VAR_3);
        FUNC_0(VAR_5[VAR_16] != ((void*)0));
    }

    if (!VAR_4)
        for (unsigned VAR_17 = 0; VAR_17 < VAR_0; VAR_17++)
            FUNC_2(VAR_5[VAR_17]);

    FUNC_5(VAR_3);
    FUNC_5(VAR_2);

    if (VAR_4)
        for (unsigned VAR_18 = 0; VAR_18 < VAR_0; VAR_18++)
            FUNC_2(VAR_5[VAR_18]);
}
