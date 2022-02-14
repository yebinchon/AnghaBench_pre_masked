
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const**,int,unsigned int*) ;
 int FUNC_2 (char const*,char const**,unsigned long*) ;

__attribute__((used)) static int FUNC_3(const char **VAR_4, bool VAR_5, int *VAR_6) {
        unsigned long VAR_7;
        const char *VAR_8 = ((void*)0);
        int VAR_9;

        if (!FUNC_0(**VAR_4))
                return -VAR_0;

        VAR_9 = FUNC_2(*VAR_4, &VAR_8, &VAR_7);
        if (VAR_9 < 0)
                return VAR_9;

        if (VAR_5) {
                if (VAR_7 * VAR_3 / VAR_3 != VAR_7)
                        return -VAR_1;

                VAR_7 *= VAR_3;


                if (VAR_8[0] == '.' && VAR_8[1] != '.') {
                        unsigned VAR_10;

                        VAR_8++;
                        VAR_9 = FUNC_1(&VAR_8, 6, &VAR_10);
                        if (VAR_9 < 0)
                                return VAR_9;

                        if (VAR_10 + VAR_7 < VAR_7)
                                return -VAR_1;
                        VAR_7 += VAR_10;
                }
        }

        if (VAR_7 > VAR_2)
                return -VAR_1;

        *VAR_4 = VAR_8;
        *VAR_6 = VAR_7;

        return 0;
}
