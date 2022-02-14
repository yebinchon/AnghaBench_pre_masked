
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int Header ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
                const Header *VAR_4,
                uint64_t VAR_5,
                uint64_t *VAR_6,
                bool *VAR_7,
                uint64_t *VAR_8) {

        uint64_t VAR_9;

        VAR_9 = FUNC_1(VAR_5);

        if (VAR_9 & VAR_1) {
                uint64_t VAR_10, VAR_11, VAR_12;

                if (!VAR_7)
                        return -VAR_0;

                VAR_11 = 64 - 2 - (FUNC_0(VAR_4) - 8);
                VAR_12 = (1ULL << (FUNC_0(VAR_4) - 8)) - 1;
                VAR_10 = (((VAR_9 >> VAR_11) & VAR_12) + 1) * 512 - (VAR_9 & 511);
                VAR_9 &= ((1ULL << VAR_11) - 1);

                if (VAR_8)
                        *VAR_8 = VAR_10;

                *VAR_7 = 1;

        } else {
                if (VAR_7) {
                        *VAR_7 = 0;
                        *VAR_8 = 0;
                }

                if (VAR_9 & VAR_3) {

                        *VAR_6 = 0;
                        return 0;
                }

                VAR_9 &= ~VAR_2;
        }

        *VAR_6 = VAR_9;
        return VAR_9 > 0;
}
