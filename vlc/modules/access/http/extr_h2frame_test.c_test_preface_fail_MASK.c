
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_parser {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct vlc_h2_parser*,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct vlc_h2_parser*) ;
 struct vlc_h2_parser* FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(void)
{
    struct vlc_h2_parser *VAR_2;

    VAR_2 = FUNC_4(VAR_0, &VAR_1);
    FUNC_0(VAR_2 != ((void*)0));

    FUNC_0(FUNC_2(VAR_2, FUNC_1(), FUNC_1(), ((void*)0)) == 0);

    FUNC_3(VAR_2);
}
