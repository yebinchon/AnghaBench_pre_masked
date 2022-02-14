
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buffer ;
typedef int DHCPMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,size_t,size_t*,int ,int ,int,int*) ;
 int FUNC_1 (char const*,int*,int,int) ;

__attribute__((used)) static int FUNC_2(
                DHCPMessage *VAR_4,
                size_t VAR_5,
                size_t *VAR_6,
                const char *VAR_7) {

        uint8_t VAR_8[3 + VAR_2];
        int VAR_9;

        VAR_8[0] = VAR_1 |
                    VAR_0;
        VAR_8[1] = 0;
        VAR_8[2] = 0;

        VAR_9 = FUNC_1(VAR_7, VAR_8 + 3, sizeof(VAR_8) - 3, 0);
        if (VAR_9 > 0)
                VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, 0,
                                       VAR_3, 3 + VAR_9, VAR_8);

        return VAR_9;
}
