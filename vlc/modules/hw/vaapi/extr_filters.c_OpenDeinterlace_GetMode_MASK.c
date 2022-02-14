
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deint_mode {char* name; } ;
typedef int filter_t ;
typedef int VAProcFilterCapDeinterlacing ;


 unsigned int FUNC_0 (struct deint_mode*) ;
 scalar_t__ FUNC_1 (int *,int const*,unsigned int,struct deint_mode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct deint_mode* VAR_2 ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static inline int
FUNC_6(filter_t * VAR_3, char const * VAR_4,
                        struct deint_mode * VAR_5,
                        VAProcFilterCapDeinterlacing const VAR_6[],
                        unsigned int VAR_7)
{
    bool VAR_8 = 0;
    if (VAR_4 && FUNC_5(VAR_4, "auto"))
    {
        for (unsigned int VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); ++VAR_9)
        {
            if (!FUNC_5(VAR_4, VAR_2[VAR_9].name))
            {
                if (FUNC_1(VAR_3, VAR_6, VAR_7,
                                                VAR_2 + VAR_9))
                {
                    *VAR_5 = VAR_2[VAR_9];
                    FUNC_2(VAR_3, "using %s deinterlace method",
                            VAR_2[VAR_9].name);
                    return VAR_1;
                }
            }
        }
        VAR_8 = 1;
    }

    for (unsigned int VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); ++VAR_10)
        if (FUNC_1(VAR_3, VAR_6, VAR_7,
                                        VAR_2 + VAR_10))
        {
            *VAR_5 = VAR_2[VAR_10];
            if (VAR_8)
                FUNC_4(VAR_3, "%s algorithm not available, falling back to "
                         "%s algorithm", VAR_4, VAR_2[VAR_10].name);
            else
                FUNC_2(VAR_3, "using %s deinterlace method",
                        VAR_2[VAR_10].name);
            return VAR_1;
        }





    FUNC_3(VAR_3, "no algorithm available");
    return VAR_0;
}
