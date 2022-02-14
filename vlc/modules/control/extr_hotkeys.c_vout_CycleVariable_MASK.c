
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_8__ {scalar_t__ f_float; struct TYPE_8__* psz_string; } ;
typedef TYPE_1__ vlc_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int *,char const*,int ,size_t*,TYPE_1__**,int *) ;
 int FUNC_3 (int *,char const*,TYPE_1__*) ;
 int FUNC_4 (int *,char const*,scalar_t__) ;
 int FUNC_5 (int *,char const*,TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_6(vout_thread_t *VAR_3,
                   char const *VAR_4, int VAR_5, bool VAR_6)
{
    vlc_value_t VAR_7;
    FUNC_3(VAR_3, VAR_4, &VAR_7);
    size_t VAR_8;
    vlc_value_t *VAR_9;
    FUNC_2(VAR_3, VAR_4, VAR_1,
               &VAR_8, &VAR_9, ((void*)0));

    vlc_value_t *VAR_10 = VAR_9;
    for (size_t VAR_11 = 0; VAR_11 < VAR_8; ++VAR_11, ++VAR_10)
        if ((VAR_5 == VAR_0 &&
             VAR_10->f_float == VAR_7.f_float) ||
            (VAR_5 == VAR_2 &&
             !FUNC_1(VAR_10->psz_string, VAR_7.psz_string)))
        {
            VAR_11 += VAR_6 ? +1 : -1;
            if (VAR_6 && VAR_11 == VAR_8)
                VAR_11 = 0;
            else if (!VAR_6 && VAR_11 == (size_t)-1)
                VAR_11 = VAR_8 - 1;
            VAR_10 = VAR_9 + VAR_11;
            break;
        }
    if (VAR_10 == VAR_9 + VAR_8)
        VAR_10 = VAR_9;
    if (VAR_5 == VAR_0)
        FUNC_4(VAR_3, VAR_4, VAR_10->f_float);
    else if (VAR_5 == VAR_2)
        FUNC_5(VAR_3, VAR_4, VAR_10->psz_string);

    if (VAR_5 == VAR_2)
    {
        FUNC_0(VAR_7.psz_string);
        for (size_t VAR_12 = 0; VAR_12 < VAR_8; ++VAR_12)
            FUNC_0(VAR_9[VAR_12].psz_string);
    }
    FUNC_0(VAR_9);
}
