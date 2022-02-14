
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct params_s {int dummy; } ;


 int FUNC_0 (char const*,unsigned int*,void const**,unsigned int,struct params_s const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int*,void const**,unsigned int*,size_t,int const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2,
                 const uint8_t *VAR_3, size_t VAR_4,
                 const struct params_s *VAR_5)
{
    const void *VAR_6[VAR_1];
    unsigned VAR_7[VAR_1];
    unsigned VAR_8;
    int VAR_9 = FUNC_1(VAR_7, VAR_6, &VAR_8,
                                    VAR_4, VAR_3);
    if(VAR_9 == VAR_0)
        VAR_9 = FUNC_0(VAR_2, VAR_7, VAR_6, VAR_8, VAR_5);
    return VAR_9;
}
