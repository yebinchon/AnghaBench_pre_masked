
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_prerender_ctx_s {int cleanuplock; int ** pp_processed; int fmtsrc; int fmtdst; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct spu_prerender_ctx_s *VAR_1 = VAR_0;
    FUNC_0(&VAR_1->fmtdst);
    FUNC_0(&VAR_1->fmtsrc);
    *VAR_1->pp_processed = ((void*)0);
    FUNC_1(VAR_1->cleanuplock);
}
