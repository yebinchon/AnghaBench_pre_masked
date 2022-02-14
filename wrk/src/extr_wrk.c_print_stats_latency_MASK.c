
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int stats ;
typedef int percentiles ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,long double) ;

__attribute__((used)) static void FUNC_3(stats *VAR_1) {
    long double VAR_2[] = { 50.0, 75.0, 90.0, 99.0 };
    FUNC_1("  Latency Distribution\n");
    for (size_t VAR_3 = 0; VAR_3 < sizeof(VAR_2) / sizeof(long double); VAR_3++) {
        long double VAR_4 = VAR_2[VAR_3];
        uint64_t VAR_5 = FUNC_2(VAR_1, VAR_4);
        FUNC_1("%7.0Lf%%", VAR_4);
        FUNC_0(VAR_5, VAR_0, 10);
        FUNC_1("\n");
    }
}
