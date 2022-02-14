
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int gcry_md_hd_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,void const*,size_t) ;
 int FUNC_8 (void*,int ,size_t) ;

__attribute__((used)) static void FUNC_9(void *VAR_1, size_t VAR_2, const void *VAR_3, size_t VAR_4, uint32_t VAR_5) {
        gcry_md_hd_t VAR_6, VAR_7;
        size_t VAR_8, VAR_9;
        uint32_t VAR_10;

        VAR_8 = FUNC_3(VAR_0);
        FUNC_4(&VAR_6, VAR_0, 0);
        FUNC_7(VAR_6, VAR_3, VAR_4);
        FUNC_5(VAR_6, (VAR_5 >> 24) & 0xff);
        FUNC_5(VAR_6, (VAR_5 >> 16) & 0xff);
        FUNC_5(VAR_6, (VAR_5 >> 8) & 0xff);
        FUNC_5(VAR_6, (VAR_5 >> 0) & 0xff);

        for (VAR_10 = 0; VAR_2; VAR_10++) {
                FUNC_1(&VAR_7, VAR_6);
                FUNC_5(VAR_7, (VAR_10 >> 24) & 0xff);
                FUNC_5(VAR_7, (VAR_10 >> 16) & 0xff);
                FUNC_5(VAR_7, (VAR_10 >> 8) & 0xff);
                FUNC_5(VAR_7, (VAR_10 >> 0) & 0xff);
                FUNC_2(VAR_7);
                VAR_9 = (VAR_2 < VAR_8) ? VAR_2 : VAR_8;
                FUNC_8(VAR_1, FUNC_6(VAR_7, VAR_0), VAR_9);
                FUNC_0(VAR_7);
                VAR_1 += VAR_9;
                VAR_2 -= VAR_9;
        }
        FUNC_0(VAR_6);
}
