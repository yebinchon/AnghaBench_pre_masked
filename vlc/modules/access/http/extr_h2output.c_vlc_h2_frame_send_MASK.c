
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_tls {int dummy; } ;
struct vlc_h2_frame {int data; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct vlc_h2_frame*) ;
 int FUNC_1 () ;
 int FUNC_2 (int (*) (struct vlc_h2_frame*),struct vlc_h2_frame*) ;
 size_t FUNC_3 (struct vlc_h2_frame*) ;
 scalar_t__ FUNC_4 (struct vlc_tls*,int ,size_t) ;

__attribute__((used)) static int FUNC_5(struct vlc_tls *VAR_0, struct vlc_h2_frame *VAR_1)
{
    size_t VAR_2 = FUNC_3(VAR_1);
    ssize_t VAR_3;

    FUNC_2(FUNC_0, VAR_1);
    VAR_3 = FUNC_4(VAR_0, VAR_1->data, VAR_2);
    FUNC_1();
    FUNC_0(VAR_1);

    return ((size_t)VAR_3 == VAR_2) ? 0 : -1;
}
