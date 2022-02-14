
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_compressionParameters ;
typedef int U32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (void* const,size_t,double,double,int ) ;
 int FUNC_2 (int,void* const,size_t,int,int ) ;
 int FUNC_3 (void* const) ;
 void* FUNC_4 (size_t) ;

__attribute__((used)) static int FUNC_5(U32 VAR_0,
                       size_t VAR_1, double VAR_2,
                       int VAR_3, ZSTD_compressionParameters VAR_4)
{

    void* const VAR_5 = FUNC_4(VAR_1);
    if (!VAR_5) { FUNC_0("\nError: not enough memory!\n"); return 12; }


    FUNC_1(VAR_5, VAR_1, VAR_2, 0.0, 0);


    FUNC_0("\r%70s\r", "");
    FUNC_0(" Sample %u bytes : \n", (unsigned)VAR_1);
    if (VAR_0) {
        FUNC_2(VAR_0, VAR_5, VAR_1, VAR_3, VAR_4);
    } else {
        for (VAR_0=0; VAR_0<100; VAR_0++) {
            FUNC_2(VAR_0, VAR_5, VAR_1, VAR_3, VAR_4);
    } }

    FUNC_3(VAR_5);
    return 0;
}
