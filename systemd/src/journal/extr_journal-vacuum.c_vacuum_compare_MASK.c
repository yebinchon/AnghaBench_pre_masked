
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vacuum_info {int filename; int seqnum_id; scalar_t__ have_seqnum; int realtime; int seqnum; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(const struct vacuum_info *VAR_0, const struct vacuum_info *VAR_1) {
        int VAR_2;

        if (VAR_0->have_seqnum && VAR_1->have_seqnum &&
            FUNC_2(VAR_0->seqnum_id, VAR_1->seqnum_id))
                return FUNC_0(VAR_0->seqnum, VAR_1->seqnum);

        VAR_2 = FUNC_0(VAR_0->realtime, VAR_1->realtime);
        if (VAR_2 != 0)
                return VAR_2;

        if (VAR_0->have_seqnum && VAR_1->have_seqnum)
                return FUNC_1(&VAR_0->seqnum_id, &VAR_1->seqnum_id, 16);

        return FUNC_3(VAR_0->filename, VAR_1->filename);
}
