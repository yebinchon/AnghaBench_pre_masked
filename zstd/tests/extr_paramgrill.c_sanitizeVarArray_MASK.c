
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ varInds_t ;
typedef scalar_t__ ZSTD_strategy ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const VAR_5 ;

__attribute__((used)) static size_t FUNC_0(varInds_t* VAR_6, const size_t VAR_7, const varInds_t* VAR_8, const ZSTD_strategy VAR_9) {
    size_t VAR_10, VAR_11 = 0;
    for(VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
        if( !((VAR_8[VAR_10] == VAR_3 && VAR_9 == VAR_2)
            || (VAR_8[VAR_10] == VAR_4 && VAR_9 == VAR_2)
            || (VAR_8[VAR_10] == VAR_4 && VAR_9 == VAR_1)
            || (VAR_8[VAR_10] == VAR_5 && VAR_9 < VAR_0 && VAR_9 != VAR_2))) {
            VAR_6[VAR_11] = VAR_8[VAR_10];
            VAR_11++;
        }
    }
    return VAR_11;
}
