
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,size_t*,int ,int,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int *,int,int) ;

int FUNC_4(uint8_t **VAR_4, size_t *VAR_5, const char *VAR_6) {
        uint8_t VAR_7[1 + VAR_1];
        int VAR_8;

        FUNC_0(VAR_4 && *VAR_4 && VAR_5 && VAR_6, -VAR_2);

        VAR_7[0] = VAR_0;


        VAR_8 = FUNC_3(VAR_6, VAR_7 + 1, sizeof(VAR_7) - 1, 0);
        if (VAR_8 <= 0)
                return VAR_8;







        if (FUNC_2(VAR_6))
                VAR_8--;

        VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_3, 1 + VAR_8, VAR_7);

        return VAR_8;
}
