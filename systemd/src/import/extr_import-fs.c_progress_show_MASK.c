
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_4__ {int started; int logged_incomplete; scalar_t__ size; int path; int limit; } ;
typedef TYPE_1__ ProgressInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,scalar_t__) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(ProgressInfo *VAR_1) {
        FUNC_0(VAR_1);


        if (!FUNC_4(&VAR_1->limit))
                return;


        if (!VAR_1->started) {
                VAR_1->started = 1;
                return;
        }


        if (!VAR_1->logged_incomplete) {
                FUNC_3("(Note, file list shown below is incomplete, and is intended as sporadic progress report only.)");
                VAR_1->logged_incomplete = 1;
        }

        if (VAR_1->size == 0)
                FUNC_2("Copying tree, currently at '%s'...", VAR_1->path);
        else {
                char VAR_2[VAR_0];

                FUNC_2("Copying tree, currently at '%s' (@%s)...", VAR_1->path, FUNC_1(VAR_2, sizeof(VAR_2), VAR_1->size));
        }
}
