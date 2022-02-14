
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTDv06_DCtx ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int *) ;
 size_t FUNC_2 (int *,void const*,size_t) ;
 scalar_t__ FUNC_3 (size_t const) ;
 int VAR_0 ;

size_t FUNC_4(ZSTDv06_DCtx* VAR_1, const void* VAR_2, size_t VAR_3)
{
    { size_t const VAR_4 = FUNC_1(VAR_1);
      if (FUNC_3(VAR_4)) return VAR_4; }

    if (VAR_2 && VAR_3) {
        size_t const VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
        if (FUNC_3(VAR_5)) return FUNC_0(VAR_0);
    }

    return 0;
}
