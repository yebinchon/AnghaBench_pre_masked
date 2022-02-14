
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
typedef int uint8_t ;
struct vlc_tls {int dummy; } ;
struct vlc_h2_frame {int* data; int * next; } ;
typedef int ssize_t ;


 int FUNC_0 (struct vlc_h2_frame*) ;
 struct vlc_h2_frame* FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int (*) (struct vlc_h2_frame*),struct vlc_h2_frame*) ;
 int FUNC_6 (struct vlc_tls*,int*,int) ;

__attribute__((used)) static struct vlc_h2_frame *FUNC_7(struct vlc_tls *VAR_0)
{
    uint8_t VAR_1[9];
    ssize_t VAR_2 = FUNC_6(VAR_0, VAR_1, 9);

    if (VAR_2 < 3)
        return ((void*)0);

    uint_fast32_t VAR_3 = 9 + ((VAR_1[0] << 16) | (VAR_1[1] << 8) | VAR_1[2]);

    struct vlc_h2_frame *VAR_4 = FUNC_1(sizeof (*VAR_4) + VAR_3);
    if (FUNC_3(VAR_4 == ((void*)0)))
        return ((void*)0);

    VAR_4->next = ((void*)0);
    FUNC_2(VAR_4->data, VAR_1, VAR_2);
    VAR_3 -= VAR_2;

    if (VAR_3 > 0)
    {
        FUNC_5(FUNC_0, VAR_4);
        if (FUNC_6(VAR_0, VAR_4->data + VAR_2, VAR_3) < (ssize_t)VAR_3)
        {
            FUNC_0(VAR_4);
            VAR_4 = ((void*)0);
        }
        FUNC_4();
    }
    return VAR_4;
}
