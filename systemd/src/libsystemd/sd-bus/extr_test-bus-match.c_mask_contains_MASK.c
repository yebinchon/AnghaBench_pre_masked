
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int*) ;
 int* VAR_0 ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_1[], unsigned VAR_2) {
        unsigned VAR_3, VAR_4;

        for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
                bool VAR_5 = 0;

                for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
                        if (VAR_1[VAR_4] == VAR_3) {
                                VAR_5 = 1;
                                break;
                        }

                if (VAR_5 != VAR_0[VAR_3])
                        return 0;
        }

        return 1;
}
