
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int params ;
struct TYPE_5__ {int contentSizeFlag; } ;
struct TYPE_6__ {TYPE_1__ fParams; int cParams; } ;
typedef TYPE_2__ ZSTD_parameters ;
typedef int ZSTD_compressionParameters ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,unsigned long long,size_t) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static ZSTD_parameters FUNC_3(int VAR_0, unsigned long long VAR_1, size_t VAR_2) {
    ZSTD_parameters VAR_3;
    ZSTD_compressionParameters const VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
    FUNC_0(5, "ZSTD_getParams (cLevel=%i)", VAR_0);
    FUNC_2(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.cParams = VAR_4;
    VAR_3.fParams.contentSizeFlag = 1;
    return VAR_3;
}
