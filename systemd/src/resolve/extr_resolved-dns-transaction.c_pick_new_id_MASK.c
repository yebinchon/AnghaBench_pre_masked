
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int new_id ;
struct TYPE_3__ {int dns_transactions; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__*,int) ;

__attribute__((used)) static uint16_t FUNC_4(Manager *VAR_1) {
        uint16_t VAR_2;




        FUNC_1(VAR_0 < 0xFFFF);

        do
                FUNC_3(&VAR_2, sizeof(VAR_2));
        while (VAR_2 == 0 ||
               FUNC_2(VAR_1->dns_transactions, FUNC_0(VAR_2)));

        return VAR_2;
}
