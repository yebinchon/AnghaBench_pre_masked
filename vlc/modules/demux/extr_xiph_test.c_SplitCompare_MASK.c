
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params_s {unsigned int packets_count; void const** packets; unsigned int* packets_sizes; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const char *VAR_1,
                        unsigned VAR_2[],
                        const void *VAR_3[], unsigned VAR_4,
                        const struct params_s *VAR_5)
{
    FUNC_0(VAR_5->packets_count == VAR_4);
    for(unsigned VAR_6=0; VAR_6<VAR_4; VAR_6++)
    {
        FUNC_0(VAR_5->packets[VAR_6] == VAR_3[VAR_6]);
        FUNC_0(VAR_5->packets_sizes[VAR_6] == VAR_2[VAR_6]);
    }
    return VAR_0;
}
