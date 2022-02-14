
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sd_bus_message ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (unsigned int*,char,char*) ;
 int FUNC_2 (unsigned int*) ;
 int FUNC_3 (unsigned int*,char*,int*) ;
 int FUNC_4 (unsigned int*,int) ;
 int FUNC_5 (unsigned int*,char*) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_1, int VAR_2, unsigned *VAR_3) {
        unsigned VAR_4 = 0;
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_3);

        while ((VAR_5 = FUNC_1(VAR_1, 'r', "iay")) > 0) {
                int VAR_6;

                VAR_5 = FUNC_3(VAR_1, "i", &VAR_6);
                if (VAR_5 < 0)
                        return VAR_5;

                VAR_5 = FUNC_5(VAR_1, "ay");
                if (VAR_5 < 0)
                        return VAR_5;

                VAR_5 = FUNC_2(VAR_1);
                if (VAR_5 < 0)
                        return VAR_5;

                if (VAR_2 != VAR_0 && VAR_6 != VAR_2)
                        continue;

                VAR_4++;
        }
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_4(VAR_1, 0);
        if (VAR_5 < 0)
                return VAR_5;

        *VAR_3 = VAR_4;
        return 0;
}
