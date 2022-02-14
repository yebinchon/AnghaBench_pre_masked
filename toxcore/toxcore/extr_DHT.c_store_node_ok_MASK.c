
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int timestamp; } ;
struct TYPE_5__ {int timestamp; } ;
struct TYPE_7__ {int public_key; TYPE_2__ assoc6; TYPE_1__ assoc4; } ;
typedef TYPE_3__ Client_data ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ,int const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static unsigned int FUNC_2(const Client_data *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    if ((FUNC_1(VAR_1->assoc4.timestamp, VAR_0) && FUNC_1(VAR_1->assoc6.timestamp, VAR_0))
            || (FUNC_0(VAR_3, VAR_1->public_key, VAR_2) == 2)) {
        return 1;
    } else {
        return 0;
    }
}
