
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int*,void**,unsigned int*,void const**,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int*,void const**,unsigned int*,int,void*) ;

__attribute__((used)) static inline int FUNC_3(int *VAR_3, void **VAR_4,
                                     unsigned VAR_5, const void *VAR_6)
{
    unsigned VAR_7[VAR_2];
    const void *VAR_8[VAR_2];
    unsigned VAR_9;

    if (*VAR_3 > 0 && *VAR_4) {
        if (FUNC_2(VAR_7, VAR_8, &VAR_9, *VAR_3, *VAR_4))
            return VAR_0;
    } else {
        VAR_9 = 0;
    }
    if (VAR_9 >= VAR_2)
        return VAR_0;

    void *VAR_10 = *VAR_4;

    VAR_7[VAR_9] = VAR_5;
    VAR_8[VAR_9] = (void*)VAR_6;
    if (FUNC_1(VAR_3, VAR_4, VAR_7,
                         VAR_8, VAR_9 + 1)) {
        *VAR_3 = 0;
        *VAR_4 = ((void*)0);
    }

    FUNC_0(VAR_10);

    if (*VAR_3 <= 0)
        return VAR_0;
    return VAR_1;
}
