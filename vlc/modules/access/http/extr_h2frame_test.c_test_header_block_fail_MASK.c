
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_frame {struct vlc_h2_frame* next; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct vlc_h2_frame* FUNC_1 () ;
 struct vlc_h2_frame* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,struct vlc_h2_frame*,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    struct vlc_h2_frame *VAR_1 = FUNC_2(1);
    struct vlc_h2_frame *VAR_2 = FUNC_1();


    FUNC_0(VAR_1 != ((void*)0) && VAR_1->next != ((void*)0) && VAR_2 != ((void*)0));
    VAR_2->next = VAR_1->next;
    VAR_1->next = VAR_2;
    FUNC_0(FUNC_3(VAR_0, VAR_1, ((void*)0)) == 0);
}
