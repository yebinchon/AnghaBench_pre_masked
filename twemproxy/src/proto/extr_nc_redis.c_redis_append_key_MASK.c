
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct msg {int mlen; int keys; } ;
struct mbuf {scalar_t__ last; } ;
struct keypos {scalar_t__ end; scalar_t__ start; } ;
typedef int rstatus_t ;
typedef int printbuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct keypos* FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*,int *,scalar_t__) ;
 struct mbuf* FUNC_2 (struct msg*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int,char*,scalar_t__) ;

__attribute__((used)) static rstatus_t
FUNC_4(struct msg *VAR_4, uint8_t *VAR_5, uint32_t VAR_6)
{
    uint32_t VAR_7;
    struct mbuf *VAR_8;
    uint8_t VAR_9[32];
    struct keypos *VAR_10;


    VAR_7 = (uint32_t)FUNC_3(VAR_9, sizeof(VAR_9), "$%d\r\n", VAR_6);
    VAR_8 = FUNC_2(VAR_4, VAR_7);
    if (VAR_8 == ((void*)0)) {
        return VAR_2;
    }
    FUNC_1(VAR_8, VAR_9, VAR_7);
    VAR_4->mlen += VAR_7;


    VAR_8 = FUNC_2(VAR_4, VAR_6);
    if (VAR_8 == ((void*)0)) {
        return VAR_2;
    }

    VAR_10 = FUNC_0(VAR_4->keys);
    if (VAR_10 == ((void*)0)) {
        return VAR_2;
    }

    VAR_10->start = VAR_8->last;
    VAR_10->end = VAR_8->last + VAR_6;
    FUNC_1(VAR_8, VAR_5, VAR_6);
    VAR_4->mlen += VAR_6;


    VAR_8 = FUNC_2(VAR_4, VAR_1);
    if (VAR_8 == ((void*)0)) {
        return VAR_2;
    }
    FUNC_1(VAR_8, (uint8_t *)VAR_0, VAR_1);
    VAR_4->mlen += (uint32_t)VAR_1;

    return VAR_3;
}
