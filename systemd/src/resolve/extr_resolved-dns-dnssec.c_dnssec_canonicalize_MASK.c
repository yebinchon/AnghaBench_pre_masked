
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const**,char*,size_t,int ) ;
 scalar_t__ FUNC_3 (char*,char,int) ;

int FUNC_4(const char *VAR_2, char *VAR_3, size_t VAR_4) {
        size_t VAR_5 = 0;
        int VAR_6;




        if (VAR_4 < 2)
                return -VAR_1;

        for (;;) {
                VAR_6 = FUNC_2(&VAR_2, VAR_3, VAR_4, 0);
                if (VAR_6 < 0)
                        return VAR_6;
                if (VAR_6 == 0)
                        break;

                if (VAR_4 < (size_t) VAR_6 + 2)
                        return -VAR_1;





                if (FUNC_3(VAR_3, '.', VAR_6))
                        return -VAR_0;

                FUNC_0(VAR_3, (size_t) VAR_6);
                VAR_3[VAR_6] = '.';

                VAR_3 += VAR_6 + 1;
                VAR_5 += VAR_6 + 1;

                VAR_4 -= VAR_6 + 1;
        }

        if (VAR_5 <= 0) {


                FUNC_1(VAR_4 > 2);
                VAR_3[0] = '.';
                VAR_3[1] = 0;

                return 1;
        }

        return (int) VAR_5;
}
