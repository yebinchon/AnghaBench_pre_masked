
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int sock; } ;
typedef TYPE_1__ TCP_Secure_Connection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int,int const*) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(TCP_Secure_Connection *VAR_1, const uint8_t *VAR_2)
{
    uint8_t VAR_3[VAR_0];
    int VAR_4 = 0;

    if ((VAR_4 = FUNC_1(VAR_1->sock, VAR_3, VAR_0)) != -1) {
        return FUNC_0(VAR_1, VAR_3, VAR_4, VAR_2);
    }

    return 0;
}
