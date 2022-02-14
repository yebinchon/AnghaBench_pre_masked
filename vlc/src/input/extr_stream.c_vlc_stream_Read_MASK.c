
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,void*,size_t) ;

ssize_t FUNC_2(stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = 0;

    while (VAR_2 > 0)
    {
        ssize_t VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
        if (VAR_4 < 0)
            continue;
        if (VAR_4 == 0)
            break;

        if (VAR_1 != ((void*)0))
            VAR_1 = (char *)VAR_1 + VAR_4;
        FUNC_0(VAR_2 >= (size_t)VAR_4);
        VAR_2 -= VAR_4;
        VAR_3 += VAR_4;
    }

    return VAR_3;
}
