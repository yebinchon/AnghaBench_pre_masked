
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int TCP_Server ;
typedef int TCP_Secure_Connection ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(TCP_Server *VAR_0, TCP_Secure_Connection *VAR_1, const uint8_t *VAR_2,
                                  uint16_t VAR_3)
{
    int VAR_4 = FUNC_0(VAR_0, VAR_1);

    if (VAR_4 == -1) {
        FUNC_2(VAR_1);
        return -1;
    }

    FUNC_4(VAR_1, sizeof(TCP_Secure_Connection));

    if (FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3) == -1) {
        FUNC_3(VAR_0, VAR_4);
        return -1;
    }

    return VAR_4;
}
