
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {scalar_t__ magic; scalar_t__ pos; scalar_t__ last; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,struct mbuf*,int ) ;
 int * FUNC_2 (struct mbuf*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,struct mbuf*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(struct mbuf *VAR_5)
{
    FUNC_3(VAR_0, "put mbuf %p len %d", VAR_5, VAR_5->last - VAR_5->pos);

    FUNC_0(FUNC_2(VAR_5, VAR_3) == ((void*)0));
    FUNC_0(VAR_5->magic == VAR_1);

    VAR_4++;
    FUNC_1(&VAR_2, VAR_5, VAR_3);
}
