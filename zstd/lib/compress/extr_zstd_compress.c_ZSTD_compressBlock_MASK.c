
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CCtx ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (int,int ) ;
 size_t FUNC_2 (int *,void*,size_t,void const*,size_t,int ,int ) ;
 size_t FUNC_3 (int *) ;
 int VAR_0 ;

size_t FUNC_4(ZSTD_CCtx* VAR_1, void* VAR_2, size_t VAR_3, const void* VAR_4, size_t VAR_5)
{
    FUNC_0(5, "ZSTD_compressBlock: srcSize = %u", (unsigned)VAR_5);
    { size_t const VAR_6 = FUNC_3(VAR_1);
      FUNC_1(VAR_5 > VAR_6, VAR_0); }

    return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0 , 0 );
}
