
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct msg_tqh {int dummy; } ;
struct msg {scalar_t__ type; scalar_t__ nfrag; struct msg* frag_owner; int frag_id; int narg; struct msg** frag_seq; int redis; int request; int owner; int keys; int mhdr; } ;
struct mbuf {char* pos; char* start; } ;
struct keypos {scalar_t__ start; scalar_t__ end; } ;
typedef int rstatus_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mbuf* FUNC_1 (int *) ;
 int FUNC_2 (struct msg_tqh*,struct msg*,int ) ;
 struct keypos* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (struct msg*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct msg*,int *,int ) ;
 int FUNC_7 (struct msg*,scalar_t__,scalar_t__) ;
 int FUNC_8 () ;
 struct msg* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct msg*,int *,int) ;
 struct msg** FUNC_11 (int) ;
 int FUNC_12 (struct msg**) ;
 struct msg** FUNC_13 (int) ;

__attribute__((used)) static rstatus_t
FUNC_14(struct msg *VAR_7, uint32_t VAR_8,
                            struct msg_tqh *VAR_9,
                            uint32_t VAR_10)
{
    struct mbuf *VAR_11;
    struct msg **VAR_12;
    uint32_t VAR_13;
    rstatus_t VAR_14;

    VAR_12 = FUNC_13(VAR_8 * sizeof(*VAR_12));
    if (VAR_12 == ((void*)0)) {
        return VAR_4;
    }

    FUNC_0(VAR_7->frag_seq == ((void*)0));
    VAR_7->frag_seq = FUNC_11(FUNC_4(VAR_7->keys) * sizeof(*VAR_7->frag_seq));
    if (VAR_7->frag_seq == ((void*)0)) {
        FUNC_12(VAR_12);
        return VAR_4;
    }

    VAR_11 = FUNC_1(&VAR_7->mhdr);
    VAR_11->pos = VAR_11->start;







    for (; *(VAR_11->pos) != ' ';) {
        VAR_11->pos++;
    }
    VAR_11->pos++;

    VAR_7->frag_id = FUNC_8();
    VAR_7->nfrag = 0;
    VAR_7->frag_owner = VAR_7;

    for (VAR_13 = 0; VAR_13 < FUNC_4(VAR_7->keys); VAR_13++) {
        struct msg *VAR_15;
        struct keypos *VAR_16 = FUNC_3(VAR_7->keys, VAR_13);
        uint32_t VAR_17 = FUNC_7(VAR_7, VAR_16->start, VAR_16->end - VAR_16->start);

        if (VAR_12[VAR_17] == ((void*)0)) {
            VAR_12[VAR_17] = FUNC_9(VAR_7->owner, VAR_7->request, VAR_7->redis);
            if (VAR_12[VAR_17] == ((void*)0)) {
                FUNC_12(VAR_12);
                return VAR_4;
            }
        }
        VAR_7->frag_seq[VAR_13] = VAR_15 = VAR_12[VAR_17];

        VAR_15->narg++;
        VAR_14 = FUNC_5(VAR_15, VAR_16->start, VAR_16->end - VAR_16->start);
        if (VAR_14 != VAR_5) {
            FUNC_12(VAR_12);
            return VAR_14;
        }
    }

    for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
        struct msg *VAR_18 = VAR_12[VAR_13];
        if (VAR_18 == ((void*)0)) {
            continue;
        }


        if (VAR_7->type == VAR_2) {
            VAR_14 = FUNC_10(VAR_18, (uint8_t *)"get ", 4);
        } else if (VAR_7->type == VAR_3) {
            VAR_14 = FUNC_10(VAR_18, (uint8_t *)"gets ", 5);
        }
        if (VAR_14 != VAR_5) {
            FUNC_12(VAR_12);
            return VAR_14;
        }


        VAR_14 = FUNC_6(VAR_18, (uint8_t *)VAR_0, VAR_1);
        if (VAR_14 != VAR_5) {
            FUNC_12(VAR_12);
            return VAR_14;
        }

        VAR_18->type = VAR_7->type;
        VAR_18->frag_id = VAR_7->frag_id;
        VAR_18->frag_owner = VAR_7->frag_owner;

        FUNC_2(VAR_9, VAR_18, VAR_6);
        VAR_7->nfrag++;
    }

    FUNC_12(VAR_12);
    return VAR_5;
}
