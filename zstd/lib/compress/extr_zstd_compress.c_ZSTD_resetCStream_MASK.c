
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CStream ;
typedef unsigned long long U64 ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long long const) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;

size_t FUNC_4(ZSTD_CStream* VAR_2, unsigned long long VAR_3)
{




    U64 const VAR_4 = (VAR_3==0) ? VAR_0 : VAR_3;
    FUNC_0(4, "ZSTD_resetCStream: pledgedSrcSize = %u", (unsigned)VAR_4);
    FUNC_1( FUNC_2(VAR_2, VAR_1) );
    FUNC_1( FUNC_3(VAR_2, VAR_4) );
    return 0;
}
