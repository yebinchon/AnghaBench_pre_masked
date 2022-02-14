
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_frame {int data; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 size_t FUNC_2 (struct vlc_h2_frame*) ;
 scalar_t__ FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static void FUNC_4(struct vlc_h2_frame *VAR_1)
{
    FUNC_0(VAR_1 != ((void*)0));

    size_t VAR_2 = FUNC_2(VAR_1);
    ssize_t VAR_3 = FUNC_3(VAR_0, VAR_1->data, VAR_2);
    FUNC_0((size_t)VAR_3 == VAR_2);
    FUNC_1(VAR_1);
}
