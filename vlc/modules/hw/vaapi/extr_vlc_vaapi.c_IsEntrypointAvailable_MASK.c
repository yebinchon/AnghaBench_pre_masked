
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VAStatus ;
typedef int VAProfile ;
typedef scalar_t__ VAEntrypoint ;
typedef int VADisplay ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*,int*) ;
 scalar_t__* FUNC_3 (int,int) ;

__attribute__((used)) static bool
FUNC_4(VADisplay VAR_1, VAProfile VAR_2,
                      VAEntrypoint VAR_3)
{
    VAEntrypoint * VAR_4;
    int VAR_5 = FUNC_1(VAR_1);
    bool VAR_6 = 0;

    if (VAR_5 <= 0)
        return 0;
    VAR_4 = FUNC_3(VAR_5, sizeof(VAEntrypoint));

    if (!VAR_4)
        return 0;

    VAStatus VAR_7 =
        FUNC_2(VAR_1, VAR_2, VAR_4, &VAR_5);
    if (VAR_7 != VAR_0)
        goto error;

    for (int VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8)
        if (VAR_3 == VAR_4[VAR_8])
        {
            VAR_6 = 1;
            break;
        }

error:
    FUNC_0(VAR_4);
    return VAR_6;
}
