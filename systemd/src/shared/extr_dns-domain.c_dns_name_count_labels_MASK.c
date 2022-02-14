
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const**) ;

int FUNC_2(const char *VAR_2) {
        unsigned VAR_3 = 0;
        const char *VAR_4;
        int VAR_5;

        FUNC_0(VAR_2);

        VAR_4 = VAR_2;
        for (;;) {
                VAR_5 = FUNC_1(&VAR_4);
                if (VAR_5 < 0)
                        return VAR_5;
                if (VAR_5 == 0)
                        break;

                if (VAR_3 >= VAR_0)
                        return -VAR_1;

                VAR_3++;
        }

        return (int) VAR_3;
}
