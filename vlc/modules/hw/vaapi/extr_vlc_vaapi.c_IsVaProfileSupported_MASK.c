
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VAStatus ;
typedef scalar_t__ VAProfile ;
typedef int VADisplay ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int*) ;

__attribute__((used)) static bool
FUNC_4(VADisplay VAR_2, VAProfile VAR_3)
{

    if (VAR_3 == VAR_0)
        return 1;
    int VAR_4 = FUNC_2(VAR_2);
    if (VAR_4 < 0)
        return 0;
    VAProfile *VAR_5 = FUNC_0(VAR_4, sizeof(VAProfile));
    if (!VAR_5)
        return 0;

    bool VAR_6 = 0;
    VAStatus VAR_7 =
        FUNC_3(VAR_2, VAR_5, &VAR_4);
    if (VAR_7 != VAR_1)
        goto error;

    for (int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
        if (VAR_5[VAR_8] == VAR_3)
        {
            VAR_6 = 1;
            break;
        }
    }

error:
    FUNC_1(VAR_5);
    return VAR_6;
}
