
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
typedef int uint8_t ;
struct vlc_h2_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,void const*,size_t) ;
 struct vlc_h2_frame* FUNC_2 (int ,int ,int ,size_t) ;
 int FUNC_3 (struct vlc_h2_frame*) ;

struct vlc_h2_frame *
FUNC_4(uint_fast32_t VAR_2, const void *VAR_3, size_t VAR_4,
                  bool VAR_5)
{
    struct vlc_h2_frame *VAR_6;
    uint8_t VAR_7 = VAR_5 ? VAR_0 : 0;

    VAR_6 = FUNC_2(VAR_1, VAR_7, VAR_2, VAR_4);
    if (FUNC_0(VAR_6 != ((void*)0)))
        FUNC_1(FUNC_3(VAR_6), VAR_3, VAR_4);
    return VAR_6;
}
