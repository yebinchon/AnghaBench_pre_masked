
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * (* pf_audio_filter ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ filter_t ;
typedef int block_t ;


 int * FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static block_t *FUNC_1(filter_t *const *VAR_0,
                                         unsigned VAR_1, block_t *VAR_2)
{

    for (unsigned VAR_3 = 0; (VAR_3 < VAR_1) && (VAR_2 != ((void*)0)); VAR_3++)
    {
        filter_t *VAR_4 = VAR_0[VAR_3];



        VAR_2 = VAR_4->pf_audio_filter (VAR_4, VAR_2);
    }
    return VAR_2;
}
