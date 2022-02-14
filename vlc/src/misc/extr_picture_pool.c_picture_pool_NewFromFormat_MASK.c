
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_format_t ;
typedef int picture_t ;
typedef int picture_pool_t ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned int,int **) ;

picture_pool_t *FUNC_3(const video_format_t *VAR_0,
                                           unsigned VAR_1)
{
    picture_t *VAR_2[VAR_1 ? VAR_1 : 1];
    unsigned VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2[VAR_3] = FUNC_0(VAR_0);
        if (VAR_2[VAR_3] == ((void*)0))
            goto error;
    }

    picture_pool_t *VAR_4 = FUNC_2(VAR_1, VAR_2);
    if (!VAR_4)
        goto error;

    return VAR_4;

error:
    while (VAR_3 > 0)
        FUNC_1(VAR_2[--VAR_3]);
    return ((void*)0);
}
