
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int name_length; int name; } ;
typedef TYPE_1__ Messenger ;


 int FUNC_0 (int *,int ,int ) ;

uint16_t FUNC_1(const Messenger *VAR_0, uint8_t *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        return 0;
    }

    FUNC_0(VAR_1, VAR_0->name, VAR_0->name_length);

    return VAR_0->name_length;
}
