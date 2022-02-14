
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hardening; int timestamp; } ;
struct TYPE_5__ {int hardening; int timestamp; } ;
struct TYPE_7__ {int public_key; TYPE_2__ assoc6; TYPE_1__ assoc4; } ;
typedef TYPE_3__ Client_data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,void const*,int) ;

__attribute__((used)) static int FUNC_4(const void *VAR_3, const void *VAR_4)
{
    Client_data VAR_5, VAR_6;
    FUNC_3(&VAR_5, VAR_3, sizeof(Client_data));
    FUNC_3(&VAR_6, VAR_4, sizeof(Client_data));
    int VAR_7 = FUNC_2(VAR_5, VAR_0) && FUNC_2(VAR_5, VAR_0);
    int VAR_8 = FUNC_2(VAR_6, VAR_0) && FUNC_2(VAR_6, VAR_0);

    if (VAR_7 && VAR_8)
        return 0;

    if (VAR_7)
        return -1;

    if (VAR_8)
        return 1;

    VAR_7 = FUNC_0(&VAR_5) != VAR_1
         && FUNC_0(&VAR_5) != VAR_1;
    VAR_8 = FUNC_0(&VAR_6) != VAR_1
         && FUNC_0(&VAR_6) != VAR_1;

    if (VAR_7 != VAR_8) {
        if (VAR_7)
            return -1;

        if (VAR_8)
            return 1;
    }

    int VAR_9 = FUNC_1(VAR_2, VAR_5, VAR_6);

    if (VAR_9 == 1)
        return 1;

    if (VAR_9 == 2)
        return -1;

    return 0;
}
