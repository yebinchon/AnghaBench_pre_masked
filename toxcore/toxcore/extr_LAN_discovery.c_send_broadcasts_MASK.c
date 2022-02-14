
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int Networking_Core ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int const*,int ) ;

__attribute__((used)) static uint32_t FUNC_2(Networking_Core *VAR_2, uint16_t VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{


    if (VAR_0 < 0)
        FUNC_0(VAR_3);

    if (!VAR_0)
        return 0;

    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        FUNC_1(VAR_2, VAR_1[VAR_6], VAR_4, VAR_5);

    return 1;
}
