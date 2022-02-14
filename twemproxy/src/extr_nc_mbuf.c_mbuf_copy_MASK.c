
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mbuf {size_t last; int * end; int * start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*) ;
 size_t FUNC_2 (struct mbuf*) ;
 int FUNC_3 (size_t,int *,size_t) ;

void
FUNC_4(struct mbuf *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
    if (VAR_2 == 0) {
        return;
    }


    FUNC_0(!FUNC_1(VAR_0) && VAR_2 <= FUNC_2(VAR_0));


    FUNC_0(VAR_1 < VAR_0->start || VAR_1 >= VAR_0->end);

    FUNC_3(VAR_0->last, VAR_1, VAR_2);
    VAR_0->last += VAR_2;
}
