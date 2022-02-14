
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct msg {int mlen; int mhdr; } ;
struct mbuf {char* pos; char* last; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mbuf* FUNC_1 (int *) ;
 struct mbuf* FUNC_2 (struct mbuf*,int ) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (struct mbuf*) ;
 int FUNC_6 (int *,struct mbuf*) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (int *,struct mbuf*) ;
 scalar_t__ FUNC_10 (struct msg*,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static rstatus_t
FUNC_11(struct msg *VAR_5, struct msg *VAR_6)
{
    struct mbuf *VAR_7, *VAR_8;
    uint8_t *VAR_9;
    uint32_t VAR_10 = 0;
    uint32_t VAR_11 = 0;
    rstatus_t VAR_12;

    for (VAR_7 = FUNC_1(&VAR_6->mhdr);
         VAR_7 && FUNC_5(VAR_7);
         VAR_7 = FUNC_1(&VAR_6->mhdr)) {

        FUNC_9(&VAR_6->mhdr, VAR_7);
        FUNC_8(VAR_7);
    }

    VAR_7 = FUNC_1(&VAR_6->mhdr);
    if (VAR_7 == ((void*)0)) {
        return VAR_2;
    }

    VAR_9 = VAR_7->pos;
    FUNC_0(*VAR_9 == '$');
    VAR_9++;

    if (VAR_9[0] == '-' && VAR_9[1] == '1') {
        VAR_10 = 1 + 2 + VAR_0;
        VAR_9 = VAR_7->pos + VAR_10;
    } else {
        VAR_10 = 0;
        for (; VAR_9 < VAR_7->last && FUNC_3(*VAR_9); VAR_9++) {
            VAR_10 = VAR_10 * 10 + (uint32_t)(*VAR_9 - '0');
        }
        VAR_10 += VAR_0 * 2;
        VAR_10 += (VAR_9 - VAR_7->pos);
    }
    VAR_11 = VAR_10;


    for (; VAR_7;) {
        if (FUNC_7(VAR_7) <= VAR_10) {
            VAR_8 = FUNC_2(VAR_7, VAR_4);
            FUNC_9(&VAR_6->mhdr, VAR_7);
            if (VAR_5 != ((void*)0)) {
                FUNC_6(&VAR_5->mhdr, VAR_7);
            } else {
                FUNC_8(VAR_7);
            }
            VAR_10 -= FUNC_7(VAR_7);
            VAR_7 = VAR_8;
        } else {
            if (VAR_5 != ((void*)0)) {
                VAR_12 = FUNC_10(VAR_5, VAR_7->pos, VAR_10);
                if (VAR_12 != VAR_3) {
                    return VAR_12;
                }
            }
            VAR_7->pos += VAR_10;
            break;
        }
    }

    if (VAR_5 != ((void*)0)) {
        VAR_5->mlen += VAR_11;
    }
    VAR_6->mlen -= VAR_11;
    FUNC_4(VAR_1, "redis_copy_bulk copy bytes: %d", VAR_11);
    return VAR_3;
}
