
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlc_h2_conn {int dummy; } ;


 scalar_t__ FUNC_0 (struct vlc_h2_conn*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint32_t *restrict VAR_1)
{
    struct vlc_h2_conn *VAR_2 = VAR_0;



    if (*VAR_1 < (1 << 30)
     && FUNC_0(VAR_2,
                               FUNC_1(0, 1 << 30)) == 0)
        *VAR_1 += 1 << 30;
}
