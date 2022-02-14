
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ data; } ;
typedef TYPE_1__ DHCPClientId ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;

int FUNC_3(const DHCPClientId *VAR_0, const DHCPClientId *VAR_1) {
        int VAR_2;

        FUNC_1(!VAR_0->length || VAR_0->data);
        FUNC_1(!VAR_1->length || VAR_1->data);

        VAR_2 = FUNC_0(VAR_0->length, VAR_1->length);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_2(VAR_0->data, VAR_1->data, VAR_0->length);
}
