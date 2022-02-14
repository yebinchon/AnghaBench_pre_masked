
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct siphash {int v0; int v1; int v2; int v3; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,size_t,int const*) ;
 int FUNC_2 (int const*,size_t,struct siphash*) ;
 int FUNC_3 (struct siphash*) ;
 int FUNC_4 (struct siphash*,int const*) ;

__attribute__((used)) static void FUNC_5(const uint8_t *VAR_0, size_t VAR_1, const uint8_t *VAR_2) {
        struct siphash VAR_3 = {};
        uint64_t VAR_4;
        unsigned VAR_5, VAR_6;

        VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
        FUNC_0(VAR_4 == 0xa129ca6149be45e5);


        FUNC_4(&VAR_3, VAR_2);
        FUNC_0(VAR_3.v0 == 0x7469686173716475);
        FUNC_0(VAR_3.v1 == 0x6b617f6d656e6665);
        FUNC_0(VAR_3.v2 == 0x6b7f62616d677361);
        FUNC_0(VAR_3.v3 == 0x7b6b696e727e6c7b);
        FUNC_2(VAR_0, VAR_1, &VAR_3);
        FUNC_0(VAR_3.v0 == 0x4a017198de0a59e0);
        FUNC_0(VAR_3.v1 == 0x0d52f6f62a4f59a4);
        FUNC_0(VAR_3.v2 == 0x634cb3577b01fd3d);
        FUNC_0(VAR_3.v3 == 0xa5224d6f55c7d9c8);
        VAR_4 = FUNC_3(&VAR_3);
        FUNC_0(VAR_4 == 0xa129ca6149be45e5);
        FUNC_0(VAR_3.v0 == 0xf6bcd53893fecff1);
        FUNC_0(VAR_3.v1 == 0x54b9964c7ea0d937);
        FUNC_0(VAR_3.v2 == 0x1b38329c099bb55a);
        FUNC_0(VAR_3.v3 == 0x1814bb89ad7be679);



        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
                for (VAR_6 = VAR_5; VAR_6 < VAR_1; VAR_6++) {
                        FUNC_4(&VAR_3, VAR_2);
                        FUNC_2(VAR_0, VAR_5, &VAR_3);
                        FUNC_2(&VAR_0[VAR_5], VAR_6 - VAR_5, &VAR_3);
                        FUNC_2(&VAR_0[VAR_6], VAR_1 - VAR_6, &VAR_3);
                        VAR_4 = FUNC_3(&VAR_3);
                        FUNC_0(VAR_4 == 0xa129ca6149be45e5);
                }
        }
}
