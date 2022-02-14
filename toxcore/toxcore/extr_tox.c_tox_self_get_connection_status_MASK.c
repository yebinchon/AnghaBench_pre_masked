
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int onion_c; } ;
typedef TYPE_1__ Tox ;
typedef int TOX_CONNECTION ;
typedef TYPE_1__ Messenger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;

TOX_CONNECTION FUNC_1(const Tox *VAR_3)
{
    const Messenger *VAR_4 = VAR_3;

    unsigned int VAR_5 = FUNC_0(VAR_4->onion_c);

    if (VAR_5 == 2) {
        return VAR_2;
    } else if (VAR_5 == 1) {
        return VAR_1;
    } else {
        return VAR_0;
    }
}
