
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hxxx_helper_nal {int h264_sps; } ;
struct hxxx_helper {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,unsigned int*) ;
 struct hxxx_helper_nal* FUNC_1 (struct hxxx_helper const*) ;

int
FUNC_2(const struct hxxx_helper *VAR_2,
                                   uint8_t *VAR_3, unsigned *VAR_4)
{
    const struct hxxx_helper_nal *VAR_5 = FUNC_1(VAR_2);
    if (VAR_5 == ((void*)0))
        return VAR_0;
    return FUNC_0(VAR_5->h264_sps, VAR_3, VAR_4) ?
           VAR_1 : VAR_0;
}
