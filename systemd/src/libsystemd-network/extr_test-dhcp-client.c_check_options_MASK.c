
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct duid {int dummy; } ;
typedef struct duid uint32_t ;
typedef int iaid ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct duid*,size_t*) ;
 int FUNC_2 (int,int ,int ,int,struct duid*) ;
 int VAR_1 ;
 int FUNC_3 (int*,struct duid*,size_t) ;

__attribute__((used)) static int FUNC_4(uint8_t VAR_2, uint8_t VAR_3, const void *VAR_4, void *VAR_5) {
        switch(VAR_2) {
        case 128:
        {
                uint32_t VAR_6;
                struct duid VAR_7;
                size_t VAR_8;

                FUNC_0(FUNC_1(&VAR_7, &VAR_8) >= 0);
                FUNC_0(FUNC_2(42, VAR_1, VAR_0, 1, &VAR_6) >= 0);

                FUNC_0(VAR_3 == sizeof(uint8_t) + sizeof(uint32_t) + VAR_8);
                FUNC_0(VAR_3 == 19);
                FUNC_0(((uint8_t*) VAR_4)[0] == 0xff);

                FUNC_0(FUNC_3((uint8_t*) VAR_4 + 1, &VAR_6, sizeof(VAR_6)) == 0);
                FUNC_0(FUNC_3((uint8_t*) VAR_4 + 5, &VAR_7, VAR_8) == 0);
                break;
        }

        default:
                break;
        }

        return 0;
}
