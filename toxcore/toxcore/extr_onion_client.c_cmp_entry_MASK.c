
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int public_key; int timestamp; } ;
typedef TYPE_1__ Onion_Node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,void const*,int) ;

__attribute__((used)) static int FUNC_3(const void *VAR_2, const void *VAR_3)
{
    Onion_Node VAR_4, VAR_5;
    FUNC_2(&VAR_4, VAR_2, sizeof(Onion_Node));
    FUNC_2(&VAR_5, VAR_3, sizeof(Onion_Node));
    int VAR_6 = FUNC_1(VAR_4, VAR_0);
    int VAR_7 = FUNC_1(VAR_5, VAR_0);

    if (VAR_6 && VAR_7)
        return 0;

    if (VAR_6)
        return -1;

    if (VAR_7)
        return 1;

    int VAR_8 = FUNC_0(VAR_1, VAR_4, VAR_5);

    if (VAR_8 == 1)
        return 1;

    if (VAR_8 == 2)
        return -1;

    return 0;
}
