
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; int secret_symmetric_key; } ;
typedef TYPE_1__ Onion ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(Onion *VAR_1)
{
    if (FUNC_0(VAR_1->timestamp, VAR_0)) {
        FUNC_1(VAR_1->secret_symmetric_key);
        VAR_1->timestamp = FUNC_2();
    }
}
