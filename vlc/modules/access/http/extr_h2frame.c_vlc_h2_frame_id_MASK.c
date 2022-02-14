
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
struct vlc_h2_frame {scalar_t__ data; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint_fast32_t FUNC_1(const struct vlc_h2_frame *VAR_0)
{
    return FUNC_0(VAR_0->data + 5) & 0x7FFFFFFF;
}
