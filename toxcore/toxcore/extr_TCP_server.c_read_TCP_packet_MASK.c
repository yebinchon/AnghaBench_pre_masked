
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint16_t ;
typedef int sock_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,unsigned int,int ) ;
 int VAR_1 ;

int FUNC_3(sock_t VAR_2, uint8_t *VAR_3, uint16_t VAR_4)
{
    unsigned int VAR_5 = FUNC_0(VAR_2);

    if (VAR_5 >= VAR_4) {
        int VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0);

        if (VAR_6 != VAR_4) {
            FUNC_1(VAR_1, "FAIL recv packet\n");
            return -1;
        }

        return VAR_6;
    }

    return -1;
}
