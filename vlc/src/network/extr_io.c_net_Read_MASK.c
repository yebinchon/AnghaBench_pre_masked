
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,size_t) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,void*,size_t,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;

ssize_t (FUNC_8)(vlc_object_t *restrict VAR_4, int VAR_5,
                   void *restrict VAR_6, size_t VAR_7)
{
    size_t VAR_8 = 0;

    do
    {
        if (FUNC_4())
        {
            FUNC_7();
            VAR_3 = VAR_1;
            return -1;
        }

        ssize_t VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, 0);
        if (VAR_9 < 0)
        {
            if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
                continue;







            else
            {
                FUNC_2(VAR_4, "read error: %s", FUNC_6(VAR_3));
                return VAR_8 ? (ssize_t)VAR_8 : -1;
            }
        }

        VAR_8 += VAR_9;

        if (VAR_9 == 0)
            break;

        FUNC_1(VAR_7 >= (size_t)VAR_9);
        VAR_7 -= VAR_9;
        VAR_6 = ((char *)VAR_6) + VAR_9;
    }
    while (VAR_7 > 0);

    return VAR_8;
}
