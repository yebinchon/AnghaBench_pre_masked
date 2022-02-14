
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int Tox ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int,...) ;
 int FUNC_2 (int *,int,int const*,int ) ;

void FUNC_3(Tox *VAR_1, int VAR_2, uint8_t VAR_3, const uint8_t *VAR_4, uint16_t VAR_5, void *VAR_6)
{
    char VAR_7[256];

    if (VAR_3 == VAR_0) {
        FUNC_1(VAR_7, "[i] received group chat invite from: %u, auto accepting and joining. group number: %u", VAR_2,
                FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5));
    } else {
        FUNC_1(VAR_7, "[i] Group chat invite received of type %u that could not be accepted by ntox.", VAR_3);
    }

    FUNC_0(VAR_7);
}
