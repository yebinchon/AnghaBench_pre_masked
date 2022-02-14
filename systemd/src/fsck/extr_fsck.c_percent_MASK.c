
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int const*) ;

__attribute__((used)) static double FUNC_1(int VAR_0, unsigned long VAR_1, unsigned long VAR_2) {


        static const int VAR_3[] = {
                0, 70, 90, 92, 95, 100
        };

        if (VAR_0 <= 0)
                return 0.0;

        if ((unsigned) VAR_0 >= FUNC_0(VAR_3) || VAR_2 == 0)
                return 100.0;

        return (double) VAR_3[VAR_0-1] +
                ((double) VAR_3[VAR_0] - (double) VAR_3[VAR_0-1]) *
                (double) VAR_1 / (double) VAR_2;
}
