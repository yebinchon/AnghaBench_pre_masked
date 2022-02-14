
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int packet ;
struct TYPE_4__ {int ping_response_id; } ;
typedef TYPE_1__ TCP_Client_Connection ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static int FUNC_2(TCP_Client_Connection *VAR_1)
{
    if (!VAR_1->ping_response_id)
        return 1;

    uint8_t VAR_2[1 + sizeof(uint64_t)];
    VAR_2[0] = VAR_0;
    FUNC_0(VAR_2 + 1, &VAR_1->ping_response_id, sizeof(uint64_t));
    int VAR_3;

    if ((VAR_3 = FUNC_1(VAR_1, VAR_2, sizeof(VAR_2), 1)) == 1) {
        VAR_1->ping_response_id = 0;
    }

    return VAR_3;
}
