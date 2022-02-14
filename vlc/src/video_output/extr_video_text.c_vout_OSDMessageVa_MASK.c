
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char const*,int ) ;
 int FUNC_3 (int *,int,int,int ,char*) ;

void FUNC_4(vout_thread_t *VAR_2, int VAR_3,
                       const char *VAR_4, va_list VAR_5)
{
    char *VAR_6;
    if (FUNC_2(&VAR_6, VAR_4, VAR_5) != -1) {
        FUNC_3(VAR_2, VAR_3,
                     VAR_1|VAR_0, FUNC_0(1),
                     VAR_6);
        FUNC_1(VAR_6);
    }
}
