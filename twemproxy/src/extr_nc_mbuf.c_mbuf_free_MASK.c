
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mbuf {scalar_t__ magic; scalar_t__ pos; scalar_t__ last; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (int ,char*,struct mbuf*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_4)
{
    uint8_t *VAR_5;

    FUNC_2(VAR_0, "put mbuf %p len %d", VAR_4, VAR_4->last - VAR_4->pos);

    FUNC_0(FUNC_1(VAR_4, VAR_3) == ((void*)0));
    FUNC_0(VAR_4->magic == VAR_1);

    VAR_5 = (uint8_t *)VAR_4 - VAR_2;
    FUNC_3(VAR_5);
}
