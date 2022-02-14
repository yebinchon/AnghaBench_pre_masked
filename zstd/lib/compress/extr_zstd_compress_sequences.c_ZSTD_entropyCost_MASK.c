
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned int const* VAR_0 ;

__attribute__((used)) static size_t FUNC_1(unsigned const* VAR_1, unsigned const VAR_2, size_t const VAR_3)
{
    unsigned VAR_4 = 0;
    unsigned VAR_5;
    for (VAR_5 = 0; VAR_5 <= VAR_2; ++VAR_5) {
        unsigned VAR_6 = (unsigned)((256 * VAR_1[VAR_5]) / VAR_3);
        if (VAR_1[VAR_5] != 0 && VAR_6 == 0)
            VAR_6 = 1;
        FUNC_0(VAR_1[VAR_5] < VAR_3);
        VAR_4 += VAR_1[VAR_5] * VAR_0[VAR_6];
    }
    return VAR_4 >> 8;
}
