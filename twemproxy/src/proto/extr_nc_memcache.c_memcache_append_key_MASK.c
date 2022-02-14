
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct msg {int mlen; int keys; } ;
struct mbuf {int last; } ;
struct keypos {int start; int end; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct keypos* FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*,int *,int) ;
 struct mbuf* FUNC_2 (struct msg*,int) ;

__attribute__((used)) static rstatus_t
FUNC_3(struct msg *VAR_2, uint8_t *VAR_3, uint32_t VAR_4)
{
    struct mbuf *VAR_5;
    struct keypos *VAR_6;

    VAR_5 = FUNC_2(VAR_2, VAR_4 + 2);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_2->keys);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->start = VAR_5->last;
    VAR_6->end = VAR_5->last + VAR_4;
    FUNC_1(VAR_5, VAR_3, VAR_4);
    VAR_2->mlen += VAR_4;

    FUNC_1(VAR_5, (uint8_t *)" ", 1);
    VAR_2->mlen += 1;
    return VAR_1;
}
