
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,void const*,size_t,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;

ssize_t (FUNC_6)(vlc_object_t *VAR_4, int VAR_5, const void *VAR_6, size_t VAR_7)
{
    size_t VAR_8 = 0;

    do
    {
        if (FUNC_2())
        {
            FUNC_5();
            VAR_3 = VAR_1;
            return -1;
        }

        ssize_t VAR_9 = FUNC_3 (VAR_5, VAR_6, VAR_7, VAR_2);
        if (VAR_9 == -1)
        {
            if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
                continue;

            FUNC_1(VAR_4, "write error: %s", FUNC_4(VAR_3));
            return VAR_8 ? (ssize_t)VAR_8 : -1;
        }

        if (VAR_9 == 0)
            break;

        VAR_8 += VAR_9;
        FUNC_0(VAR_7 >= (size_t)VAR_9);
        VAR_7 -= VAR_9;
        VAR_6 = ((const char *)VAR_6) + VAR_9;
    }
    while (VAR_7 > 0);

    return VAR_8;
}
