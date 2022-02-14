
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int t ;
typedef int sa_family_t ;
typedef int nodes_list ;
typedef int Node_format ;
typedef int DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int ,int,int ) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 () ;

Node_format FUNC_4(DHT *VAR_2, sa_family_t VAR_3)
{
    uint8_t VAR_4[VAR_1];
    uint32_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1 / 4; ++VAR_5) {
        uint32_t VAR_6 = FUNC_3();
        FUNC_1(VAR_4 + VAR_5 * sizeof(VAR_6), &VAR_6, sizeof(VAR_6));
    }

    Node_format VAR_7[VAR_0];
    FUNC_2(VAR_7, 0, sizeof(VAR_7));
    uint32_t VAR_8 = FUNC_0(VAR_2, VAR_4, VAR_7, VAR_3, 1, 0);

    if (VAR_8 == 0)
        return VAR_7[0];
    else
        return VAR_7[FUNC_3() % VAR_8];
}
