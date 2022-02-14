
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int (* Assoc_distance_relative_callback ) (int *,void*,int *,int *,int *) ;
typedef int Assoc ;


 int * FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(Assoc *VAR_0, uint64_t *VAR_1, size_t VAR_2, size_t VAR_3, uint8_t *VAR_4,
                              void *VAR_5, Assoc_distance_relative_callback VAR_6)
{
    size_t VAR_7, VAR_8;

    for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++) {
        uint8_t *VAR_9 = FUNC_0(VAR_0, VAR_1[VAR_7]);

        for (VAR_8 = VAR_7 + 1; VAR_8 <= VAR_3; VAR_8++) {
            uint8_t *VAR_10 = FUNC_0(VAR_0, VAR_1[VAR_8]);

            if (VAR_9 && VAR_10)
                if (VAR_6(VAR_0, VAR_5, VAR_4, VAR_9, VAR_10) == 2) {
                    uint64_t VAR_11 = VAR_1[VAR_7];
                    VAR_1[VAR_7] = VAR_1[VAR_8];
                    VAR_1[VAR_8] = VAR_11;
                }
        }
    }
}
