
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct params_s {scalar_t__ packets_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const*,size_t) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1,
                 const uint8_t *VAR_2, size_t VAR_3,
                 const struct params_s *VAR_4)
{
    FUNC_0(FUNC_1(VAR_2, VAR_3) == VAR_4->packets_count);
    return VAR_0;
}
