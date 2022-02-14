
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int params ;
struct TYPE_4__ {int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
typedef int ZSTD_compressionParameters ;


 int FUNC_0 (int,unsigned long long,size_t) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

ZSTD_parameters FUNC_2(int VAR_0, unsigned long long VAR_1, size_t VAR_2)
{
 ZSTD_parameters VAR_3;
 ZSTD_compressionParameters const VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.cParams = VAR_4;
 return VAR_3;
}
