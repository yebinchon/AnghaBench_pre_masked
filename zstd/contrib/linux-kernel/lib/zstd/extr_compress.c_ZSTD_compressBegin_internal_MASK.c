
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_parameters ;
typedef int ZSTD_compResetPolicy_e ;
typedef int ZSTD_CCtx ;
typedef int U64 ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,int ,int ,int const) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_3(ZSTD_CCtx *VAR_2, const void *VAR_3, size_t VAR_4, ZSTD_parameters VAR_5, U64 VAR_6)
{
 ZSTD_compResetPolicy_e const VAR_7 = VAR_4 ? VAR_1 : VAR_0;
 FUNC_0(FUNC_2(VAR_2, VAR_5, VAR_6, VAR_7));
 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
