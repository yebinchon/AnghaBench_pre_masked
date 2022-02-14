
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_array_t ;
typedef int const es_pair_t ;


 size_t FUNC_0 (int *) ;
 int const* FUNC_1 (int *,size_t) ;

__attribute__((used)) static es_pair_t *FUNC_2(vlc_array_t *VAR_0,
                            bool (*VAR_1)(const es_pair_t *, const void *),
                            const void *VAR_2)
{
    for (size_t VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3)
    {
        es_pair_t *VAR_4 = FUNC_1(VAR_0, VAR_3);
        if(VAR_1(VAR_4, VAR_2))
            return VAR_4;
    }
    return ((void*)0);
}
