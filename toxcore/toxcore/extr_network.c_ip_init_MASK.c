
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int family; } ;
typedef TYPE_1__ IP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(IP *VAR_2, uint8_t VAR_3)
{
    if (!VAR_2)
        return;

    FUNC_0(VAR_2, 0, sizeof(IP));
    VAR_2->family = VAR_3 ? VAR_1 : VAR_0;
}
