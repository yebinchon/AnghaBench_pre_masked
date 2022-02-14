
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct msg {int mhdr; int mlen; } ;
struct mbuf {int dummy; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mbuf*,int ) ;
 int FUNC_2 (struct mbuf*,int *,size_t) ;
 struct mbuf* FUNC_3 () ;
 size_t FUNC_4 (struct mbuf*) ;
 int VAR_2 ;

rstatus_t
FUNC_5(struct msg *VAR_3, uint8_t *VAR_4, size_t VAR_5)
{
    struct mbuf *VAR_6;

    VAR_6 = FUNC_3();
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0(VAR_5 <= FUNC_4(VAR_6));

    FUNC_2(VAR_6, VAR_4, VAR_5);
    VAR_3->mlen += (uint32_t)VAR_5;

    FUNC_1(&VAR_3->mhdr, VAR_6, VAR_2);

    return VAR_1;
}
