
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {size_t dstSize; int done; int compressionLevel; int srcSize; int src; int dst; int checksum; } ;


 int FUNC_0 (int ,int ,int ) ;
 size_t FUNC_1 (int ,size_t,int ,int ,int ) ;
 char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(void* VAR_1)
{
    struct job* VAR_2 = VAR_1;

    VAR_2->checksum = FUNC_0(VAR_2->src, VAR_2->srcSize, 0);

    size_t VAR_3 = FUNC_1(VAR_2->dst, VAR_2->dstSize, VAR_2->src, VAR_2->srcSize, VAR_2->compressionLevel);
    if (FUNC_3(VAR_3)) {
        FUNC_5(VAR_0, "ZSTD_compress() error : %s \n", FUNC_2(VAR_3));
        FUNC_4(20);
    }

    VAR_2->dstSize = VAR_3;
    VAR_2->done = 1;
}
