
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ signature_packet_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int*,int) ;
 int FUNC_5 (char*,size_t,int*,size_t) ;
 int FUNC_6 (int*,int) ;
 size_t FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(signature_packet_t *VAR_3, const uint8_t *VAR_4)
{
    size_t VAR_5 = FUNC_7((char*)VAR_4);
    uint8_t *VAR_6 = FUNC_1((VAR_5 * 3) / 4 + 1);
    FUNC_0(VAR_4[0] < 0x80);
    int VAR_7 = FUNC_5((char*)VAR_4, VAR_5, VAR_6, VAR_5);

    FUNC_0(FUNC_3(VAR_6[0]) == VAR_1);

    int VAR_8 = FUNC_2(VAR_6[0]);
    FUNC_0(VAR_8 == 1 || VAR_8 == 2 || VAR_8 == 4);
    FUNC_0(VAR_8 < VAR_7);

    int VAR_9 = FUNC_6(&VAR_6[1], VAR_8);
    FUNC_0(VAR_9 + VAR_8 + 1 == VAR_7);

    FUNC_0(!FUNC_4(VAR_3, &VAR_6[1+VAR_8], VAR_9));

    FUNC_0(VAR_3->type == VAR_0 || VAR_3->type == VAR_2);
}
