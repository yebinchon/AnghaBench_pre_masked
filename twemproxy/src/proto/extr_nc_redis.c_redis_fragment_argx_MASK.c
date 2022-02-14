
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msg_tqh {int dummy; } ;
struct msg {int narg; scalar_t__ type; scalar_t__ nfrag; struct msg* frag_owner; int frag_id; struct msg** frag_seq; int redis; int request; int owner; int keys; int mhdr; } ;
struct mbuf {char* pos; char* start; } ;
struct keypos {scalar_t__ start; scalar_t__ end; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 struct mbuf* FUNC_2 (int *) ;
 int FUNC_3 (struct msg_tqh*,struct msg*,int ) ;
 struct keypos* FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (struct msg*,scalar_t__,scalar_t__) ;
 int FUNC_7 () ;
 struct msg* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct msg*,char*,int) ;
 struct msg** FUNC_10 (int) ;
 int FUNC_11 (struct msg**) ;
 struct msg** FUNC_12 (int) ;
 int FUNC_13 (struct msg*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct msg*,struct msg*) ;

__attribute__((used)) static rstatus_t
FUNC_15(struct msg *VAR_6, uint32_t VAR_7, struct msg_tqh *VAR_8,
                    uint32_t VAR_9)
{
    struct mbuf *VAR_10;
    struct msg **VAR_11;
    uint32_t VAR_12;
    rstatus_t VAR_13;

    FUNC_0(FUNC_5(VAR_6->keys) == (VAR_6->narg - 1) / VAR_9);

    VAR_11 = FUNC_12(VAR_7 * sizeof(*VAR_11));
    if (VAR_11 == ((void*)0)) {
        return VAR_3;
    }

    FUNC_0(VAR_6->frag_seq == ((void*)0));
    VAR_6->frag_seq = FUNC_10(FUNC_5(VAR_6->keys) * sizeof(*VAR_6->frag_seq));
    if (VAR_6->frag_seq == ((void*)0)) {
        FUNC_11(VAR_11);
        return VAR_3;
    }

    VAR_10 = FUNC_2(&VAR_6->mhdr);
    VAR_10->pos = VAR_10->start;







    for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
        for (; *(VAR_10->pos) != '\n';) {
            VAR_10->pos++;
        }
        VAR_10->pos++;
    }

    VAR_6->frag_id = FUNC_7();
    VAR_6->nfrag = 0;
    VAR_6->frag_owner = VAR_6;

    for (VAR_12 = 0; VAR_12 < FUNC_5(VAR_6->keys); VAR_12++) {
        struct msg *VAR_14;
        struct keypos *VAR_15 = FUNC_4(VAR_6->keys, VAR_12);
        uint32_t VAR_16 = FUNC_6(VAR_6, VAR_15->start, VAR_15->end - VAR_15->start);

        if (VAR_11[VAR_16] == ((void*)0)) {
            VAR_11[VAR_16] = FUNC_8(VAR_6->owner, VAR_6->request, VAR_6->redis);
            if (VAR_11[VAR_16] == ((void*)0)) {
                FUNC_11(VAR_11);
                return VAR_3;
            }
        }
        VAR_6->frag_seq[VAR_12] = VAR_14 = VAR_11[VAR_16];

        VAR_14->narg++;
        VAR_13 = FUNC_13(VAR_14, VAR_15->start, VAR_15->end - VAR_15->start);
        if (VAR_13 != VAR_4) {
            FUNC_11(VAR_11);
            return VAR_13;
        }

        if (VAR_9 == 1) {
            continue;
        } else {
            VAR_13 = FUNC_14(((void*)0), VAR_6);
            if (VAR_13 != VAR_4) {
                FUNC_11(VAR_11);
                return VAR_13;
            }

            VAR_13 = FUNC_14(VAR_14, VAR_6);
            if (VAR_13 != VAR_4) {
                FUNC_11(VAR_11);
                return VAR_13;
            }

            VAR_14->narg++;
        }
    }

    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        struct msg *VAR_17 = VAR_11[VAR_12];
        if (VAR_17 == ((void*)0)) {
            continue;
        }

        if (VAR_6->type == VAR_1) {
            VAR_13 = FUNC_9(VAR_17, "*%d\r\n$4\r\nmget\r\n",
                                        VAR_17->narg + 1);
        } else if (VAR_6->type == VAR_0) {
            VAR_13 = FUNC_9(VAR_17, "*%d\r\n$3\r\ndel\r\n",
                                        VAR_17->narg + 1);
        } else if (VAR_6->type == VAR_2) {
            VAR_13 = FUNC_9(VAR_17, "*%d\r\n$4\r\nmset\r\n",
                                        VAR_17->narg + 1);
        } else {
            FUNC_1();
        }
        if (VAR_13 != VAR_4) {
            FUNC_11(VAR_11);
            return VAR_13;
        }

        VAR_17->type = VAR_6->type;
        VAR_17->frag_id = VAR_6->frag_id;
        VAR_17->frag_owner = VAR_6->frag_owner;

        FUNC_3(VAR_8, VAR_17, VAR_5);
        VAR_6->nfrag++;
    }

    FUNC_11(VAR_11);
    return VAR_4;
}
