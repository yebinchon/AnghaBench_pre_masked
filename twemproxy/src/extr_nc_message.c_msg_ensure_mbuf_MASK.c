
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int mhdr; } ;
struct mbuf {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct mbuf* FUNC_1 (int *,struct mbuf*,int ) ;
 struct mbuf* FUNC_2 () ;
 int FUNC_3 (int *,struct mbuf*) ;
 size_t FUNC_4 (struct mbuf*) ;
 int VAR_0 ;

struct mbuf *
FUNC_5(struct msg *VAR_1, size_t VAR_2)
{
    struct mbuf *VAR_3;

    if (FUNC_0(&VAR_1->mhdr) ||
        FUNC_4(FUNC_1(&VAR_1->mhdr, VAR_3, VAR_0)) < VAR_2) {
        VAR_3 = FUNC_2();
        if (VAR_3 == ((void*)0)) {
            return ((void*)0);
        }
        FUNC_3(&VAR_1->mhdr, VAR_3);
    } else {
        VAR_3 = FUNC_1(&VAR_1->mhdr, VAR_3, VAR_0);
    }

    return VAR_3;
}
