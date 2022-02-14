
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct msg {int mlen; } ;
struct mbuf {int dummy; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*,int *,size_t) ;
 size_t FUNC_2 () ;
 size_t FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (struct msg*,size_t) ;

rstatus_t
FUNC_5(struct msg *VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
    struct mbuf *VAR_5;

    FUNC_0(VAR_4 <= FUNC_2());

    VAR_5 = FUNC_4(VAR_2, VAR_4);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0(VAR_4 <= FUNC_3(VAR_5));

    FUNC_1(VAR_5, VAR_3, VAR_4);
    VAR_2->mlen += (uint32_t)VAR_4;

    return VAR_1;
}
