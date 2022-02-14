
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mhdr {int dummy; } ;
struct mbuf {scalar_t__ pos; scalar_t__ last; } ;


 int VAR_0 ;
 int FUNC_0 (struct mhdr*,struct mbuf*,int ) ;
 int FUNC_1 (int ,char*,struct mbuf*,scalar_t__) ;
 int VAR_1 ;

void
FUNC_2(struct mhdr *VAR_2, struct mbuf *VAR_3)
{
    FUNC_0(VAR_2, VAR_3, VAR_1);
    FUNC_1(VAR_0, "insert mbuf %p len %d", VAR_3, VAR_3->last - VAR_3->pos);
}
