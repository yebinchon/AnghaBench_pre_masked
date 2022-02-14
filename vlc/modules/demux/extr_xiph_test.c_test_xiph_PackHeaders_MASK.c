
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct params_s {int packets_count; int packets; scalar_t__ packets_sizes; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int const*,void*,size_t) ;
 int FUNC_3 (int*,void**,unsigned int*,int ,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1,
                 const uint8_t *VAR_2, size_t VAR_3,
                 const struct params_s *VAR_4)
{
    void *VAR_5;
    int VAR_6;

    int VAR_7 = FUNC_3(&VAR_6, &VAR_5,
                               (unsigned *) VAR_4->packets_sizes,
                               VAR_4->packets, VAR_4->packets_count);
    if(VAR_7 == VAR_0)
    {
        FUNC_0((VAR_3 == (unsigned)VAR_6), FUNC_1(VAR_5));
        FUNC_0(!FUNC_2(VAR_2, VAR_5, VAR_3), FUNC_1(VAR_5));
        FUNC_1(VAR_5);
    }
    return VAR_7;
}
