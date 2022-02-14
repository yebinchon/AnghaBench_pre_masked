
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;


 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,short) ;

__attribute__((used)) static inline void
FUNC_1(vout_thread_t **VAR_3, size_t VAR_4, int VAR_5, short VAR_6)
{
    int VAR_7 = VAR_6 == VAR_0 ?
        VAR_1 : VAR_2;
    for (size_t VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
        FUNC_0(VAR_3[VAR_8], VAR_7, VAR_5, VAR_6);
}
