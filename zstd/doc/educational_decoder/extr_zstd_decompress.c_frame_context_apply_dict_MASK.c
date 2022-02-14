
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dictionary_id; } ;
struct TYPE_7__ {int previous_offsets; int ml_dtable; int of_dtable; int ll_dtable; int literals_dtable; int dict_content_len; scalar_t__ dict_content; TYPE_1__ header; } ;
typedef TYPE_2__ frame_context_t ;
struct TYPE_8__ {scalar_t__ dictionary_id; int previous_offsets; int ml_dtable; int of_dtable; int ll_dtable; int literals_dtable; int content_size; scalar_t__ content; } ;
typedef TYPE_3__ dictionary_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(frame_context_t *const VAR_0,
                                     const dictionary_t *const VAR_1) {

    if (!VAR_1 || !VAR_1->content)
        return;



    if (VAR_0->header.dictionary_id != 0 &&
        VAR_0->header.dictionary_id != VAR_1->dictionary_id) {
        FUNC_0("Wrong dictionary provided");
    }



    VAR_0->dict_content = VAR_1->content;
    VAR_0->dict_content_len = VAR_1->content_size;



    if (VAR_1->dictionary_id != 0) {


        FUNC_2(&VAR_0->literals_dtable, &VAR_1->literals_dtable);
        FUNC_1(&VAR_0->ll_dtable, &VAR_1->ll_dtable);
        FUNC_1(&VAR_0->of_dtable, &VAR_1->of_dtable);
        FUNC_1(&VAR_0->ml_dtable, &VAR_1->ml_dtable);


        FUNC_3(VAR_0->previous_offsets, VAR_1->previous_offsets,
               sizeof(VAR_0->previous_offsets));
    }
}
