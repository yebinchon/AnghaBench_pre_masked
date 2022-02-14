
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vlc_h2_frame {int dummy; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int ) ;
 struct vlc_h2_frame* FUNC_3 (int ,int ,int ,unsigned int) ;
 int * FUNC_4 (struct vlc_h2_frame*) ;

struct vlc_h2_frame *FUNC_5(void)
{
    unsigned VAR_15 = (VAR_7 != VAR_2)
               + 1



               + (VAR_4 != VAR_0)
               + (VAR_5 != VAR_1)



    ;
    struct vlc_h2_frame *VAR_16 = FUNC_3(VAR_3, 0, 0,
                                                VAR_15 * 6);
    if (FUNC_2(VAR_16 == ((void*)0)))
        return ((void*)0);

    uint8_t *VAR_17 = FUNC_4(VAR_16);







    FUNC_1(VAR_17, VAR_9);
    FUNC_0(VAR_17 + 2, 0);
    VAR_17 += 6;
    return VAR_16;
}
